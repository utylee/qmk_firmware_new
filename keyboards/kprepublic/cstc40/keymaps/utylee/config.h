/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

// #include "config_common.h"
 
#define NO_SUSPEND_POWER_DOWN
#define USB_SUSPEND_WAKEUP_DELAY 200

/* <<<<<<< HEAD */
#define SPLIT_USB_DETECT
#define FORCE_NKRO

/* USB Device descriptor parameter */
// #define VENDOR_ID       0x4B50 // "KP"
// #define PRODUCT_ID      0x3430 // "40"
// #define DEVICE_VER      0x0001
// #define MANUFACTURER    KPRepublic
// #define PRODUCT         BM40 Hotswap RGB
// #define BACKLIGHT_PIN   B7
// #define BACKLIGHT_LEVELS 3

// #define IGNORE_MOD_TAP_INTERRUPT
/* #define TAPPING_TERM	200 */
#define TAPPING_TERM 190
#define TAPPING_TERM_PER_KEY

// 연이어 모드 키가 눌릴 경우 모드 모드가 안켜지는 문제를 해결하는 코드입니다
// 없어졌다고 합니다
// #define TAPPING_FORCE_HOLD
// #define TAPPING_FORCE_HOLD_PER_KEY
// #define QUICK_TAP_TERM TAPPING_TERM
#define QUICK_TAP_TERM_PER_KEY

// #define RETRO_TAPPING
// #define RETRO_TAPPING_PER_KEY
// #define PERMISSIVE_HOLD
// #define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

//#define AUTO_SHIFT_TIMEOUT 150
//#define AUTO_SHIFT_TIMEOUT_PER_KEY
//#define RETRO_SHIFT
//#define NO_AUTO_SHIFT_SPECIAL

// auto-shift 동작시 ctrl 등 modifier가 눌려있어도 동작하게끔 합니다
//#define AUTO_SHIFT_MODIFIERS
