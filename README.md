# takt11800 - Compaq MX 11800 QMK/VIA Replacement PCB
![Default Layout](https://github.com/vuckale/takt11800/blob/master/Docs/jpgs/overview.jpg "Overview")

Sponsored by PCBWay - [Read More](#pcbway)

This project is a **drop-in replacement PCB** designed for the **Compaq MX 11800**, also known as the **Cherry G80-11800** a classic mechanical keyboard featuring **Cherry MX Brown switches** and an integrated **trackball**.

Originally designed for use in server rooms and rack-mounted setups, the MX 11800's **compact, space-saving layout** made it a go-to choice in enterprise environments.

### Project Features

- **Powered by QMK Firmware** – Fully customizable keymaps, layers, macros, and lighting effects.
- **VIA Support** – Seamless configuration through the user-friendly VIA interface.
- **Trackball Support** – Full functionality for the integrated pointing device.
- **Drop-In Compatible** – No case modifications required. Designed to fit directly into the original shell and work with original components.
- **USB-C Connectivity** – Modern convenience and reliability.

### Why This Project?

The original MX 11800 has aged gracefully, but its internals were due for a modern upgrade. This replacement PCB brings this legendary board into the modern era while preserving its unique charm and functionality.

Whether you're a retro keyboard enthusiast, a server admin with a soft spot for classic gear, or just someone who loves trackball keyboards, this project gives new life to an iconic piece of hardware.

# Layout

## Default Layout
![Default Layout](https://github.com/vuckale/takt11800/blob/master/Docs/jpgs/default_layout.jpg "Default Layout")

This PCB supports multiple layout options. The previous image shows the default layout with colored keys and marked unit sizes that support alternate layouts. The default layout represents the configuration the keyboard is most commonly found in: ANSI enter with a 2.25u enter key, stepped caps lock, and a winkeyless 7u bottom row.

## Extended Layout
![Extended Layout](https://github.com/vuckale/takt11800/blob/master/Docs/jpgs/extended_layout.jpg "Extended Layout")

The extended layout adds support for additional four bottom row variations, which are marked on the image with the letters b–e. For easier assembly, these are also labeled on the PCB itself, with unit sizes marked next to the switch holes and a–e marked on the stabilizer holes. Additionally, the extended layout supports a non-stepped caps lock key, ISO enter, split left shift and a backspace and 2u shift that can be split into two 1u keys. The numpad can also be converted into a full 1u macropad.

## PCB Overview
![Top View](https://github.com/vuckale/takt11800/blob/master/Docs/jpgs/3d_pcb_front.jpg "Top View")
![Back View](https://github.com/vuckale/takt11800/blob/master/Docs/jpgs/3d_pcb_back.jpg "Back View")
![MCU View](https://github.com/vuckale/takt11800/blob/master/Docs/jpgs/3d_mcu.jpg "MCU View")
![PS/2 Interface View](https://github.com/vuckale/takt11800/blob/master/Docs/jpgs/3d_ps2_interface.jpg "PS/2 Interface View")

## PCBWay

![PCBWAY PCB Showcase](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_pcb_showcase.JPEG)

### Ordering Process

PCBWay made prototyping this PCB incredibly straightforward. Their ordering process is intuitive and beginner-friendly. You can find all the necessary files in a  Fabrication Folder of this repository.

![PCBWAY initial ui](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_init_ui.png)

Following the steps on their UI, it was easy to place the order. After uploading the Gerber.zip file, most of the default values were already well-tailored for my 2-layer PCB. The only customization I made was changing the solder mask color—I chose black. There is also option to choose different color Silkscreen or UV printing.

![PCBWAY solder mask color](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_solder_mask.png)

For assembly, PCBWay offers two options: full assembly or stencil-only for DIY soldering. For this project, I chose Assembly by PCBWay, and also opted to have them source all the required components.

To do this, simply check the assembly option and fill in the necessary values as shown:

![PCBWAY assembly checkbox](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_assembly.png)

After clicking "Save to Cart," you can upload the BOM, CPL, and component placement orientation files to complete your order.

![PCBWAY Upload bom, cpl, and component placement orientation](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_upload_bom_cpl_1.png)

![PCBWAY Upload bom, cpl, and component placement orientation](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_upload_bom_cpl_2.png)

My experience with PCBWay was excellent. Any issues with my design were quickly communicated, and their team responded promptly. The total turnaround time was about two weeks, and the boards arrived very well packaged—in anti-static bags and wrapped with plenty of protective shrink wrap.

![PCBWAY package](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_anti_static.JPEG)

### Quality

This is where PCBWay truly shines. I was impressed by the overall PCB quality—the solder mask is perfectly uniform and consistent throughout. In my design, I included both silkscreen text and exposed copper text by selectively removing the top solder mask, and both came out flawless, with crisp details and no smudging or misalignment.

The components—including the MCU, SMD resistors, capacitors, and others—are perfectly placed, with flawless solder joints even on the tiniest parts. I’ll let the image speak for itself.

![PCBWAY MCU and other components](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_mcu_overview.JPEG)

The plated through-holes on this PCB are clean, well-aligned, and have excellent copper coverage—perfect for reliable soldering. 

![PCBWAY solder mask and silk screen](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_silkscreen_overview.JPEG)

### Assembly

After soldering the switches and plugging in the trackball, all that was left was flashing the firmware. The STM32 chips come pre-flashed with a bootloader, so once connected to the PC, holding the BOOT switch and tapping NRST puts the board into flashing mode—simple as that.

The build includes 105 switches, and for a standard ISO layout, it uses 6× 2u stabilizers and 1× 7u stabilizer, though this may vary depending on the chosen layout.

## License

This project is licensed under the **CERN Open Hardware Licence Version 2 - Strongly Reciprocal (CERN-OHL-S)**.

You are free to use, study, modify, and distribute the design files and products based on them, as long as any distributed modifications or derivative works are also released under the same license.

For the full license text, see the [LICENSE](LICENSE) file in this repository or visit the [official CERN OHL v2 page](https://gitlab.com/ohwr/project/cernohl/-/wikis/uploads/b236492596cfc91c12def7d50bbf7da0/cern_ohl_s_v2.pdf).

(C) 2025 [Aleksandar Vuckovic]
