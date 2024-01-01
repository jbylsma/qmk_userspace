BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight. 
COMBO_ENABLE = yes

# https://github.com/qmk/qmk_firmware/pull/21353 causes keyboards not to load correctly
# https://github.com/kinx-project/kint/issues/77#issuecomment-1837631133
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=FALSE
