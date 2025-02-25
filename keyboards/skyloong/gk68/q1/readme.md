# GK68 Q1

![GK68 Q1](https://i.imgur.com/zJC3aMY.jpeg)

## The PCB features:
* QMK & VIA compatibility
* RGB Matrix backlight
* The space bar position switch can be interchanged with split space bar.
* There is a fixed-mount encoder at the top right of the keyboard.


The following is the QMK Firmware for the Destop 68 key layout -  designed in Dongguan Jizhi Electronic Technology Co., Ltd

* Keyboard Maintainer: [NaturalZh](https://github.com/NaturalZh)
* Hardware Supported: DestopPCB for Skyloong keylayout 68%, STM32F103C8T6
* Hardware Availability: http://www.skyloong.com.cn  https://skyloongtech.com

Make example for this keyboard (after setting up your build environment):

    make skyloong/gk68/q1:default

Flashing example for this keyboard:

    make skyloong/gk68/q1:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
