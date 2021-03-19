#include "hashBlock.h"

/* A length-prefixed encoding of the SHA-256 compression function written in Simplicity.
 */
const unsigned char hashBlock[] = {
  0xea, 0x13, 0x90, 0x62, 0x48, 0x2c, 0x14, 0x0a, 0xd1, 0x40, 0xb0, 0xc4,
  0x54, 0x2a, 0x15, 0xc4, 0x58, 0x60, 0x28, 0x16, 0x01, 0x6b, 0xd6, 0x20,
  0x5a, 0x02, 0xd5, 0xb4, 0x4d, 0x02, 0xa1, 0x66, 0x40, 0xa1, 0x24, 0x16,
  0x0a, 0x05, 0x20, 0xa0, 0x58, 0xe2, 0x26, 0x02, 0xa1, 0x5c, 0x44, 0xc4,
  0x54, 0x2d, 0x39, 0x08, 0x16, 0xcd, 0xa2, 0x6c, 0x13, 0x48, 0xb0, 0x0b,
  0x32, 0x0c, 0x34, 0x30, 0xc3, 0x0e, 0x38, 0x59, 0x92, 0x42, 0x05, 0x08,
  0x30, 0xc3, 0xc1, 0x41, 0xc8, 0x30, 0xfa, 0x0c, 0x3c, 0x14, 0x1c, 0x2c,
  0x88, 0x30, 0xc3, 0xc1, 0x41, 0xc6, 0xdc, 0x7c, 0xcc, 0x3c, 0x14, 0x1c,
  0x2c, 0x88, 0x30, 0xc3, 0xc1, 0x41, 0xc6, 0xe1, 0x67, 0xcc, 0xc3, 0xc1,
  0x41, 0xc2, 0xc8, 0x83, 0x0c, 0x3c, 0x14, 0x1c, 0x6e, 0x28, 0x3e, 0x66,
  0x1e, 0x0a, 0x0e, 0x16, 0x43, 0x71, 0x79, 0x87, 0x82, 0x83, 0x8d, 0xc6,
  0x87, 0xe3, 0x53, 0x0f, 0x05, 0x07, 0x0b, 0x22, 0x48, 0x13, 0x8f, 0x4e,
  0x17, 0x1f, 0xe0, 0x92, 0x8e, 0x25, 0x38, 0x34, 0x0c, 0xc2, 0xe4, 0x38,
  0xe0, 0xeb, 0x1c, 0x6e, 0x45, 0x8a, 0x0d, 0xc3, 0x8d, 0xc2, 0x4f, 0xc8,
  0xf1, 0x40, 0x1a, 0x05, 0x88, 0xfc, 0x48, 0x92, 0x8e, 0x0e, 0x03, 0xf1,
  0x18, 0xa0, 0x1a, 0x00, 0xde, 0x07, 0x11, 0x05, 0xc5, 0x41, 0x71, 0x6f,
  0x1d, 0x81, 0x80, 0xb8, 0xa4, 0x7e, 0x32, 0x16, 0xae, 0x0e, 0x28, 0x06,
  0x00, 0x68, 0x03, 0x8e, 0x02, 0xe4, 0x00, 0xfc, 0x86, 0x38, 0xfc, 0x3c,
  0xdc, 0x96, 0x14, 0x01, 0xa0, 0x58, 0x8f, 0xc4, 0x87, 0xd0, 0x6e, 0x47,
  0x8a, 0x05, 0x80, 0x19, 0x01, 0xb8, 0x0e, 0x4a, 0x85, 0xc9, 0xd1, 0xf9,
  0x46, 0x71, 0xf9, 0x0c, 0x6e, 0x59, 0x8a, 0x00, 0xd0, 0x2c, 0x47, 0xe4,
  0x59, 0xf4, 0x1b, 0x95, 0x82, 0x81, 0x60, 0x06, 0x40, 0x6e, 0x03, 0x96,
  0x41, 0x72, 0xe8, 0x7e, 0x60, 0x0e, 0x3f, 0x28, 0x8d, 0xcc, 0x88, 0xa0,
  0x0d, 0x02, 0xc4, 0x7e, 0x53, 0x9f, 0x41, 0xb9, 0x89, 0x14, 0x0b, 0x00,
  0x32, 0x03, 0x70, 0x1c, 0xc7, 0x85, 0xcc, 0xc0, 0xfc, 0xcf, 0x1c, 0x7e,
  0x5f, 0x9b, 0x9a, 0xe1, 0x40, 0x1a, 0x05, 0x88, 0xfc, 0xc2, 0x1f, 0x41,
  0xb9, 0xa7, 0x14, 0x0b, 0x00, 0x32, 0x03, 0x70, 0x1c, 0xd6, 0x8f, 0xcd,
  0xd0, 0x20, 0x1c, 0xda, 0x0f, 0xcd, 0xe9, 0xc2, 0xe6, 0x0b, 0x98, 0x73,
  0x8e, 0x3f, 0x30, 0x87, 0x1b, 0x98, 0xd3, 0x05, 0x42, 0xc8, 0x6d, 0x26,
  0xe6, 0x2c, 0xfc, 0xc9, 0x8a, 0x05, 0x80, 0xc1, 0x66, 0x36, 0xf3, 0x6e,
  0x3e, 0xd1, 0x40, 0xb0, 0x1f, 0x40, 0xa0, 0x5a, 0x02, 0xe6, 0x3b, 0x99,
  0x33, 0x8c, 0x3f, 0x32, 0x06, 0x1b, 0x99, 0x93, 0x85, 0x42, 0xc8, 0x6d,
  0x26, 0xe6, 0x5c, 0xfc, 0xcf, 0x8a, 0x05, 0x80, 0xe1, 0x66, 0x38, 0xfc,
  0x00, 0xe3, 0xf0, 0x03, 0x8d, 0xc0, 0x0c, 0x15, 0x0b, 0x21, 0xb6, 0x18,
  0x2a, 0x16, 0xc1, 0xb7, 0x1b, 0x69, 0xb6, 0x1f, 0x58, 0xa0, 0x58, 0x0f,
  0xa8, 0x50, 0x2d, 0x01, 0x6a, 0x1f, 0x87, 0x0b, 0x88, 0x42, 0xe1, 0xbc,
  0x50, 0x70, 0xa8, 0xc3, 0x71, 0x21, 0xc2, 0xdc, 0x36, 0x67, 0x0a, 0x85,
  0x98, 0xfa, 0x4d, 0xa0, 0x5c, 0x3c, 0x6c, 0xc5, 0x02, 0xc4, 0x2c, 0xc2,
  0xe0, 0xa1, 0x71, 0xe8, 0xdd, 0x00, 0xc7, 0xe8, 0x06, 0x3f, 0x40, 0x30,
  0xa0, 0x58, 0x0d, 0xcf, 0xe9, 0xf9, 0xfd, 0x3f, 0x3f, 0xa2, 0x81, 0x60,
  0x37, 0x3e, 0xa7, 0xe7, 0xd4, 0xfc, 0xfa, 0x8a, 0x05, 0x80, 0xdc, 0xf6,
  0x9f, 0x9e, 0xd3, 0xf3, 0xda, 0x28, 0x16, 0x03, 0x73, 0xcc, 0x7e, 0x79,
  0x8f, 0xcf, 0x30, 0xa0, 0x58, 0x0f, 0xd0, 0x34, 0x7e, 0x75, 0x43, 0x07,
  0x06, 0xe0, 0x70, 0x68, 0x1a, 0x06, 0xe7, 0xb4, 0xfc, 0xf6, 0x9f, 0x9e,
  0xd1, 0x40, 0xb0, 0x01, 0x98, 0xb3, 0x03, 0x82, 0x8d, 0xd0, 0x02, 0x7e,
  0x80, 0x13, 0xf4, 0x00, 0x8a, 0x05, 0x80, 0x0c, 0xc5, 0x98, 0x1c, 0x44,
  0x37, 0x40, 0xb1, 0xfa, 0x05, 0x8f, 0xd0, 0x2c, 0x28, 0x16, 0x00, 0x33,
  0x16, 0x60, 0x71, 0x78, 0xdd, 0x05, 0x67, 0xe8, 0x2b, 0x3f, 0x41, 0x58,
  0xa0, 0x58, 0x00, 0xcc, 0x59, 0x81, 0xc7, 0x83, 0x74, 0x20, 0x1f, 0xa1,
  0x00, 0xfd, 0x08, 0x02, 0x81, 0x60, 0x03, 0x31, 0x66, 0x07, 0x22, 0x40,
  0xe8, 0x5a, 0x1b, 0x9a, 0x13, 0xf4, 0x2e, 0x8a, 0x05, 0xd0, 0xbc, 0x3f,
  0x40, 0xd0, 0x5c, 0xfe, 0x83, 0x8e, 0x00, 0xe2, 0xc8, 0x28, 0x07, 0x20,
  0x00, 0xe2, 0x78, 0x28, 0x07, 0x22, 0x00, 0xe2, 0x28, 0x28, 0x07, 0x24,
  0x00, 0xe1, 0xb0, 0x50, 0x0e, 0x4c, 0x01, 0xc2, 0x20, 0xa0, 0x1c, 0x08,
  0x2e, 0x0e, 0x03, 0x9b, 0xa1, 0x73, 0x70, 0x38, 0x0e, 0x6f, 0x4c, 0x38,
  0x5c, 0xdf, 0x80, 0xe7, 0x04, 0xdd, 0x0f, 0x27, 0x0a, 0x8d, 0xc4, 0x06,
  0x1c, 0x2c, 0x06, 0xe7, 0x18, 0xfd, 0x10, 0x42, 0x83, 0xf1, 0x38, 0xa0,
  0xc3, 0x85, 0xa0, 0x7e, 0x88, 0x11, 0x71, 0x78, 0xfd, 0x07, 0xe1, 0x72,
  0x88, 0xe2, 0xf4, 0x21, 0x9c, 0x1e, 0x53, 0x0e, 0x0e, 0x20, 0x72, 0xa8,
  0x0e, 0x4f, 0x41, 0x40, 0x39, 0x64, 0x07, 0x26, 0x60, 0xa0, 0x1c, 0xba,
  0x03, 0x92, 0x90, 0x50, 0x0e, 0x60, 0x80, 0xe4, 0x7c, 0x14, 0x03, 0x98,
  0xa0, 0x39, 0x15, 0x05, 0x00, 0xe1, 0x03, 0x73, 0xbc, 0x2e, 0x78, 0x42,
  0xe7, 0x77, 0x9e, 0x83, 0x05, 0x47, 0xe7, 0x8c, 0x5c, 0xed, 0x0f, 0x88,
  0xa0, 0x58, 0x85, 0xcd, 0x4f, 0x36, 0x27, 0x1f, 0x9b, 0x11, 0x39, 0xa6,
  0x15, 0x1b, 0x13, 0x73, 0x6a, 0x27, 0x36, 0x22, 0xa1, 0x62, 0x17, 0x3c,
  0xbc, 0xf6, 0x0a, 0x05, 0xb4, 0x07, 0x28, 0x81, 0xd0, 0x02, 0x17, 0x45,
  0xe8, 0xc0, 0x3a, 0x01, 0x85, 0xc3, 0x46, 0x01, 0xd0, 0x12, 0x6e, 0x53,
  0x8a, 0x0d, 0xc7, 0x62, 0x81, 0x74, 0x62, 0xf2, 0x10, 0x0e, 0x80, 0xf3,
  0xf2, 0xb4, 0x50, 0x7e, 0x40, 0x8a, 0x05, 0x98, 0x1c, 0x85, 0x0b, 0x92,
  0x3c, 0x8b, 0x30, 0xdc, 0x8c, 0x3f, 0x40, 0xb1, 0x87, 0xe8, 0xd2, 0x14,
  0x0b, 0x10, 0xb3, 0x1f, 0x49, 0xf9, 0x28, 0x7d, 0x07, 0xe7, 0xe0, 0x4e,
  0x7b, 0xc5, 0xcf, 0x7f, 0x40, 0x01, 0x82, 0xa3, 0x73, 0xfa, 0x27, 0x3d,
  0x47, 0xc4, 0x50, 0x2c, 0x42, 0xe3, 0x9e, 0x3d, 0x17, 0x44, 0xcf, 0x44,
  0xc8, 0x9d, 0x13, 0x26, 0x18, 0x60, 0x9d, 0x01, 0x26, 0x09, 0xd0, 0x12,
  0x60, 0xb9, 0xf6, 0xe8, 0x0a, 0x14, 0x0b, 0x60, 0x5b, 0x80, 0x73, 0x34,
  0x0e, 0x83, 0x90, 0xba, 0x3d, 0x46, 0x18, 0x60, 0x1d, 0x08, 0x07, 0xe6,
  0x74, 0x5c, 0xfa, 0x73, 0xe4, 0x2e, 0x7b, 0xf9, 0xfb, 0x14, 0x0b, 0xa0,
  0x3b, 0xa0, 0x30, 0x5c, 0x00, 0x92, 0x04, 0x08, 0x10, 0x4e, 0x8a, 0x01,
  0x02, 0x74, 0x6a, 0x18, 0x60, 0x9d, 0x09, 0xa2, 0xcc, 0x61, 0x82, 0xe5,
  0x3f, 0x29, 0x05, 0x02, 0xe0, 0x21, 0x70, 0x40, 0x1c, 0xdc, 0x83, 0x84,
  0x85, 0xc9, 0x11, 0xc0, 0x74, 0x2e, 0x8b, 0x87, 0x00, 0xe8, 0x5f, 0x17,
  0x1f, 0x85, 0xc8, 0x10, 0xb9, 0x06, 0x17, 0x21, 0x47, 0x1c, 0x2e, 0x48,
  0x85, 0xd2, 0x23, 0x0b, 0xa4, 0x51, 0xd2, 0x32, 0x17, 0x48, 0xd3, 0xa4,
  0x68, 0x28, 0x17, 0x48, 0xd7, 0xa4, 0x66, 0x2e, 0x91, 0xa7, 0x48, 0xd0,
  0x50, 0x2c, 0x02, 0xe9, 0x1c, 0xf4, 0x8e, 0x44, 0xd0, 0x2c, 0xa0, 0xa0,
  0x58, 0x84, 0xdc, 0x2e, 0x91, 0xff, 0x48, 0xd4, 0x4e, 0x91, 0xa8, 0x9b,
  0x45, 0xd2, 0x42, 0xe9, 0x21, 0x89, 0xc0, 0x45, 0xd2, 0x3a, 0xe9, 0x1d,
  0x09, 0xc0, 0x85, 0x42, 0xc8, 0x27, 0x08, 0x17, 0x49, 0x13, 0xa4, 0x7c,
  0x2e, 0x92, 0x5f, 0x49, 0x00, 0x5c, 0x20, 0x2a, 0x17, 0x49, 0x2f, 0xa4,
  0x86, 0x2e, 0x12, 0x17, 0x0c, 0xe1, 0xa2, 0x81, 0x62, 0x13, 0x88, 0x85,
  0xc4, 0x1d, 0x24, 0x81, 0x70, 0xbe, 0x92, 0x88, 0xa0, 0x5d, 0x25, 0x3e,
  0x92, 0x98, 0x94, 0x54, 0x27, 0x14, 0x8b, 0xa4, 0x9f, 0xb4, 0x5d, 0x25,
  0x6e, 0x22, 0x14, 0x0b, 0xa4, 0xa7, 0xd2, 0x5b, 0x13, 0x80, 0x8b, 0x85,
  0xf4, 0x95, 0xc5, 0x02, 0xc4, 0x27, 0x19, 0x0b, 0x87, 0xf1, 0x88, 0xba,
  0x4c, 0x3c, 0x5e, 0x28, 0x17, 0x19, 0xf1, 0x38, 0xb8, 0x97, 0x8d, 0x05,
  0x02, 0xc0, 0x27, 0x1d, 0x0b, 0x8a, 0x77, 0x0b, 0x8d, 0xba, 0x4d, 0x62,
  0x81, 0x71, 0x57, 0x15, 0x0b, 0xa4, 0xc9, 0xc0, 0x85, 0x02, 0xc0, 0x27,
  0x20, 0x85, 0xd2, 0x70, 0xe2, 0x61, 0x70, 0x7e, 0x93, 0x78, 0xa0, 0x5c,
  0x80, 0xe9, 0x39, 0x8b, 0x8a, 0x02, 0xa1, 0x39, 0x12, 0x2e, 0x2d, 0xe9,
  0x39, 0x0b, 0xa4, 0xed, 0xd2, 0x78, 0x14, 0x0b, 0x88, 0x39, 0x14, 0x2e,
  0x46, 0x71, 0xf8, 0xa0, 0x58, 0x04, 0xe4, 0x88, 0xb9, 0x1f, 0xc8, 0xf1,
  0x72, 0x37, 0x91, 0xc2, 0x81, 0x74, 0xa1, 0x39, 0x06, 0x2e, 0x48, 0xf4,
  0xa0, 0x45, 0x02, 0xc0, 0x27, 0x26, 0x45, 0xd2, 0x89, 0xe3, 0xd1, 0x36,
  0x8b, 0x93, 0x3c, 0x8a, 0x17, 0x4a, 0x33, 0xa5, 0x0a, 0x28, 0x16, 0x01,
  0x39, 0x40, 0x2e, 0x34, 0xe4, 0xd8, 0xb9, 0x21, 0xc9, 0x31, 0x40, 0xb9,
  0x45, 0xd2, 0x91, 0x17, 0x27, 0x39, 0x2c, 0x28, 0x16, 0x01, 0x39, 0x50,
  0x2e, 0x94, 0x77, 0x29, 0xc5, 0xc9, 0x8e, 0x52, 0x8a, 0x05, 0xca, 0x6e,
  0x49, 0x0b, 0x93, 0x3d, 0x29, 0xc1, 0x40, 0xb0, 0x09, 0xcb, 0x01, 0x72,
  0xb3, 0xa5, 0x3c, 0x26, 0x91, 0x72, 0x3f, 0x83, 0x0a, 0x04, 0xe5, 0xa8,
  0xb9, 0x4f, 0xd2, 0x9e, 0x13, 0x70, 0xb9, 0x3d, 0xd2, 0x9d, 0x13, 0x40,
  0xa8, 0x4e, 0x5d, 0x8b, 0x95, 0xbc, 0xb3, 0x13, 0x8b, 0xc5, 0xd2, 0xa6,
  0xe9, 0x56, 0x8b, 0x92, 0x5c, 0xa5, 0x14, 0x0b, 0x00, 0x9c, 0xc1, 0x0b,
  0x97, 0xbc, 0xba, 0x13, 0x81, 0x8b, 0xa5, 0x55, 0xcb, 0x31, 0x73, 0x03,
  0xca, 0xc1, 0x40, 0xb0, 0x09, 0xcc, 0x48, 0xb9, 0x01, 0xc6, 0xe2, 0xe5,
  0xbf, 0x4a, 0xe0, 0x5c, 0xc3, 0xf3, 0x0e, 0x28, 0x16, 0x01, 0x39, 0x8f,
  0x17, 0x2c, 0xf9, 0x7c, 0x27, 0x30, 0x22, 0xe5, 0xaf, 0x31, 0xa2, 0xe5,
  0xcf, 0x31, 0x42, 0x81, 0x60, 0x13, 0x99, 0x61, 0x74, 0xaf, 0xf9, 0x83,
  0x13, 0x8e, 0xc5, 0xca, 0xce, 0x96, 0x08, 0x9c, 0x9c, 0x15, 0x09, 0xcc,
  0xe0, 0xb9, 0x9a, 0xe6, 0x60, 0x5c, 0xce, 0x73, 0x30, 0x28, 0x17, 0x31,
  0x9d, 0x2c, 0x51, 0x38, 0xdc, 0x54, 0x27, 0x34, 0x62, 0xe9, 0x69, 0xf3,
  0x14, 0x2e, 0x67, 0x3a, 0x59, 0x42, 0x81, 0x72, 0xeb, 0x97, 0x42, 0xe6,
  0x5b, 0x99, 0x41, 0x40, 0xb0, 0x09, 0xcd, 0x58, 0xba, 0x5a, 0xfc, 0xce,
  0x8b, 0x95, 0xc1, 0x73, 0x57, 0xd2, 0xdb, 0x17, 0x35, 0x9c, 0xc9, 0x0a,
  0x05, 0x80, 0x4e, 0x6c, 0x85, 0xcc, 0xff, 0x30, 0xc2, 0x72, 0xa4, 0x5c,
  0xcd, 0xf3, 0x46, 0x2e, 0x30, 0x0a, 0x84, 0xe6, 0xe0, 0x5c, 0xd9, 0xf4,
  0xb9, 0x05, 0xc3, 0x02, 0xe6, 0x7b, 0xa5, 0xd4, 0x2e, 0x6d, 0xf9, 0x8f,
  0x14, 0x0b, 0x00, 0x9c, 0xdf, 0x8b, 0x9b, 0xee, 0x6d, 0xc4, 0xe6, 0x78,
  0x5d, 0x2f, 0x1e, 0x6e, 0x45, 0xcd, 0xf7, 0x4b, 0xc8, 0x50, 0x2c, 0x02,
  0x73, 0x8c, 0x2e, 0x6e, 0x39, 0xc1, 0x17, 0x20, 0x82, 0xe7, 0x0f, 0x9c,
  0x71, 0x73, 0x83, 0xd2, 0xf5, 0x14, 0x0b, 0x00, 0x9c, 0xe6, 0x8b, 0x99,
  0x7e, 0x50, 0x8b, 0xa5, 0xe7, 0xc9, 0x11, 0x40, 0x9c, 0xe8, 0x8b, 0x9c,
  0xde, 0x6f, 0x85, 0xca, 0x70, 0xb9, 0xba, 0xe9, 0x7f, 0x89, 0xc4, 0xe2,
  0xa1, 0x39, 0xd7, 0x17, 0x4c, 0x17, 0xa6, 0x00, 0x2e, 0x6f, 0x3a, 0x5f,
  0xc2, 0x81, 0x73, 0x83, 0xd3, 0x0a, 0x15, 0x0a, 0x84, 0xe7, 0x78, 0x5c,
  0xee, 0xf4, 0xc3, 0x85, 0xc4, 0xa1, 0x73, 0xb7, 0xce, 0x68, 0x9c, 0xca,
  0x8a, 0x84, 0xe7, 0x90, 0x5c, 0xe4, 0x73, 0xac, 0x2e, 0x98, 0x9f, 0x3c,
  0x82, 0x81, 0x73, 0x97, 0xd3, 0x15, 0x17, 0x4c, 0x53, 0x9b, 0xc1, 0x40,
  0xb0, 0x09, 0xcf, 0x60, 0xba, 0x62, 0xbc, 0xed, 0x89, 0xc9, 0xc1, 0x73,
  0xcd, 0xcf, 0x50, 0xb8, 0xec, 0x2a, 0x13, 0x9f, 0x21, 0x73, 0xe1, 0xd3,
  0x1e, 0x13, 0x58, 0xb9, 0xef, 0xe7, 0x8c, 0x5d, 0x32, 0x3e, 0x99, 0x08,
  0xa0, 0x58, 0x04, 0xe7, 0xe4, 0x5c, 0xf0, 0x73, 0xee, 0x27, 0x0a, 0x17,
  0x4c, 0xaf, 0xa6, 0x4e, 0x2e, 0x7e, 0xba, 0x64, 0xa2, 0x81, 0x60, 0x13,
  0xa0, 0x00, 0x5c, 0xf3, 0xf3, 0xda, 0x2e, 0x4f, 0x05, 0xd0, 0x03, 0xd0,
  0x02, 0x2e, 0x23, 0x0a, 0x84, 0xe8, 0x06, 0x17, 0x3b, 0x5d, 0x33, 0x41,
  0x39, 0xea, 0x17, 0x40, 0x27, 0x4c, 0xb8, 0x4e, 0x25, 0x15, 0x09, 0xd0,
  0x18, 0x2e, 0x78, 0xf9, 0xb3, 0x17, 0x2f, 0x39, 0xc1, 0x14, 0x09, 0xd0,
  0x20, 0x2e, 0x7f, 0x79, 0xf4, 0x13, 0x92, 0x42, 0xe8, 0x04, 0xe7, 0x98,
  0x4e, 0x62, 0x45, 0x42, 0x74, 0x0b, 0x0b, 0xa6, 0x89, 0xd0, 0x06, 0x2e,
  0x52, 0x85, 0xcf, 0xff, 0x3f, 0xe2, 0xe9, 0xa1, 0x74, 0x0c, 0x0a, 0x05,
  0x80, 0x4e, 0x81, 0xd1, 0x74, 0x00, 0x60, 0x2e, 0x7c, 0xba, 0x07, 0x45,
  0xd3, 0x4f, 0xe8, 0x1a, 0x14, 0x0b, 0x00, 0x9d, 0x04, 0x62, 0xe8, 0x0a,
  0xe8, 0x1f, 0x17, 0x28, 0x82, 0xe8, 0x12, 0xe9, 0xa8, 0x8b, 0x97, 0x21,
  0x50, 0x9d, 0x05, 0x22, 0xe8, 0x18, 0xe9, 0xab, 0x89, 0xd0, 0x02, 0x2e,
  0x9a, 0xcf, 0x4d, 0x44, 0x5c, 0x28, 0x2a, 0x13, 0xa0, 0xbc, 0x5d, 0x03,
  0xdd, 0x02, 0xc2, 0xe9, 0xab, 0x74, 0xd5, 0x85, 0x02, 0xe7, 0x1f, 0x9e,
  0x91, 0x40, 0x9d, 0x06, 0xa2, 0xe8, 0x2d, 0xe9, 0xaf, 0x0b, 0xa0, 0xc7,
  0xa0, 0xa0, 0x50, 0x2e, 0x9b, 0x27, 0x41, 0xb0, 0x9c, 0xf6, 0x8a, 0x84,
  0xe8, 0x3c, 0x17, 0x4d, 0xab, 0xa0, 0xdc, 0x4e, 0x3d, 0x17, 0x41, 0x5f,
  0x41, 0xc8, 0x9c, 0x40, 0x2a, 0x13, 0xa1, 0x08, 0x5c, 0x1f, 0xa0, 0x50,
  0x5d, 0x37, 0x1e, 0x82, 0xa1, 0x73, 0xa8, 0x15, 0x09, 0xd0, 0x8e, 0x2e,
  0x9b, 0xaf, 0x41, 0xc8, 0x9d, 0x37, 0x31, 0x74, 0x22, 0x74, 0x0e, 0x8b,
  0x89, 0xc2, 0xa1, 0x3a, 0x13, 0x45, 0xd3, 0x76, 0xe8, 0x21, 0x17, 0x32,
  0x81, 0x74, 0xdf, 0xfa, 0x6f, 0xe2, 0xe9, 0xbc, 0xf4, 0x26, 0x0a, 0x05,
  0x80, 0x4e, 0x85, 0x41, 0x74, 0xe0, 0x3a, 0x6f, 0xa2, 0x73, 0x70, 0x2e,
  0x85, 0x5e, 0x85, 0x21, 0x3a, 0x15, 0x05, 0x42, 0x74, 0x2d, 0x0b, 0xa1,
  0x0b, 0xa0, 0x9c, 0x5d, 0x0b, 0x5d, 0x38, 0x71, 0x74, 0x05, 0x05, 0x42,
  0x74, 0x2f, 0x8b, 0xa7, 0x11, 0xd0, 0xa2, 0x27, 0x41, 0x30, 0xba, 0x09,
  0x39, 0xcb, 0x14, 0x09, 0xd0, 0xc8, 0x2e, 0x9c, 0x57, 0x43, 0x00, 0xba,
  0x11, 0xc2, 0xe9, 0xc7, 0xf4, 0x2f, 0x0b, 0x99, 0x60, 0xa8, 0x4e, 0x86,
  0xa1, 0x74, 0x28, 0xf4, 0x1f, 0x09, 0xcc, 0x38, 0xb9, 0xda, 0xe6, 0x8c,
  0x50, 0x27, 0x43, 0x78, 0xba, 0x10, 0xfa, 0x19, 0xc5, 0xd0, 0x28, 0x17,
  0x43, 0x1f, 0x43, 0x18, 0xba, 0x11, 0x42, 0xa1, 0x3a, 0x1d, 0x45, 0xd3,
  0xa5, 0xe8, 0x49, 0x13, 0xa1, 0x88, 0x5c, 0xd2, 0x73, 0xca, 0x28, 0x13,
  0xa1, 0xe8, 0x5c, 0xf1, 0x73, 0x7e, 0x2c, 0xb9, 0xa4, 0x14, 0x09, 0xd0,
  0xfc, 0x2e, 0x85, 0x2e, 0x87, 0xa1, 0x39, 0xbd, 0x17, 0x43, 0xdf, 0x43,
  0x20, 0x9c, 0x70, 0x2a, 0x13, 0xa2, 0x10, 0x5d, 0x3a, 0xae, 0x87, 0xf1,
  0x3a, 0x0e, 0x05, 0xd0, 0xfd, 0xd0, 0xfc, 0x2e, 0x87, 0xfe, 0x87, 0x41,
  0x40, 0xb0, 0x09, 0xd1, 0x16, 0x2e, 0x88, 0x9e, 0x88, 0x61, 0x74, 0x2f,
  0x05, 0xd0, 0xff, 0xd1, 0x18, 0x2e, 0x55, 0x85, 0x42, 0x74, 0x48, 0x8b,
  0xa1, 0x13, 0x9e, 0xd1, 0x74, 0x45, 0x74, 0xf0, 0x85, 0xca, 0xe0, 0xa8,
  0x4e, 0x89, 0x61, 0x74, 0x08, 0xf4, 0xf0, 0xc5, 0xd1, 0x1f, 0xd0, 0xf6,
  0x2e, 0x23, 0x0a, 0x84, 0xe8, 0x9b, 0x03, 0xa3, 0xb4, 0x19, 0x81, 0xb4,
  0x0e, 0x08, 0x07, 0x0c, 0x03, 0x88, 0xc0, 0xe2, 0x80, 0x38, 0xb8, 0x0e,
  0x35, 0x03, 0x8e, 0xc0, 0xe4, 0x10, 0x1c, 0x88, 0x03, 0x91, 0xc0, 0x72,
  0x54, 0x0e, 0x4e, 0x81, 0xca, 0x40, 0x39, 0x54, 0x07, 0x2c, 0x40, 0xe5,
  0xc8, 0x1c, 0xc0, 0x01, 0xcc, 0x38, 0x1c, 0xc7, 0x01, 0xcc, 0xa8, 0x1c,
  0xce, 0x81, 0xcd, 0x20, 0x1c, 0xd4, 0x81, 0xcd, 0x80, 0x1c, 0xdb, 0x81,
  0xcd, 0xf8, 0x1c, 0xe3, 0x81, 0xce, 0x70, 0x1c, 0xeb, 0x81, 0xce, 0xf0,
  0x1c, 0xf3, 0x01, 0xcf, 0x68, 0x1c, 0xf9, 0x01, 0xcf, 0xd0, 0x1d, 0x00,
  0x40, 0x74, 0x05, 0x01, 0xd0, 0x22, 0x07, 0x40, 0xc8, 0x1d, 0x04, 0x40,
  0x74, 0x15, 0x01, 0xd0, 0x62, 0x07, 0x41, 0xc8, 0x1d, 0x08, 0x00, 0x74,
  0x24, 0x01, 0xd0, 0xa0, 0x07, 0x42, 0xb8, 0x1d, 0x0b, 0xa0, 0x74, 0x33,
  0x01, 0xd0, 0xde, 0x07, 0x43, 0xb8, 0x1d, 0x10, 0x00, 0x74, 0x44, 0x81,
  0xd1, 0x22, 0x07, 0x44, 0xd0, 0x1d, 0x14, 0x60, 0x74, 0x56, 0x81, 0xd1,
  0x6a, 0x07, 0x46, 0x00, 0x1d, 0x19, 0x60, 0x74, 0x6c, 0x81, 0xd4, 0x08,
  0x05, 0xd4, 0x13, 0x85, 0xd3, 0xf9, 0xe9, 0x14, 0x01, 0xd3, 0x44, 0x37,
  0x48, 0xec, 0xfd, 0x23, 0xc1, 0x40, 0x1d, 0x34, 0x81, 0x62, 0x37, 0x4a,
  0x98, 0xc3, 0xc1, 0x40, 0x1d, 0x34, 0xe3, 0x74, 0xa1, 0x8f, 0xd2, 0x87,
  0x14, 0x01, 0xd3, 0x52, 0x16, 0x21, 0x6b, 0x1b, 0xa5, 0x16, 0x7e, 0x94,
  0x60, 0xa0, 0x0e, 0x9a, 0xc1, 0xba, 0x49, 0x27, 0xe9, 0x25, 0x0a, 0x00,
  0xe9, 0xae, 0x0b, 0x11, 0xba, 0x43, 0xa7, 0xe9, 0x0f, 0x0a, 0x00, 0xe9,
  0xb0, 0x8b, 0xa4, 0x91, 0xd2, 0x41, 0x03, 0xa6, 0xc6, 0x2a, 0x16, 0x80,
  0xb8, 0x10, 0x1c, 0x4a, 0x00
};

const size_t sizeof_hashBlock = sizeof(hashBlock);

/* The commitment Merkle root of the above hashBlock Simplicity expression. */
const uint32_t hashBlock_cmr[] = {
  0xa432e9aeu, 0x74b02620u, 0x56ee1d65u, 0x4ac89985u, 0xf5e4fb55u, 0x7654d948u, 0x06be7f83u, 0x9c0779e9u
};

/* The identity Merkle root of the above hashBlock Simplicity expression. */
const uint32_t hashBlock_imr[] = {
  0xda10f0e8u, 0x530695d0u, 0x7564f0b3u, 0x2feebe77u, 0x265a1d69u, 0xcf802e22u, 0xd77289dau, 0xf6641b8du
};

/* The annotated Merkle root of the above hashBlock Simplicity expression. */
const uint32_t hashBlock_amr[] = {
  0x6e3a2e15u, 0x1276de09u, 0x91176cf4u, 0x70c66100u, 0x7e5f56b7u, 0xd4b8816du, 0x65aaa927u, 0xb1195579u
};
