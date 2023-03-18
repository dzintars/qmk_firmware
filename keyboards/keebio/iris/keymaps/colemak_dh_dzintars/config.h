#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x5256
#define DEVICE_VER      0x0500
#define DESCRIPTION     Split 50 percent ergonomic keyboard

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// #define DYNAMIC_KEYMAP_LAYER_COUNT 5
