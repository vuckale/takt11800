#include "quantum.h"
#include "matrix.h"
#include "config.h"

// Define MUX select pins for column selection
#define MUX_S0 B5
#define MUX_S1 B6
#define MUX_S2 B8
#define MUX_S3 B7
#define MUX_OUT B4  // Multiplexer SIG output (Column read pin)

// Define row pins (direct GPIO scanning)
const pin_t row_pins[MATRIX_ROWS] = ROW_PINS;

// Function to select a column in the multiplexer
static void select_column(uint8_t col) {
    writePin(MUX_S0, (col & 1));
    writePin(MUX_S1, (col & 2));
    writePin(MUX_S2, (col & 4));
    writePin(MUX_S3, (col & 8));
}

// Function to read columns using the multiplexer
static matrix_row_t read_columns(void) {
    matrix_row_t result = 0;

    // Read 16 columns from the MUX
    for (uint8_t col = 0; col < 16; col++) {  
        select_column(col);
        wait_us(5);  // Allow MUX to settle

        if (!readPin(MUX_OUT)) {  // Active-low key detection
            result |= (1 << col);
        }
    }
    return result;
}

// QMK required function: Initialize the multiplexer and row pins
void matrix_init_custom(void) {
    setPinOutput(MUX_S0);
    setPinOutput(MUX_S1);
    setPinOutput(MUX_S2);
    setPinOutput(MUX_S3);
    setPinInputHigh(MUX_OUT);  // MUX Output pin

    // Configure row pins as inputs with pull-ups
    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        setPinInputHigh(row_pins[row]);
    }
}

bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool matrix_has_changed = false;

    for (uint8_t row = 0; row < MATRIX_ROWS; row++) {
        // Activate the row by pulling it low
        setPinOutput(row_pins[row]);
        writePinLow(row_pins[row]);

        // Read columns for this row
        matrix_row_t now_cols = read_columns();

        // Restore row to high-impedance
        setPinInputHigh(row_pins[row]);

        if (current_matrix[row] != now_cols) {
            current_matrix[row] = now_cols;
            matrix_has_changed = true;
        }
    }

    return matrix_has_changed;
}
