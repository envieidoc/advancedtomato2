/*
 * rc4_vectors.h
 * RC4 stream cipher test vectors
 *
 * Copyright (C) 2012, Broadcom Corporation
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom Corporation;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom Corporation.
 *
 * $Id: rc4_vectors.h 241182 2011-02-17 21:50:03Z $
 */

#include <typedefs.h>

/* 16 byte key, 16 bytes of data */
uint8 key_00[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_00[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
	};

uint8 ref_00[] = {
	0xE9, 0x8D, 0x62, 0xCA, 0x03, 0xB7, 0x7F, 0xBB,
	0x8E, 0x42, 0x3D, 0x7D, 0xC2, 0x00, 0xC4, 0xB0
	};

/* 24 byte key, 16 bytes of data */
uint8 key_01[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17
	};

uint8 input_01[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
	};

uint8 ref_01[] = {
	0x2A, 0x82, 0xD7, 0xBB, 0xCF, 0x41, 0xE7, 0xDE,
	0x3F, 0x7F, 0x3F, 0x27, 0x28, 0xD3, 0xE3, 0xBC
	};

/* 32 byte key, 16 bytes of data */
uint8 key_02[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
	};

uint8 input_02[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
	};

uint8 ref_02[] = {
	0x10, 0x35, 0xD3, 0xFA, 0xEE, 0xFA, 0xCF, 0x4A,
	0xFE, 0xA5, 0x34, 0x3B, 0xC4, 0xE8, 0x87, 0x6C
	};

/* 24 byte key, 24 bytes of data */
uint8 key_03[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17
	};

uint8 input_03[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07
	};

uint8 ref_03[] = {
	0x2A, 0x82, 0xD7, 0xBB, 0xCF, 0x41, 0xE7, 0xDE,
	0x3F, 0x7F, 0x3F, 0x27, 0x28, 0xD3, 0xE3, 0xBC,
	0xBC, 0xAC, 0x8A, 0x44, 0xFC, 0x5A, 0xFE, 0x8A
	};

/* 32 byte key, 24 bytes of data */
uint8 key_04[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
	};

uint8 input_04[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07
	};

uint8 ref_04[] = {
	0x10, 0x35, 0xD3, 0xFA, 0xEE, 0xFA, 0xCF, 0x4A,
	0xFE, 0xA5, 0x34, 0x3B, 0xC4, 0xE8, 0x87, 0x6C,
	0xCC, 0x88, 0x22, 0x77, 0xD7, 0xCB, 0xA2, 0xBA
	};

/* 32 byte key, 32 bytes of data */
uint8 key_05[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
	};

uint8 input_05[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 ref_05[] = {
	0x10, 0x35, 0xD3, 0xFA, 0xEE, 0xFA, 0xCF, 0x4A,
	0xFE, 0xA5, 0x34, 0x3B, 0xC4, 0xE8, 0x87, 0x6C,
	0xCC, 0x88, 0x22, 0x77, 0xD7, 0xCB, 0xA2, 0xBA,
	0x6E, 0xF3, 0x2A, 0x82, 0x85, 0xC3, 0xC6, 0x97
	};

/* 16 byte key, 32 bytes of data */
uint8 key_06[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_06[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 ref_06[] = {
	0xE9, 0x8D, 0x62, 0xCA, 0x03, 0xB7, 0x7F, 0xBB,
	0x8E, 0x42, 0x3D, 0x7D, 0xC2, 0x00, 0xC4, 0xB0,
	0xD3, 0x70, 0x83, 0x5C, 0xF6, 0xB2, 0x44, 0xE9,
	0x87, 0x97, 0xAF, 0xD2, 0xF5, 0x3A, 0xED, 0x0D
	};

/* RC4 test vectors generated with our tcl rc4 implementation */
uint8 key_07[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05
	};

uint8 input_07[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};

uint8 ref_07[] = {
	0x0f, 0x17, 0xc0, 0x50, 0xbd, 0x01, 0x7f, 0x4a,
	0xce, 0xa1, 0xde, 0xc3, 0x10, 0x2b, 0x16, 0xd1
	};

uint8 key_08[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05
	};

uint8 input_08[] = {
	0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
	0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08
	};

uint8 ref_08[] = {
	0x0e, 0x15, 0xc3, 0x54, 0xb8, 0x07, 0x78, 0x42,
	0xcf, 0xa3, 0xdd, 0xc7, 0x15, 0x2d, 0x11, 0xd9
	};

uint8 key_09[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05
	};

uint8 input_09[] = {
	0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
	0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18
	};

uint8 ref_09[] = {
	0x1e, 0x05, 0xd3, 0x44, 0xa8, 0x17, 0x68, 0x52,
	0xdf, 0xb3, 0xcd, 0xd7, 0x05, 0x3d, 0x01, 0xc9
	};

uint8 key_10[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05
	};

uint8 input_10[] = {
	0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10,
	0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10
	};

uint8 ref_10[] = {
	0xf1, 0xcb, 0x7a, 0xc8, 0xcb, 0x55, 0x4d, 0x5a,
	0x30, 0x7d, 0x64, 0x5b, 0x66, 0x7f, 0x24, 0xc1
	};

uint8 key_11[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05,
	0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d
	};

uint8 input_11[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};

uint8 ref_11[] = {
	0x85, 0x5c, 0xba, 0xe1, 0x78, 0xfa, 0x5c, 0xc2,
	0xf8, 0x81, 0xa2, 0xef, 0xce, 0x49, 0x47, 0xb7
	};

uint8 key_12[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05,
	0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d
	};

uint8 input_12[] = {
	0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
	0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08
	};

uint8 ref_12[] = {
	0x84, 0x5e, 0xb9, 0xe5, 0x7d, 0xfc, 0x5b, 0xca,
	0xf9, 0x83, 0xa1, 0xeb, 0xcb, 0x4f, 0x40, 0xbf
	};

uint8 key_13[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05,
	0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d
	};

uint8 input_13[] = {
	0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18,
	0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18
	};

uint8 ref_13[] = {
	0x94, 0x4e, 0xa9, 0xf5, 0x6d, 0xec, 0x4b, 0xda,
	0xe9, 0x93, 0xb1, 0xfb, 0xdb, 0x5f, 0x50, 0xaf
	};

uint8 key_14[] = {
	0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05,
	0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d
	};

uint8 input_14[] = {
	0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10,
	0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10
	};

uint8 ref_14[] = {
	0x7b, 0x80, 0x00, 0x79, 0x0e, 0xae, 0x6e, 0xd2,
	0x06, 0x5d, 0x18, 0x77, 0xb8, 0x1d, 0x75, 0xa7
	};

typedef struct {
    int kl;
    uint8 *key;
    int il;
    uint8 *input;
    uint8 *ref;
} rc4_vector_t;

#define RC4_VECTOR_ENTRY(x)    \
	{ sizeof(key_##x), key_##x, sizeof(input_##x), input_##x, ref_##x }

rc4_vector_t rc4_vec[] = {
    RC4_VECTOR_ENTRY(00),
    RC4_VECTOR_ENTRY(01),
    RC4_VECTOR_ENTRY(02),
    RC4_VECTOR_ENTRY(03),
    RC4_VECTOR_ENTRY(04),
    RC4_VECTOR_ENTRY(05),
    RC4_VECTOR_ENTRY(06),
    RC4_VECTOR_ENTRY(07),
    RC4_VECTOR_ENTRY(08),
    RC4_VECTOR_ENTRY(09),
    RC4_VECTOR_ENTRY(10),
    RC4_VECTOR_ENTRY(11),
    RC4_VECTOR_ENTRY(12),
    RC4_VECTOR_ENTRY(13),
    RC4_VECTOR_ENTRY(14)
    };
