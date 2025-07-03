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

PCBWay made prototyping this PCB straightforward and easy. Their intuitive, beginner-friendly ordering process took all the guesswork out of manufacturing. I was impressed by how smoothly everything went, even on my first try. If you're curious to check it out or replicate the build, all the necessary files are neatly organized in the Fabrication Folder of this repository.

![PCBWAY initial ui](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_init_ui.png)

Following the steps on their interface, placing an order with PCBWay was easy. After uploading the Gerber .zip file, the platform pre-filled many default values suitable for my 2-layer PCB, simplifying the process significantly. The only manual customization I initially made was changing the solder mask color to black—a purely aesthetic choice. However, PCBWay offers a wide range of specification options for those who want more control.

You can choose between single pieces, customer-designed panels, or panels assembled by PCBWay, and even combine different PCB designs within a single panel. Layer configurations are highly flexible, ranging from 1 up to 14 layers, with support for advanced materials like FR-4, Aluminum, and Rogers for high-frequency or thermal applications. PCB thickness can be set anywhere from 0.2 mm up to 3.2 mm, and you can define track/spacing resolutions as fine as 3/3 mil. For higher durability or signal performance, different finished copper weights are also available—ranging from bare copper to 12 oz Cu.

Solder mask colors include not only standard options like green, red, and blue, but also premium finishes like matte black and matte green. Silkscreen printing supports multiple colors (white, black, yellow) and even UV multi-color printing. Additional advanced options include edge connectors, various surface finishes like ENIG, immersion silver, and ENEPIG, and via treatments such as tenting, plugging, or open vias.

You also have the option to remove PCBWay's product number for a small fee, specify custom FR4-TG ratings, and opt for specialized features like castellated holes, edge plating, or impedance control. With all these configuration options, PCBWay caters not only to hobbyists but also to professionals needing precise and high-performance PCBs.

![PCBWAY solder mask color](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_solder_mask.png)

For assembly, PCBWay provides a flexible set of options tailored to different needs: you can go with full turnkey assembly, where they source and solder everything; kitted/consigned, where you supply all the parts; or a combo option, where you send some components and let them handle the rest. 

For this project, I went with the full turnkey assembly—PCBWay not only assembled the boards but also sourced all the required components for me. This saved a huge amount of time and hassle, especially for parts that are hard to track down or have long lead times.

They also offer additional customization, like choosing whether to assemble single boards or panelized PCBs (recommended if you're doing runs of 20+ boards or working with small form factors), selecting top, bottom, or dual-sided assembly, and even specifying if you'd like to allow substitute components made in China—which I found useful for speeding up lead times without compromising quality.

Overall, their assembly service felt like a huge win—it was smooth, efficient, and let me focus entirely on design while they took care of the heavy lifting.

To do this, simply check the assembly option and fill in the necessary values as shown:

![PCBWAY assembly checkbox](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_assembly.png)

After clicking "Save to Cart," you can upload the BOM, CPL, and component placement orientation files to complete your order.

![PCBWAY Upload bom, cpl, and component placement orientation](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_upload_bom_cpl_1.png)

![PCBWAY Upload bom, cpl, and component placement orientation](https://github.com/vuckale/takt11800/blob/master/Docs/pcbway/pcbway_upload_bom_cpl_2.png)

After placing the order, I had frequent and helpful communication with their engineering team, who reached out to clarify a few design decisions and even helped me correct some mistakes in my Gerber files. I really appreciated how responsive and collaborative they were—it felt like working with a partner, not just a service provider.

One particularly thoughtful touch was that before final assembly and shipping, they sent me high-resolution photos of the finished PCBs for confirmation. This gave me a last opportunity to visually inspect the boards and ensure everything looked right—a great quality-control step that added to my confidence in the process.

Throughout production, PCBWay provides visual order tracking on their website, which shows exactly where your order is at every stage—file review, fabrication, solder mask, silkscreen, assembly, testing, and packaging. It’s clearly laid out and updated in real time, which made the waiting process far less stressful.

The total turnaround time was about two weeks, which included fabrication, full assembly, and component sourcing. When the package arrived, it was clear that shipping was handled with care: each board was sealed in an anti-static bag, then carefully wrapped with protective shrink wrap and cushioning to prevent any damage during transit.

Overall, the combination of attentive support, visual transparency, and high-quality results made the whole experience smooth and satisfying. I wouldn’t hesitate to work with them again on future prototypes.

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

### Final Words

Overall, working with PCBWay was a smooth and satisfying experience. The ordering process was easy, communication was fast and helpful, and the visual tracking kept me updated every step of the way. With a quick two-week turnaround, high-quality fabrication, flawless assembly, and great attention to detail, PCBWay delivered a professional result I’d gladly rely on again.

## License

This project is licensed under the **CERN Open Hardware Licence Version 2 - Strongly Reciprocal (CERN-OHL-S)**.

You are free to use, study, modify, and distribute the design files and products based on them, as long as any distributed modifications or derivative works are also released under the same license.

For the full license text, see the [LICENSE](LICENSE) file in this repository or visit the [official CERN OHL v2 page](https://gitlab.com/ohwr/project/cernohl/-/wikis/uploads/b236492596cfc91c12def7d50bbf7da0/cern_ohl_s_v2.pdf).

(C) 2025 [Aleksandar Vuckovic]
