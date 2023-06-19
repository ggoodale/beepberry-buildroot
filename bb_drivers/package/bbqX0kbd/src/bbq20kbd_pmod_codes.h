/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Keyboard Driver for Blackberry Keyboards BBQ10 from arturo182. Software written by wallComputer.
 * bbq10kbd_codes.h: Keyboard Layout and Scancodes-Keycodes mapping.
 */

#ifndef BBQ20KBD_PMOD_CODES_H_
#define BBQ20KBD_PMOD_CODES_H_

#include <uapi/linux/input-event-codes.h>

#define NUM_KEYCODES 256

static const uint8_t keycodes[NUM_KEYCODES] = {

	// Map USB HID scancodes to Linux keycode
	[4] = KEY_A,
	[5] = KEY_B,
	[6] = KEY_C,
	[7] = KEY_D,
	[8] = KEY_E,
	[9] = KEY_F,
	[10] = KEY_G,
	[11] = KEY_H,
	[12] = KEY_I,
	[13] = KEY_J,
	[14] = KEY_K,
	[15] = KEY_L,
	[16] = KEY_M,
	[17] = KEY_N,
	[18] = KEY_O,
	[19] = KEY_P,
	[20] = KEY_Q,
	[21] = KEY_R,
	[22] = KEY_S,
	[23] = KEY_T,
	[24] = KEY_U,
	[25] = KEY_V,
	[26] = KEY_W,
	[27] = KEY_X,
	[28] = KEY_Y,
	[29] = KEY_Z,
	[30] = KEY_1,
	[31] = KEY_2,
	[33] = KEY_4,
	[34] = KEY_5,
	[35] = KEY_6,
	[36] = KEY_7,
	[37] = KEY_8,
	[38] = KEY_9,
	[39] = KEY_0,
	[40] = KEY_ENTER,
	[41] = KEY_ESC,
	[42] = KEY_BACKSPACE,
	[43] = KEY_TAB,
	[44] = KEY_SPACE,
	[45] = KEY_MINUS,
	[46] = KEY_EQUAL,
	[47] = KEY_LEFTBRACE,
	[48] = KEY_RIGHTBRACE,
	[49] = KEY_BACKSLASH,
	// No HASHTILDE
	[51] = KEY_SEMICOLON,
	[52] = KEY_APOSTROPHE,
	[53] = KEY_GRAVE,
	[54] = KEY_COMMA,
	[55] = KEY_DOT,
	[56] = KEY_SLASH,
	[57] = KEY_CAPSLOCK,
	[58] = KEY_F1,
	[59] = KEY_F2,
	[60] = KEY_F3,
	[61] = KEY_F4,
	[62] = KEY_F5,
	[63] = KEY_F6,
	[64] = KEY_F7,
	[65] = KEY_F8,
	[66] = KEY_F9,
	[67] = KEY_F10,
	[68] = KEY_F11,
	[69] = KEY_F12,
	[70] = KEY_SYSRQ,
	[71] = KEY_SCROLLLOCK,
	[72] = KEY_PAUSE,
	[73] = KEY_INSERT,
	[74] = KEY_HOME,
	[75] = KEY_PAGEUP,
	[76] = KEY_DELETE,
	[77] = KEY_END,
	[78] = KEY_PAGEDOWN,
	[79] = KEY_RIGHT,
	[80] = KEY_LEFT,
	[81] = KEY_DOWN,
	[82] = KEY_UP,
	[83] = KEY_NUMLOCK,
	[84] = KEY_KPSLASH,
	[85] = KEY_KPASTERISK,
	[86] = KEY_KPMINUS,
	[87] = KEY_KPPLUS,
	[88] = KEY_KPENTER,
	[89] = KEY_KP1,
	[90] = KEY_KP2,
	[91] = KEY_KP3,
	[92] = KEY_KP4,
	[93] = KEY_KP5,
	[94] = KEY_KP6,
	[95] = KEY_KP7,
	[96] = KEY_KP8,
	[97] = KEY_KP9,
	[98] = KEY_KP0,
	[99] = KEY_KPDOT,
	[100] = KEY_102ND,
	[101] = KEY_COMPOSE,
	[102] = KEY_POWER,
	[103] = KEY_KPEQUAL,
	[104] = KEY_F13,
	[105] = KEY_F14,
	[106] = KEY_F15,
	[107] = KEY_F16,
	[108] = KEY_F17,
	[109] = KEY_F18,
	[110] = KEY_F19,
	[111] = KEY_F20,
	[112] = KEY_F21,
	[113] = KEY_F22,
	[114] = KEY_F23,
	[115] = KEY_F24,
	[116] = KEY_OPEN,
	[117] = KEY_HELP,
	[118] = KEY_PROPS,
	[119] = KEY_FRONT,
	[120] = KEY_STOP,
	[121] = KEY_AGAIN,
	[122] = KEY_UNDO,
	[123] = KEY_CUT,
	[124] = KEY_COPY,
	[125] = KEY_PASTE,
	[126] = KEY_FIND,
	[127] = KEY_MUTE,
	[128] = KEY_VOLUMEUP,
	[129] = KEY_VOLUMEDOWN,
	[133] = KEY_KPCOMMA,
	[182] = KEY_KPLEFTPAREN,
	[183] = KEY_KPRIGHTPAREN,
	[224] = KEY_LEFTCTRL,
	[225] = KEY_LEFTSHIFT,
	[226] = KEY_LEFTALT,
	[227] = KEY_LEFTMETA,
	[228] = KEY_RIGHTCTRL,
	[229] = KEY_RIGHTSHIFT,
	[230] = KEY_RIGHTALT,
	[231] = KEY_RIGHTMETA,

	/*
	 * As per the kernel, a keyboard needs to indicate, in advance, which key values it can report.
	 * In order to that, it should have unique scancodes pointing those scancode-keycode pairs.
	 * With the configuration set for now, the keyboard never outputs lower case letters, numbers, and equal to sign.
	 * We can use these as bogus scancodes, and map the keys we want the keyboard to say its pressed when modifier keys are used.
	 * This can change however, in case future software versions of the keyboard micrcontroller itself changes to output other stuff.
	 */

	// These values are not expected to be generated by a keypress, but
	// reported to the input system by alternate modifiers such as the
	// physical Alt key.
	// If there were more than AltGr available in the Linux keymap for
	// modifiers, we wouldn't have to do this. Customize the actual
	// key for these values in the keymap file.
	// This is the largest contiguous gap in the HID -> Linux input code
	// list. HID scancodes on the list below are not safe to send from
	// the keyboard firmware, they will get converted by the driver
	// to alternate keycodes.

	// Produced by firmware for phys. Alt + key
	[135] = 135, // q
	[136] = 136, // w
	[137] = 137, // e
	[138] = 138, // r
	[139] = 139, // t
	[140] = 140, // y
	[141] = 141, // u
	[142] = 142, // i
	[143] = 143, // o
	[144] = 144, // p
	[145] = 145, // a
	[146] = 146, // s
	[147] = 147, // d
	[148] = 148, // f
	[149] = 149, // g
	[150] = 150, // h
	[151] = 151, // j
	[152] = 152, // k
	[153] = 153, // l
	[154] = 154, // z
	[155] = 155, // x
	[156] = 156, // c
	[157] = 157, // v
	[158] = 158, // b
	[159] = 159, // n
	[160] = 160, // m
	[161] = 161, // $

	// Berry key sends Ctrl + key (for Tmux prefix)
	[162] = 162,

	// Unused
	[163] = 163,
	[164] = 164,
	[165] = 165,
	[166] = 166,
	[167] = 167,
	[168] = 168,
	[169] = 169,
	[170] = 170,
	[171] = 171,
	[172] = 172,
	[173] = 173,
	[174] = 174,
	[175] = 175,
	[176] = 176,
	[177] = 177,
	[178] = 178,
	[179] = 179,
	[180] = 180,
	[181] = 181,
};

#endif