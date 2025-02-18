// Copyright 2023 linlin012 (@linlin012)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define AW20216S_EN_PIN_1 B5
#define AW20216S_CS_PIN_1 B12
#define CAPS_LOCK_INDEX 29
#define WIN_MOD_INDEX 16
#define MAC_MOD_INDEX 17

// IMEを監視する"observe_ime"を使用する場合、Num Lockでnicola on/offする。
// キーボード単体でnicola on/offを制御する場合はコメントアウトする。
#define USE_OBSERVE_IME
