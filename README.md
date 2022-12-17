# CDS

Replacement PCB fro the CDS Technology keyboard  (CDS-G5CSKB, Topre HiPro)/

## Introduction

This project is a continuation of my development of open source EC boards.

The CDS Technology keyboard layout is the sole layout option available:

![Layout option](/Assets/Layout_option.png)

## Technical information

- Layout size: board specific
- Compatible switches: EC switches (Topre and NIZ)
- Microcontroller: STM32F401
- Connector: USB-C
- Firmware compatibility: QMK (with VIA/VIAL support)
- Protection hardware (present on both the mainboard and both controller versions):
  - Fused
  - ESD protection

## Renders and Prototypes

### Render

![PCB Front Render](/Assets/PCB_render_front.png)

![PCB Back Render](/Assets/PCB_render_back.png)

### Prototypes

![PCB Front](/Assets/PCB_front.png)

**NOTE**: The silkscreen text near the JST connector has the `GND` and `VBUS` label swapped. This is wrong and have been fixed in the latest revision.

## Revisions and relative features

### Rev1.0

This revision implements all the main features of the mainboard ad controllers mentioned in the specifications.

#### Reset | DFU

**RESET**: Shortly press the `Reset/BOOT0` button.

**DFU**: Press and hold the `Reset/BOOT0`.

![Boot0 pins](/Assets/reset_boot0_button.png)

## Copyright notice

This project is not endorse nor sponsored in any way by Topre Corporation or CDS Technology.

This project is released under the MIT License. For the license, please refer to the LICENSE.md file.
