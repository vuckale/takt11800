// #include "led_control.h"
#include "quantum.h"  // Required for QMK functions


void turn_on_led(pin_t pin) {
    writePinHigh(pin);
}

void turn_off_led(pin_t pin) {
    writePinLow(pin);
}

void matrix_init_user(void) {
    setPinOutput(LAYER_LED);
    writePinLow(LAYER_LED);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    turn_off_led(LAYER_LED);
    switch (get_highest_layer(state)) {
        case 0:
            break;
        case 1:
            turn_on_led(LAYER_LED);
            break;
    }
    return state;
}
