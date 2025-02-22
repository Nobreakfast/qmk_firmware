# MCU name
MCU = atmega32u4

BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
RGB_MATRIX_ENABLE = no     # RGB Matrix enable
RGB_MATRIX_DRIVER = WS2812  # Set the WS2812
COMMAND_ENABLE = yes        # Commands for debug and configuration


# no
CONSOLE_ENABLE = no         # Console for debug
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

