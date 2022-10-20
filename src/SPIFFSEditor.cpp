#include "SPIFFSEditor.h"
#include <FS.h>

//File: edit.htm.gz, Size: 4477
#define edit_htm_gz_len 4477
const uint8_t edit_htm_gz[] PROGMEM = {
0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xB5, 0x3A, 0x69, 0x77, 0x9B, 0x48, 
0xB6, 0xDF, 0xDF, 0x39, 0xEF, 0x3F, 0x10, 0x32, 0x9D, 0xC0, 0x08, 0x21, 0x79, 0x89, 0x3B, 0x2D, 
0x99, 0xA4, 0x25, 0xDB, 0x89, 0xB3, 0xD9, 0x8E, 0x25, 0x25, 0xED, 0x78, 0xFC, 0xFA, 0x14, 0x50, 
0x12, 0xD8, 0x40, 0x61, 0x16, 0x2D, 0xD1, 0xF0, 0xDF, 0xE7, 0xDE, 0x2A, 0x56, 0x59, 0x4E, 0x77, 
0xCF, 0x79, 0x9D, 0x9C, 0x44, 0x45, 0xDD, 0xAA, 0x5B, 0x77, 0x5F, 0x0A, 0x0E, 0x9F, 0x1C, 0x9F, 
0x1F, 0x8D, 0xAF, 0x2E, 0x4E, 0x24, 0x27, 0xF1, 0xBD, 0x57, 0xFF, 0xFB, 0x3F, 0x87, 0xF8, 0x2B, 
0x79, 0x24, 0x98, 0x19, 0x34, 0xE0, 0xCF, 0x94, 0xD8, 0xF8, 0x9B, 0xB8, 0x89, 0x47, 0x5F, 0x9D, 
0x8C, 0x2E, 0xA4, 0x13, 0xDB, 0x4D, 0x58, 0x74, 0xD8, 0x11, 0x33, 0x00, 0x8A, 0x93, 0x95, 0x47, 
0xA5, 0x64, 0x15, 0x52, 0x23, 0xA1, 0xCB, 0xA4, 0x63, 0xC5, 0xB1, 0xE4, 0x53, 0xDB, 0x25, 0x46, 
0x6C, 0x45, 0x14, 0xD0, 0xE8, 0x96, 0xBF, 0xFE, 0xDE, 0x76, 0x03, 0x9B, 0x2E, 0x7B, 0x7B, 0xDD, 
0x6E, 0x3F, 0x64, 0xB1, 0x9B, 0xB8, 0x2C, 0xE8, 0x11, 0x33, 0x66, 0x5E, 0x9A, 0xD0, 0xBE, 0x47, 
0xA7, 0x49, 0xEF, 0x45, 0xB8, 0xEC, 0x9B, 0x2C, 0xB2, 0x69, 0xD4, 0xDB, 0x09, 0x97, 0x12, 0x80, 
0x5C, 0x5B, 0x7A, 0xBA, 0xBF, 0xBF, 0xDF, 0x37, 0x89, 0x75, 0x37, 0x8B, 0x58, 0x1A, 0xD8, 0x6D, 
0x8B, 0x79, 0x2C, 0xEA, 0x3D, 0x9D, 0xBE, 0xC0, 0xBF, 0x7D, 0xDB, 0x8D, 0x43, 0x8F, 0xAC, 0x7A, 
0x01, 0x0B, 0x28, 0xEC, 0x5D, 0xB6, 0x63, 0x87, 0xD8, 0x6C, 0xD1, 0xEB, 0x4A, 0x5D, 0x69, 0xA7, 
0x0B, 0x48, 0xA2, 0x99, 0x49, 0x94, 0xAE, 0x86, 0x7F, 0xF5, 0x7D, 0xB5, 0x3F, 0x65, 0x41, 0xD2, 
0x8E, 0xDD, 0xEF, 0xB4, 0xB7, 0xB3, 0x0B, 0xA7, 0xF1, 0xC7, 0x29, 0xF1, 0x5D, 0x6F, 0xD5, 0x8B, 
0x49, 0x10, 0xB7, 0x63, 0x1A, 0xB9, 0x53, 0x31, 0xBD, 0xA0, 0xEE, 0xCC, 0x49, 0x7A, 0x26, 0xF3, 
0xEC, 0x0C, 0x18, 0x90, 0x52, 0x6F, 0xED, 0xB9, 0x31, 0xEC, 0x46, 0x6E, 0xC5, 0x81, 0x09, 0x0B, 
0x7B, 0x5D, 0x41, 0x7B, 0xB7, 0xEF, 0x93, 0x68, 0xE6, 0x06, 0x30, 0x08, 0x89, 0x6D, 0xBB, 0xC1, 
0xAC, 0xD7, 0xE5, 0xDB, 0x3C, 0x77, 0x5D, 0xB2, 0x1B, 0x51, 0x8F, 0x24, 0xEE, 0x9C, 0xF6, 0x7D, 
0x37, 0x68, 0x2F, 0x5C, 0x3B, 0x71, 0x7A, 0x07, 0x40, 0x64, 0xDF, 0x4A, 0xA3, 0x18, 0x98, 0x0A, 
0x99, 0x1B, 0x24, 0x34, 0xE2, 0xDB, 0xE2, 0x90, 0x04, 0xEB, 0x9C, 0x57, 0x94, 0x40, 0xC1, 0xA8, 
0x1B, 0x78, 0x6E, 0x40, 0xDB, 0xA6, 0xC7, 0xAC, 0xBB, 0xF2, 0xA4, 0x83, 0x70, 0x99, 0x9F, 0xD5, 
0x73, 0xD8, 0x9C, 0x46, 0xEB, 0x4A, 0x5E, 0x7C, 0x77, 0x03, 0xD8, 0x40, 0x7D, 0x72, 0x72, 0x92, 
0xE9, 0xC9, 0x3C, 0x05, 0xEE, 0x34, 0xFE, 0x8B, 0xE4, 0x16, 0xF4, 0x57, 0x2C, 0x6D, 0x30, 0x2E, 
0xB6, 0xB8, 0x41, 0x98, 0x26, 0xEB, 0x87, 0xBA, 0x64, 0x21, 0xB1, 0xDC, 0x64, 0x85, 0xFC, 0xC3, 
0xB2, 0x35, 0x0A, 0x13, 0x76, 0x45, 0x3E, 0xF1, 0x24, 0x14, 0xBA, 0xF4, 0x85, 0x46, 0x36, 0x09, 
0x88, 0x36, 0x88, 0x5C, 0xE2, 0x69, 0xA3, 0x4A, 0xEC, 0x6D, 0x9F, 0x7D, 0x6F, 0xA7, 0x30, 0x86, 
0x67, 0x8F, 0x5A, 0x89, 0x10, 0x32, 0x28, 0xC2, 0xBC, 0x73, 0x93, 0x87, 0x80, 0x07, 0x13, 0x35, 
0x71, 0x71, 0x21, 0x39, 0x42, 0x83, 0x3B, 0x5C, 0x3C, 0x48, 0x31, 0xE7, 0x5C, 0x30, 0xD5, 0x36, 
0x59, 0x92, 0x30, 0x9F, 0xDB, 0x5C, 0xC9, 0xB0, 0xC4, 0xCD, 0xE6, 0xE5, 0x03, 0x8D, 0x6C, 0x97, 
0x7E, 0x0D, 0x7D, 0x1F, 0xE4, 0x9A, 0xB8, 0x16, 0xF1, 0xDA, 0xC4, 0x73, 0x67, 0x41, 0xCF, 0x77, 
0x6D, 0xDB, 0xA3, 0x35, 0xB3, 0xED, 0xA5, 0x91, 0xA7, 0x3C, 0xB7, 0x49, 0x42, 0x7A, 0xAE, 0x4F, 
0x66, 0xB4, 0x13, 0x06, 0x33, 0x00, 0xC7, 0xF4, 0x60, 0x5F, 0x73, 0xBF, 0x0C, 0xCF, 0x2F, 0x17, 
0xDD, 0x0F, 0x6F, 0x67, 0x6C, 0x00, 0x7F, 0xCE, 0x46, 0x13, 0xE7, 0x64, 0x32, 0x83, 0xD1, 0x10, 
0x1F, 0x07, 0x9F, 0x8F, 0x06, 0x9F, 0xE1, 0xE7, 0x68, 0xA7, 0x75, 0x3B, 0xBD, 0xC7, 0x89, 0xE1, 
0x5B, 0x7B, 0x38, 0x9E, 0x9C, 0x0C, 0x06, 0x1F, 0x3A, 0xEF, 0xCE, 0x16, 0x5F, 0x3F, 0x1C, 0x20, 
0x78, 0xE8, 0x75, 0x2F, 0xBF, 0x38, 0xDD, 0xC9, 0xEE, 0x2F, 0xBE, 0x7D, 0x6A, 0x3B, 0x96, 0x3F, 
0x19, 0x7C, 0xFE, 0x7A, 0x39, 0xBF, 0xF2, 0x27, 0xB3, 0xD1, 0xD7, 0x1D, 0xE7, 0xDB, 0xEE, 0x97, 
0xD1, 0xB7, 0xAF, 0x6F, 0xEE, 0xE8, 0x6F, 0xA7, 0xEF, 0xBF, 0x8D, 0x17, 0xB0, 0xE1, 0x98, 0x8D, 
0x26, 0x97, 0xC3, 0x2F, 0xC3, 0xD9, 0xB7, 0xA1, 0x75, 0xB2, 0x34, 0xBD, 0xB3, 0xE1, 0xDB, 0x81, 
0x39, 0xD8, 0xB5, 0x28, 0x9D, 0x8D, 0x2F, 0x87, 0xE9, 0xBB, 0x0F, 0xE7, 0x33, 0xD7, 0x75, 0x46, 
0xDF, 0xCE, 0xC6, 0xD6, 0xD1, 0x8B, 0x8F, 0x93, 0xD3, 0x81, 0xEB, 0x9C, 0xBD, 0xBF, 0xEC, 0xDE, 
0xBD, 0xFD, 0x70, 0x74, 0x6C, 0x5D, 0xBD, 0xBF, 0x3A, 0x38, 0xDE, 0xEB, 0xFC, 0xFC, 0xF3, 0x27, 
0xFB, 0xDC, 0x0D, 0xC6, 0xF3, 0xEF, 0x83, 0xD9, 0xD1, 0xE2, 0xE5, 0x2A, 0x1E, 0x3B, 0xEF, 0xE6, 
0x41, 0xE7, 0x0B, 0xBB, 0x7D, 0xB7, 0xFA, 0x04, 0xFF, 0x2E, 0x2E, 0x5A, 0xE6, 0x68, 0x27, 0x9E, 
0x7C, 0x7E, 0xF7, 0x65, 0x37, 0xFE, 0xE5, 0x45, 0x38, 0x3C, 0x3E, 0x9E, 0xFB, 0xE6, 0x45, 0xC7, 
0xB7, 0xEF, 0xA6, 0xC9, 0xCB, 0xBD, 0x24, 0xBC, 0x9A, 0xA5, 0xDF, 0xEE, 0x5F, 0xBC, 0x77, 0x3A, 
0xE7, 0x94, 0x5C, 0x39, 0xAD, 0xD5, 0xF7, 0xD5, 0x4B, 0x67, 0x7C, 0x3A, 0x3F, 0xF3, 0xC8, 0xF2, 
0xEC, 0xCC, 0xFA, 0xEE, 0xB7, 0x3C, 0xF2, 0xCB, 0xF9, 0xD8, 0x23, 0xD1, 0xCE, 0xC4, 0x1E, 0x74, 
0x5A, 0x47, 0xBB, 0x83, 0xFD, 0x24, 0xBA, 0x3C, 0x0A, 0x8E, 0xF7, 0x6E, 0x47, 0x2F, 0x87, 0xC3, 
0x1D, 0x66, 0xDE, 0xEF, 0xBE, 0xBD, 0x3B, 0x78, 0x3B, 0x39, 0xF8, 0x6C, 0x7E, 0x1E, 0x8C, 0xF6, 
0x87, 0x13, 0x72, 0x35, 0xFA, 0x3C, 0x98, 0xEE, 0x9B, 0x8E, 0xF3, 0xE1, 0xC3, 0xF8, 0x8D, 0x3D, 
0xF8, 0x1E, 0x0D, 0xCE, 0x17, 0x83, 0xE5, 0xC9, 0x64, 0x70, 0xDA, 0xFA, 0x70, 0xF2, 0xA9, 0xBB, 
0x33, 0xBA, 0xDA, 0x9B, 0x7D, 0x3A, 0x58, 0x0C, 0xE3, 0x93, 0xC1, 0xE7, 0x61, 0x77, 0xF6, 0xBE, 
0xE5, 0x93, 0x6F, 0xEC, 0x68, 0x6F, 0xF6, 0xEE, 0xC0, 0xBD, 0xB8, 0x22, 0x83, 0x77, 0xC3, 0xF7, 
0xB1, 0x7B, 0xE9, 0x9F, 0x4E, 0xBA, 0x83, 0xC1, 0xC7, 0x73, 0xFA, 0xE6, 0x68, 0x8F, 0x7C, 0xD8, 
0xB5, 0xBE, 0x82, 0xFC, 0x27, 0xBF, 0xD1, 0x9F, 0x5B, 0x83, 0xC5, 0x79, 0xD7, 0xB3, 0x7E, 0xA1, 
0xE3, 0xD3, 0xAB, 0x31, 0xD7, 0xCE, 0x89, 0xF7, 0x66, 0x7C, 0x37, 0x4A, 0x3F, 0xFB, 0x47, 0x47, 
0xCF, 0x55, 0x29, 0x60, 0xED, 0x88, 0x86, 0x94, 0x24, 0xF5, 0x88, 0x55, 0x7A, 0x08, 0x58, 0x57, 
0x65, 0x87, 0xB9, 0xA7, 0x62, 0xC0, 0x6C, 0xDB, 0xD4, 0x62, 0x11, 0xE1, 0x6B, 0x60, 0x03, 0x8D, 
0xD0, 0xC8, 0xB2, 0x5F, 0x79, 0x08, 0x95, 0x44, 0x08, 0x95, 0x48, 0x60, 0x4B, 0x4A, 0xE1, 0x0A, 
0x18, 0x3E, 0x6C, 0x3A, 0x77, 0x2D, 0xDA, 0x0E, 0xDD, 0x25, 0xF5, 0xDA, 0x7C, 0x73, 0xAF, 0xAB, 
0xAE, 0xB9, 0xC7, 0x15, 0xCB, 0x48, 0x00, 0xB6, 0xC6, 0xB1, 0x16, 0x13, 0xF6, 0x2D, 0xB1, 0x28, 
0xC4, 0x36, 0x70, 0x1A, 0x1F, 0x7F, 0x85, 0xF7, 0xB0, 0xA8, 0x6D, 0xA6, 0xB3, 0xA9, 0xBB, 0x04, 
0x97, 0x9E, 0xBA, 0x81, 0x9B, 0x50, 0x69, 0x27, 0xCE, 0x7E, 0x2D, 0xD0, 0xDC, 0xD1, 0xD5, 0x34, 
0x22, 0x3E, 0x8D, 0xA5, 0x3F, 0x89, 0x66, 0x3D, 0x8D, 0x98, 0x5F, 0x85, 0x91, 0x2C, 0x61, 0xB5, 
0x87, 0x2C, 0x7B, 0x9A, 0x86, 0x1E, 0x23, 0xC0, 0xE6, 0x96, 0xD8, 0x21, 0x22, 0x6A, 0xC4, 0x1D, 
0xAB, 0x8C, 0xAC, 0xB9, 0xA3, 0xED, 0xA2, 0x63, 0xD6, 0x1D, 0x7B, 0x77, 0xBF, 0x72, 0xDE, 0x36, 
0x5F, 0x8B, 0x21, 0x7F, 0x4B, 0xB2, 0xC0, 0x88, 0x50, 0x0B, 0x78, 0x4F, 0x13, 0x10, 0xE9, 0x23, 
0x87, 0xF3, 0x43, 0xF2, 0xD8, 0x50, 0x12, 0x20, 0x42, 0xF5, 0x0E, 0x8F, 0xD5, 0x05, 0x27, 0xB0, 
0x2E, 0x7B, 0x4A, 0x79, 0x2A, 0xD4, 0x9E, 0x86, 0x11, 0x68, 0x83, 0x2E, 0x7E, 0x84, 0xB3, 0xE0, 
0xA9, 0x89, 0x5B, 0xE0, 0x14, 0x49, 0x2F, 0x67, 0xA1, 0xCA, 0x7C, 0x9C, 0xD6, 0x02, 0xF5, 0x43, 
0xAE, 0x00, 0x5C, 0x52, 0xF3, 0x02, 0xA9, 0xF9, 0xA1, 0x54, 0xF7, 0x0E, 0x7E, 0xCA, 0x69, 0xD8, 
0xEF, 0xFE, 0x94, 0xE9, 0xF9, 0xDA, 0x22, 0x2B, 0xEF, 0x74, 0xE1, 0x4F, 0x91, 0x7C, 0x5F, 0x56, 
0x24, 0x98, 0x2F, 0xF0, 0x6F, 0x41, 0x20, 0xE2, 0xA9, 0x01, 0xF7, 0xF6, 0x7F, 0x79, 0x69, 0x9B, 
0x05, 0x30, 0x67, 0xEC, 0x51, 0x78, 0x44, 0x6C, 0x37, 0x8D, 0x7B, 0x2F, 0xBA, 0x3F, 0xE5, 0xF2, 
0xDC, 0xDD, 0x47, 0xDE, 0x4B, 0x5D, 0xE2, 0x43, 0x65, 0xB1, 0x71, 0xE8, 0x06, 0xD2, 0x6E, 0x2C, 
0xA1, 0xBE, 0x49, 0x54, 0x1A, 0x66, 0x23, 0xE1, 0x67, 0xBF, 0x56, 0xA6, 0x89, 0xEB, 0xD7, 0xDD, 
0x9F, 0xD6, 0x49, 0x04, 0xF9, 0x64, 0x0A, 0xD9, 0xA6, 0x17, 0xB1, 0x84, 0x24, 0x54, 0xE9, 0xDA, 
0x74, 0xA6, 0x66, 0xC0, 0xDF, 0x16, 0xD8, 0xDE, 0x81, 0x80, 0x66, 0x87, 0x1D, 0x9E, 0xDC, 0x78, 
0x31, 0x63, 0x45, 0x6E, 0x98, 0xBC, 0x72, 0xA7, 0x0A, 0x16, 0x34, 0x6C, 0x2A, 0xFD, 0xF6, 0xE9, 
0xE3, 0x69, 0x92, 0x84, 0x97, 0xF4, 0x3E, 0xA5, 0x71, 0x62, 0x18, 0x86, 0x8C, 0x3E, 0x0A, 0xE4, 
0x50, 0x5B, 0x56, 0xD7, 0x1B, 0xD0, 0x69, 0x1A, 0x58, 0x48, 0xBF, 0xA2, 0xC2, 0x69, 0xAB, 0x75, 
0x44, 0x93, 0x34, 0x0A, 0xA4, 0x80, 0x2E, 0xA4, 0x81, 0x85, 0x99, 0xFF, 0xB7, 0x73, 0xF3, 0x16, 
0x5C, 0x45, 0x91, 0x3F, 0xC5, 0x4B, 0xDF, 0xDB, 0xD5, 0x71, 0xFB, 0x78, 0x7C, 0xA1, 0x1F, 0xE8, 
0x5D, 0x59, 0xCD, 0x2C, 0x92, 0x58, 0x8E, 0x42, 0xD4, 0x75, 0xF6, 0x97, 0x36, 0xEF, 0xFD, 0xB5, 
0xCD, 0xAE, 0x15, 0xB1, 0x98, 0x4D, 0x93, 0x62, 0x7F, 0x73, 0xAF, 0x13, 0xB1, 0x05, 0xDF, 0x76, 
0x12, 0x45, 0x2C, 0x52, 0xE4, 0xB1, 0xE3, 0xC6, 0x92, 0x09, 0x93, 0x90, 0x6D, 0x25, 0x9B, 0x81, 
0xA8, 0x03, 0x96, 0x48, 0x71, 0x1A, 0x86, 0x2C, 0x4A, 0x36, 0x84, 0xA3, 0x03, 0xAA, 0xAC, 0x10, 
0x81, 0x34, 0xA3, 0x8A, 0xA9, 0x16, 0x84, 0xD8, 0xCC, 0x4A, 0x31, 0x56, 0xE8, 0x33, 0x9A, 0x9C, 
0x88, 0xB0, 0x31, 0x5C, 0xBD, 0xB3, 0x61, 0x45, 0xB5, 0xC1, 0xDA, 0xBA, 0x01, 0xE2, 0x1F, 0xE8, 
0x2A, 0xDF, 0xD3, 0x58, 0x0F, 0x19, 0x1A, 0x90, 0x7C, 0xA0, 0x2B, 0xC5, 0xD4, 0x48, 0xB9, 0xD1, 
0xD4, 0x71, 0x5E, 0x29, 0x35, 0x41, 0x35, 0x5B, 0x5D, 0xCF, 0xC1, 0x86, 0x2C, 0x83, 0x5E, 0x93, 
0x9B, 0x3E, 0x0E, 0xA7, 0x86, 0x8D, 0x43, 0xB1, 0x43, 0x51, 0xAC, 0xC3, 0xA9, 0xFA, 0xBA, 0xBD, 
0xD3, 0x83, 0xD1, 0x2B, 0x18, 0xED, 0x40, 0x24, 0x55, 0x33, 0x35, 0xC3, 0x95, 0x9F, 0x53, 0x9A, 
0x52, 0x3B, 0xE7, 0x8F, 0x46, 0x0D, 0x05, 0x83, 0x64, 0xF4, 0x7B, 0x84, 0x1B, 0xD7, 0x37, 0x7D, 
0xFE, 0x14, 0xA5, 0x41, 0x00, 0xEE, 0x68, 0x4C, 0x89, 0x17, 0x53, 0x31, 0x05, 0x9A, 0x72, 0x40, 
0x42, 0x46, 0x90, 0x7A, 0x5E, 0xD6, 0xDF, 0x40, 0xA7, 0x87, 0x60, 0x89, 0x8C, 0x57, 0xCE, 0xEB, 
0xDF, 0x23, 0x31, 0xDB, 0x2B, 0x8F, 0xB0, 0xF3, 0x33, 0x0A, 0xAC, 0x49, 0x94, 0xD2, 0x3E, 0x18, 
0xE6, 0x13, 0x1B, 0xFC, 0x21, 0x4E, 0x48, 0x60, 0xA1, 0x7D, 0x0A, 0xBD, 0x16, 0xEC, 0x67, 0x82, 
0x53, 0xDC, 0xD7, 0x2F, 0x05, 0x45, 0x94, 0xA9, 0x36, 0x2B, 0x05, 0x54, 0x63, 0x01, 0x90, 0x4D, 
0x75, 0x90, 0xAF, 0xBD, 0x1A, 0xA1, 0x43, 0x18, 0xC6, 0xBE, 0xBA, 0x06, 0xB5, 0xC9, 0x22, 0x3A, 
0xC8, 0xAA, 0xCE, 0xDD, 0x42, 0xCF, 0x9D, 0xCE, 0x90, 0xD1, 0xEB, 0xE4, 0xFE, 0x4C, 0x87, 0x4A, 
0xC7, 0xC3, 0x80, 0x04, 0xBB, 0x81, 0x8E, 0x24, 0x8D, 0x35, 0x44, 0x13, 0x87, 0x2C, 0x88, 0xE9, 
0x18, 0x32, 0x9A, 0x8A, 0x64, 0x5A, 0x42, 0x38, 0xBA, 0x47, 0x83, 0x59, 0xE2, 0x80, 0xE3, 0x40, 
0x7E, 0xB2, 0x9A, 0x22, 0xCA, 0xF8, 0xB2, 0x7C, 0x0A, 0xA1, 0x85, 0x10, 0xCA, 0xCD, 0xB1, 0xE3, 
0x4E, 0x13, 0x05, 0xD4, 0x01, 0x7F, 0x7E, 0x44, 0x19, 0x2F, 0xC9, 0x64, 0xAE, 0x5C, 0x6A, 0xC8, 
0x32, 0x9E, 0x6F, 0xEB, 0x21, 0x81, 0xE0, 0x10, 0xD7, 0x85, 0xF5, 0x06, 0xBC, 0xFF, 0x18, 0xAA, 
0x30, 0x75, 0x4D, 0x8D, 0x02, 0x9E, 0x51, 0xA0, 0x64, 0xFD, 0xC8, 0x86, 0x42, 0xBA, 0x10, 0x36, 
0x14, 0x44, 0x6E, 0x02, 0x50, 0x2A, 0x16, 0x72, 0x01, 0x52, 0x0C, 0x09, 0x10, 0x09, 0x68, 0xCB, 
0x00, 0x0C, 0x3E, 0x4D, 0x1C, 0x66, 0xE3, 0xD4, 0xDB, 0x93, 0xB1, 0xAC, 0xBE, 0x96, 0x5F, 0xCB, 
0x3D, 0x59, 0x16, 0x47, 0xC0, 0x0A, 0xF9, 0x19, 0x8C, 0x5B, 0xD0, 0x5A, 0x59, 0xCC, 0xA6, 0x93, 
0xCB, 0x77, 0x47, 0xCC, 0x07, 0xA1, 0x09, 0xC3, 0x6E, 0xC9, 0x86, 0xDC, 0xDA, 0x02, 0x29, 0x4E, 
0xBB, 0x36, 0x6F, 0x50, 0x0C, 0x4D, 0xAB, 0x02, 0x47, 0x6D, 0xFA, 0xA0, 0xA2, 0x36, 0xEC, 0x4E, 
0x67, 0x01, 0xD7, 0x2F, 0xAA, 0x89, 0x5A, 0x0E, 0xF4, 0x75, 0xD4, 0x20, 0x4A, 0x7D, 0x05, 0xB8, 
0x87, 0x90, 0xD6, 0x06, 0xE9, 0xEB, 0x26, 0x9A, 0x90, 0x06, 0xE5, 0x1A, 0xCD, 0xD6, 0xA1, 0x9E, 
0x6D, 0x51, 0x0D, 0x2D, 0x72, 0xE3, 0xBC, 0x98, 0x06, 0xB6, 0xA2, 0x0A, 0x86, 0xFF, 0x08, 0x43, 
0xBE, 0x1F, 0x85, 0x58, 0x97, 0xF9, 0x28, 0x89, 0xB8, 0x39, 0x6C, 0xE0, 0x4D, 0x72, 0x0E, 0x4F, 
0x29, 0x9A, 0x80, 0x22, 0x1F, 0x41, 0x63, 0x81, 0xD5, 0x07, 0xBA, 0x8F, 0xAC, 0xC9, 0x24, 0x0C, 
0x3D, 0x28, 0xC1, 0xD1, 0xB2, 0x3B, 0xCB, 0xF6, 0x62, 0xB1, 0x68, 0x63, 0xA8, 0x6F, 0xC3, 0x31, 
0x42, 0xA6, 0x10, 0xAD, 0xB3, 0x87, 0x94, 0x52, 0x10, 0xA9, 0x16, 0x63, 0x62, 0x6B, 0xBA, 0x45, 
0xDD, 0xF1, 0x36, 0xDC, 0xB0, 0xB4, 0xDC, 0x3A, 0xB6, 0x67, 0xCF, 0x1A, 0xB8, 0x2B, 0x9F, 0x3A, 
0xDC, 0xDF, 0x60, 0x84, 0x98, 0x18, 0x9E, 0xF0, 0x58, 0xC8, 0xDD, 0x35, 0x67, 0xD7, 0x88, 0x66, 
0x6A, 0x56, 0x3D, 0xAC, 0xE8, 0x61, 0x1A, 0x3B, 0xCA, 0x1A, 0x38, 0xE8, 0x11, 0x4D, 0xC8, 0xAD, 
0x67, 0x6B, 0xC2, 0x18, 0x7A, 0xB0, 0x36, 0x77, 0xC2, 0x9E, 0x95, 0x71, 0x19, 0x3E, 0xD9, 0x42, 
0x73, 0xE9, 0x4F, 0x35, 0xAC, 0x35, 0x97, 0xE2, 0xFE, 0x92, 0x2F, 0x89, 0xB9, 0x31, 0x6D, 0x04, 
0x28, 0xB0, 0xA6, 0x2A, 0x3C, 0xF3, 0x40, 0xFC, 0xC6, 0xF5, 0xE8, 0x24, 0x2F, 0xE0, 0x14, 0x4B, 
0xF3, 0xB5, 0xA9, 0x88, 0xAE, 0x94, 0xE3, 0x72, 0x0C, 0x08, 0xE2, 0xB2, 0x99, 0x42, 0x29, 0x10, 
0xC8, 0x6A, 0xDF, 0xD1, 0xDD, 0x20, 0xA0, 0xD1, 0xE9, 0xF8, 0xD3, 0x47, 0x43, 0xBE, 0xA4, 0x53, 
0x88, 0x11, 0x8E, 0xF4, 0x11, 0x9A, 0x49, 0x08, 0x22, 0x54, 0xB1, 0x54, 0x1D, 0x94, 0x06, 0x5A, 
0x38, 0x72, 0x5C, 0xCF, 0x56, 0x1C, 0x95, 0xA3, 0xB8, 0xE5, 0x28, 0x78, 0x73, 0x09, 0x18, 0x6E, 
0x75, 0x1E, 0x1D, 0xE5, 0x29, 0x1C, 0x2B, 0xC3, 0x93, 0x9F, 0x7A, 0x89, 0x1B, 0x7A, 0x34, 0x0F, 
0xB1, 0xB7, 0x7A, 0x00, 0xE9, 0xDF, 0x90, 0xB1, 0xB3, 0x42, 0xB0, 0x6B, 0x43, 0x7A, 0xE6, 0xD4, 
0xE5, 0x45, 0xE9, 0xB6, 0x83, 0x6E, 0xC5, 0x41, 0x5E, 0xE3, 0x20, 0xAF, 0xBE, 0x37, 0x24, 0x89, 
0x23, 0xC3, 0x94, 0x38, 0x1B, 0x6B, 0x74, 0x7C, 0x12, 0x47, 0x15, 0x30, 0xA8, 0x01, 0x08, 0x10, 
0xF3, 0x85, 0x78, 0x90, 0x00, 0xE4, 0xCE, 0xB6, 0x83, 0x3C, 0x71, 0x90, 0xDD, 0x14, 0x8A, 0x5D, 
0x17, 0x8A, 0x10, 0xE5, 0xB6, 0xCD, 0xB6, 0xD8, 0x6C, 0x36, 0x37, 0x9B, 0xF5, 0xCD, 0x47, 0x5C, 
0x23, 0xDB, 0x36, 0x9B, 0x62, 0x33, 0x69, 0xB0, 0x48, 0x38, 0x8B, 0xA2, 0x66, 0x6D, 0xA3, 0x40, 
0x91, 0x21, 0x19, 0xA6, 0xEB, 0x6C, 0x12, 0x8C, 0xA9, 0xC4, 0xF4, 0xA8, 0x2D, 0xF2, 0x0D, 0xD1, 
0xF1, 0xBA, 0xC4, 0xD8, 0xED, 0x6E, 0x39, 0x85, 0x88, 0x53, 0xDC, 0x26, 0x89, 0x6E, 0x9D, 0x44, 
0x69, 0x44, 0xE6, 0x54, 0xDA, 0x46, 0xA2, 0x5B, 0x33, 0xAD, 0x3B, 0x25, 0xD0, 0x18, 0xF7, 0xBB, 
0xE0, 0x09, 0x1C, 0x05, 0x89, 0x82, 0x78, 0xD0, 0x51, 0x2B, 0xF2, 0xC9, 0xE5, 0xE5, 0xF9, 0xE5, 
0xB5, 0xDC, 0x0A, 0x5A, 0xF2, 0x4D, 0x4F, 0x92, 0x5B, 0x2C, 0x8F, 0x2C, 0x3E, 0x78, 0x18, 0xB7, 
0xA6, 0x0B, 0xD0, 0x86, 0xE2, 0xE9, 0x73, 0xD4, 0x42, 0xA3, 0xF8, 0x50, 0x98, 0xB0, 0xCB, 0x80, 
0x9B, 0x75, 0x11, 0xF7, 0xC1, 0x9E, 0x83, 0x9C, 0x0A, 0x45, 0x68, 0x12, 0xCE, 0xED, 0x17, 0x1E, 
0xA0, 0x83, 0x47, 0x2A, 0xF2, 0xC5, 0x64, 0x0C, 0xE1, 0xA4, 0x83, 0x72, 0x92, 0xB5, 0x40, 0xBB, 
0x53, 0x33, 0x13, 0xA2, 0xA8, 0x05, 0xC1, 0xE5, 0xAE, 0x4A, 0xFF, 0x01, 0x24, 0xCA, 0xF2, 0xDC, 
0xFE, 0x94, 0xD7, 0xD3, 0x13, 0xE8, 0xF1, 0xCB, 0xA9, 0x7C, 0x80, 0x96, 0x91, 0x81, 0x48, 0xB6, 
0x21, 0x98, 0xEA, 0x74, 0x49, 0x2D, 0x08, 0xF4, 0x3E, 0x41, 0x72, 0x62, 0x90, 0x54, 0xFE, 0x00, 
0xA1, 0x0A, 0x7C, 0x67, 0xDB, 0x9E, 0x47, 0x18, 0x07, 0xA3, 0x7A, 0xB0, 0x3A, 0xE4, 0x02, 0xBD, 
0xD5, 0x51, 0xD3, 0x71, 0x23, 0x0B, 0xD7, 0x4A, 0x05, 0xB6, 0x29, 0x1E, 0x56, 0x8A, 0x87, 0xFB, 
0x94, 0x96, 0xEF, 0xBF, 0xEE, 0xDE, 0x68, 0x25, 0x6F, 0x1B, 0xF2, 0x3A, 0x1F, 0xD5, 0x04, 0xC6, 
0x40, 0x60, 0xDC, 0x2A, 0xEE, 0x0D, 0xCC, 0xD7, 0x75, 0x87, 0x52, 0xFB, 0xF7, 0x95, 0x50, 0xFA, 
0x42, 0x39, 0xB5, 0x35, 0xB9, 0xC3, 0xA2, 0x86, 0xF2, 0x55, 0x20, 0xB9, 0x5B, 0xE4, 0x4B, 0xA4, 
0xAD, 0x92, 0xB1, 0xFB, 0x3F, 0xC3, 0x58, 0x60, 0x54, 0x94, 0x73, 0xCF, 0xE5, 0x07, 0x86, 0x46, 
0x47, 0x79, 0xDD, 0xFB, 0x97, 0xAE, 0x5C, 0xFF, 0x9F, 0x7E, 0xD3, 0x52, 0xD5, 0xD7, 0xFF, 0xE8, 
0x70, 0x25, 0x80, 0x68, 0xAF, 0x77, 0x44, 0x6D, 0xC8, 0x60, 0x89, 0xFE, 0x4F, 0xF5, 0x5F, 0x3A, 
0x5F, 0xD2, 0x84, 0x57, 0x5D, 0x01, 0x7B, 0x62, 0x18, 0x65, 0x1F, 0xA0, 0xAE, 0x03, 0x83, 0x65, 
0x35, 0x8D, 0xA3, 0xBD, 0xEA, 0x72, 0x2B, 0xAC, 0x19, 0xA4, 0x88, 0x9E, 0x63, 0xE8, 0x3C, 0x95, 
0x99, 0xE6, 0x0A, 0xDB, 0xBC, 0xE3, 0xEC, 0xE7, 0x1D, 0x9E, 0x5C, 0x0F, 0x16, 0xB6, 0x3B, 0xE7, 
0x91, 0xC2, 0xF2, 0x48, 0x1C, 0x9F, 0xF1, 0xB8, 0x03, 0x9D, 0x3D, 0x77, 0xA3, 0xD9, 0x83, 0x30, 
0x51, 0x9E, 0x71, 0x8B, 0xA2, 0x41, 0x94, 0x36, 0x5B, 0x04, 0x5C, 0xA6, 0xBC, 0x3B, 0xC2, 0x6A, 
0x29, 0xB2, 0x0C, 0xA1, 0xA1, 0xD7, 0x05, 0x0C, 0x8A, 0x8D, 0xFB, 0x8A, 0x3C, 0x4F, 0x89, 0x04, 
0x4D, 0x42, 0x6D, 0x9B, 0x41, 0xA2, 0x52, 0x5D, 0xD4, 0xAF, 0xE0, 0x8F, 0x15, 0x88, 0x77, 0x8F, 
0x54, 0x67, 0x77, 0xB5, 0xC8, 0xF0, 0xFC, 0xD0, 0xF5, 0x67, 0x52, 0x8D, 0x2E, 0xFC, 0xCF, 0x78, 
0xDE, 0x8A, 0x5A, 0xF2, 0xB3, 0xDF, 0x2D, 0x13, 0xA8, 0x03, 0x83, 0xA4, 0x7A, 0xC0, 0x16, 0x8A, 
0xDA, 0x7A, 0x2E, 0x4B, 0x1C, 0xA3, 0x21, 0xFB, 0x64, 0x99, 0xDF, 0x9C, 0x62, 0x4B, 0xD7, 0x97, 
0xF0, 0xB9, 0xB8, 0x88, 0xCB, 0x27, 0xF8, 0x9D, 0x25, 0x49, 0x13, 0xD6, 0x97, 0x8A, 0x6E, 0x51, 
0x5C, 0xD8, 0xC9, 0x52, 0xE7, 0xD5, 0xF3, 0x9A, 0x46, 0x94, 0x48, 0x9B, 0x0B, 0xA6, 0x53, 0x2E, 
0xF4, 0xD4, 0x03, 0x3E, 0xA3, 0x86, 0x74, 0x53, 0xA1, 0x94, 0x84, 0xC3, 0x3D, 0x17, 0xE0, 0x69, 
0x03, 0x2E, 0x2A, 0xDD, 0xB9, 0x1E, 0x83, 0xEB, 0x41, 0xAF, 0xA9, 0xED, 0xA8, 0x58, 0x3F, 0x5D, 
0x43, 0xF5, 0xE4, 0xD1, 0x04, 0x8E, 0x8F, 0x30, 0x5D, 0x3E, 0xB6, 0x39, 0x07, 0x83, 0x9E, 0xC5, 
0xA0, 0x1E, 0x37, 0x0F, 0xF1, 0x8E, 0xE8, 0xD5, 0x39, 0x2C, 0x46, 0x2C, 0xFC, 0x76, 0x65, 0x05, 
0x5D, 0x2A, 0x4E, 0x42, 0xF2, 0x01, 0xDC, 0x60, 0x12, 0xBC, 0xC8, 0x2F, 0xF6, 0x3E, 0x70, 0xFF, 
0x05, 0x04, 0x0B, 0xDA, 0x88, 0x16, 0x05, 0x99, 0x3B, 0x5A, 0x7B, 0x47, 0x15, 0x45, 0x5F, 0xD1, 
0x64, 0x99, 0xCC, 0x5E, 0xD5, 0x5A, 0xB3, 0x78, 0xB8, 0x3A, 0x2A, 0x2C, 0x4F, 0x91, 0x2D, 0x1F, 
0x14, 0x2D, 0xDC, 0xEC, 0x15, 0x38, 0x59, 0x73, 0x53, 0x44, 0x7D, 0x06, 0x71, 0x8B, 0x33, 0x14, 
0x61, 0x4D, 0x51, 0x54, 0xD3, 0x81, 0x32, 0x57, 0xA1, 0x0A, 0x79, 0xC8, 0xD4, 0x85, 0xB0, 0xF7, 
0x92, 0x9B, 0x64, 0x2B, 0xED, 0x1E, 0x6C, 0xFF, 0xBB, 0x49, 0x24, 0x8F, 0x91, 0x88, 0xAF, 0x38, 
0xFE, 0x80, 0x3E, 0xB7, 0x0C, 0xF9, 0x7F, 0x1F, 0x9D, 0x99, 0x70, 0xC8, 0x47, 0xCC, 0xE7, 0x1E, 
0x9D, 0xF2, 0x01, 0xE9, 0xC7, 0xB9, 0x7B, 0x97, 0xE4, 0xDF, 0x6F, 0x25, 0xFF, 0xF6, 0xEF, 0x23, 
0x9B, 0x7B, 0x4C, 0xFC, 0x18, 0xD5, 0xB1, 0xDA, 0x8F, 0xB7, 0x50, 0x0D, 0xB1, 0x1F, 0x6A, 0xE5, 
0x82, 0xE6, 0x78, 0x2B, 0xCD, 0xE1, 0xDF, 0x29, 0xEA, 0x32, 0x2C, 0x50, 0xE5, 0x5E, 0xFB, 0xAE, 
0x2D, 0x44, 0x60, 0x88, 0x6A, 0xD1, 0x58, 0x04, 0x82, 0x26, 0x9E, 0xD8, 0x8A, 0x98, 0xE7, 0x8D, 
0x59, 0xF8, 0xFA, 0x91, 0xF9, 0x5E, 0x39, 0x5F, 0x0C, 0x72, 0x62, 0xAB, 0x25, 0x1C, 0xF1, 0x7C, 
0x2B, 0xE2, 0x8F, 0x74, 0x9A, 0x6C, 0xC5, 0x8C, 0x80, 0x3F, 0x42, 0x8D, 0x6B, 0xFA, 0x22, 0xBA, 
0xDD, 0x43, 0x22, 0x71, 0x01, 0xF2, 0x5B, 0x6B, 0xCE, 0x67, 0x96, 0xE5, 0xCC, 0x55, 0x2B, 0x81, 
0x90, 0x57, 0x4B, 0x33, 0x20, 0x36, 0x98, 0xD8, 0x1E, 0xBF, 0x8B, 0x79, 0xBC, 0xA8, 0x34, 0xD2, 
0x96, 0x1C, 0x2E, 0xAB, 0x39, 0x68, 0xA1, 0x8C, 0xA5, 0x98, 0xC2, 0xC0, 0xFA, 0x1D, 0xA2, 0x5A, 
0x83, 0xEE, 0xBA, 0x0D, 0x44, 0x6A, 0x6E, 0x23, 0x91, 0xCE, 0xA6, 0x53, 0xE8, 0xEC, 0xBE, 0x62, 
0x44, 0xE7, 0x73, 0xAB, 0x72, 0xEE, 0x94, 0x47, 0x75, 0xC0, 0xCF, 0x02, 0x9F, 0xA5, 0x31, 0x65, 
0x69, 0xED, 0x7A, 0x6D, 0xC0, 0x4B, 0x80, 0x41, 0xC1, 0xD6, 0x61, 0xFA, 0xEF, 0x7F, 0x97, 0x0F, 
0xAF, 0x94, 0xB4, 0x15, 0xAB, 0xD5, 0xC4, 0xD5, 0xE1, 0xB2, 0xF6, 0xF0, 0x4A, 0x59, 0xB6, 0x56, 
0x2A, 0xDF, 0xFE, 0xF7, 0xDA, 0x91, 0xA9, 0xA4, 0x5A, 0xAC, 0x25, 0x45, 0x56, 0x2D, 0xDD, 0xE1, 
0x1E, 0xAB, 0xF0, 0xB8, 0x5F, 0x59, 0x17, 0xDA, 0x3C, 0x4F, 0x3C, 0x95, 0x57, 0xC4, 0xB0, 0x6A, 
0x43, 0x60, 0x5B, 0xDC, 0x78, 0xAE, 0x8A, 0x20, 0x86, 0x18, 0x41, 0xFE, 0x1F, 0xD9, 0x82, 0x46, 
0x47, 0x24, 0xA6, 0xD0, 0xDB, 0xD5, 0xE3, 0x13, 0x82, 0xD5, 0x5A, 0x58, 0xDE, 0xBA, 0xBC, 0x58, 
0x06, 0xEE, 0xCB, 0x4F, 0xC2, 0xDE, 0x7A, 0x99, 0x00, 0xA3, 0x69, 0xE3, 0xBC, 0xB9, 0x8E, 0xD5, 
0x0A, 0xB0, 0x7F, 0x2C, 0xBA, 0x1F, 0x28, 0x18, 0x21, 0xAB, 0x80, 0xEE, 0x2F, 0x22, 0x16, 0x92, 
0x19, 0x11, 0x0D, 0x74, 0x9F, 0x2A, 0x73, 0x0D, 0xF1, 0x89, 0x06, 0x3F, 0xCB, 0x2F, 0xDA, 0xA4, 
0x5A, 0xBD, 0xE1, 0x28, 0xB1, 0x06, 0x6B, 0xD4, 0x75, 0x75, 0x89, 0x77, 0xAF, 0xC9, 0x79, 0xAD, 
0x51, 0xA5, 0x5C, 0x9E, 0x92, 0xE3, 0xCD, 0x94, 0x5B, 0x18, 0xB5, 0xD0, 0x4A, 0xBF, 0xB8, 0x9B, 
0x89, 0x8C, 0x6E, 0x3F, 0x3A, 0x4C, 0xFB, 0x51, 0xAB, 0xC5, 0x25, 0x73, 0x7F, 0x1D, 0xDD, 0x88, 
0xDE, 0xC6, 0xC8, 0x1B, 0x48, 0x0C, 0xF6, 0x8D, 0x36, 0x09, 0xE9, 0xC4, 0x55, 0x78, 0xB0, 0x18, 
0x61, 0xB7, 0x03, 0xBD, 0xF1, 0xE6, 0x76, 0x48, 0xB3, 0x5B, 0x77, 0x43, 0xAE, 0x6F, 0x95, 0x18, 
0xA0, 0x49, 0x91, 0x1B, 0x58, 0x6A, 0xE6, 0x40, 0xAA, 0x02, 0xEB, 0x91, 0x12, 0x34, 0xDA, 0x28, 
0x31, 0xEF, 0x9B, 0x25, 0x66, 0xBC, 0x70, 0xF1, 0x92, 0x16, 0x44, 0x66, 0x81, 0xD2, 0xE4, 0x04, 
0x9A, 0xB5, 0x1E, 0x1F, 0x39, 0x89, 0x5F, 0x8D, 0xBC, 0x7C, 0x78, 0x1B, 0xE7, 0x03, 0x2B, 0x2E, 
0x46, 0xCB, 0x1A, 0x10, 0x1A, 0xB5, 0x1C, 0xCC, 0x82, 0x69, 0x3E, 0x74, 0x03, 0xB7, 0xC0, 0x53, 
0x00, 0x8B, 0xDF, 0x30, 0xCC, 0x47, 0xA1, 0x53, 0x8C, 0x1C, 0xBA, 0x2C, 0xF7, 0xB1, 0x02, 0x6A, 
0x53, 0xB9, 0x97, 0xEB, 0x1A, 0x35, 0x9F, 0x65, 0xC5, 0x95, 0x23, 0xBF, 0x32, 0x29, 0x65, 0x11, 
0xFC, 0x3F, 0xCB, 0x22, 0x0C, 0x66, 0x05, 0x67, 0x61, 0x31, 0x9A, 0xB9, 0x05, 0x5F, 0xA6, 0x1F, 
0xFE, 0x88, 0x2A, 0x71, 0x6B, 0x52, 0x95, 0x49, 0x9B, 0x7D, 0x06, 0x14, 0xE1, 0xA8, 0xED, 0x33, 
0x66, 0xF3, 0x5E, 0xE2, 0x49, 0x9D, 0x0E, 0xBB, 0x11, 0x00, 0x36, 0x56, 0xAA, 0x19, 0x53, 0x6C, 
0x30, 0xF1, 0xAC, 0x2A, 0xD0, 0x7D, 0xC4, 0xB9, 0x79, 0x0D, 0x1B, 0x69, 0xE2, 0x22, 0x31, 0xDA, 
0xDE, 0xFA, 0x46, 0x79, 0xEB, 0x1B, 0xE7, 0x3E, 0xFC, 0xE3, 0x33, 0xFB, 0x78, 0x26, 0x74, 0x20, 
0x0D, 0xDB, 0x0B, 0xF1, 0x58, 0xE1, 0x21, 0x1B, 0xDD, 0x5E, 0xB4, 0xD1, 0x0C, 0xDF, 0x6F, 0x36, 
0x77, 0xC7, 0x27, 0x1F, 0x4F, 0xC6, 0x27, 0x55, 0x7B, 0x17, 0x69, 0xC8, 0x43, 0xED, 0x12, 0x1E, 
0xFC, 0x44, 0x8B, 0x1E, 0x32, 0x15, 0x6B, 0x29, 0x67, 0x2A, 0x36, 0x04, 0x53, 0xF8, 0x4E, 0xC2, 
0xC1, 0xA5, 0xDA, 0xFB, 0xD1, 0xF9, 0x19, 0xDE, 0x68, 0x42, 0xE0, 0x49, 0xD5, 0xE2, 0xD5, 0x03, 
0x84, 0xC9, 0x46, 0xF0, 0x64, 0x05, 0xD6, 0x3A, 0x2D, 0x78, 0x2D, 0x59, 0x12, 0xC2, 0x3F, 0xC6, 
0xE8, 0x45, 0x99, 0x26, 0x08, 0x10, 0xC2, 0x46, 0xC6, 0x8B, 0x60, 0x83, 0x7A, 0xDD, 0x6C, 0xBF, 
0xC4, 0xA7, 0x2B, 0x0A, 0xD5, 0x2C, 0x8D, 0x68, 0x36, 0xDE, 0x89, 0x97, 0x0B, 0x5C, 0xC5, 0x2B, 
0x2E, 0x0C, 0x64, 0x48, 0x7A, 0x6E, 0x20, 0x3A, 0x54, 0xFF, 0x31, 0x0B, 0xF5, 0x36, 0x2C, 0xD4, 
0xDF, 0x6A, 0xA1, 0x7E, 0xDD, 0x5B, 0x2B, 0xCC, 0x26, 0x50, 0x73, 0xD7, 0xAF, 0xFC, 0x68, 0x2B, 
0x44, 0xB8, 0xE6, 0xF6, 0x4D, 0xE8, 0xF2, 0x00, 0xE1, 0x0E, 0x5F, 0x07, 0xA0, 0xDB, 0xC3, 0xFC, 
0x2D, 0x99, 0x13, 0xF1, 0x22, 0xAB, 0xB9, 0x8D, 0x03, 0xAD, 0xDF, 0xD1, 0x9F, 0x1B, 0x27, 0x3D, 
0x36, 0x8F, 0x7E, 0xBF, 0x1D, 0x52, 0x46, 0x95, 0xB8, 0x1A, 0xD6, 0x82, 0x43, 0xB2, 0x2D, 0xD6, 
0x54, 0x01, 0x88, 0x87, 0x9A, 0xC0, 0xF0, 0x4B, 0x57, 0x0C, 0xB2, 0x4A, 0x92, 0xD6, 0xE6, 0x3B, 
0x36, 0x6C, 0x11, 0xF9, 0x6B, 0x4A, 0x9D, 0xE3, 0xAD, 0x2D, 0x25, 0x9B, 0x4B, 0x89, 0xE1, 0x2A, 
0x96, 0x5A, 0x5B, 0x61, 0x6F, 0xAE, 0xB0, 0xC5, 0x45, 0x97, 0x8F, 0x17, 0x67, 0xB5, 0x75, 0xB3, 
0xCD, 0x75, 0x33, 0xB1, 0x0E, 0x7A, 0x79, 0x82, 0x5A, 0xE6, 0x27, 0x09, 0x39, 0x54, 0x30, 0xA1, 
0x18, 0x51, 0xA6, 0x4F, 0x0D, 0x62, 0x51, 0x1D, 0x6D, 0x53, 0xA1, 0x8D, 0x9B, 0x2D, 0x4F, 0xF3, 
0xB9, 0x27, 0x78, 0xDB, 0xDD, 0xDB, 0xCB, 0xDD, 0xDB, 0x57, 0x1B, 0xB5, 0x83, 0xA7, 0x05, 0xB8, 
0xEF, 0x4F, 0x5D, 0xD1, 0x20, 0x78, 0xE8, 0x31, 0x53, 0xB9, 0x0E, 0x6E, 0xB4, 0x35, 0x32, 0xD4, 
0xF3, 0x33, 0x55, 0xF3, 0xFE, 0xF8, 0xA2, 0xA6, 0x9E, 0x8F, 0x39, 0x9D, 0x8D, 0xFB, 0x88, 0x47, 
0xDE, 0xFE, 0xFC, 0xA0, 0xFD, 0xCF, 0xEB, 0x44, 0xE4, 0x36, 0xF7, 0xFB, 0x29, 0x5E, 0xDC, 0xF3, 
0x3B, 0x52, 0xF0, 0x05, 0x11, 0xC0, 0x6A, 0x53, 0x32, 0xC4, 0xA9, 0x29, 0x54, 0x66, 0x94, 0x44, 
0x23, 0x7E, 0xFB, 0xC3, 0xCB, 0x87, 0xAC, 0x76, 0xA1, 0xE1, 0xFD, 0x38, 0x08, 0xE0, 0x4F, 0xCF, 
0xCB, 0x34, 0x87, 0xEB, 0x9C, 0x80, 0x0F, 0xE6, 0xDE, 0x82, 0x27, 0x43, 0x45, 0x37, 0xA2, 0x71, 
0xCC, 0x71, 0xE2, 0x99, 0x9F, 0x20, 0x48, 0x2A, 0x32, 0xA8, 0xA9, 0xE3, 0xC3, 0x08, 0x35, 0x8B, 
0xA7, 0x03, 0x60, 0xEC, 0x50, 0x3F, 0x87, 0x24, 0x38, 0x04, 0x10, 0x5E, 0xAB, 0xE8, 0xFF, 0xE0, 
0xFC, 0x8C, 0x78, 0x35, 0x8D, 0x37, 0xFF, 0xEF, 0xC4, 0x5B, 0xE8, 0x55, 0xFF, 0x21, 0xEE, 0x49, 
0x4C, 0x47, 0x6C, 0x9A, 0x8C, 0x89, 0x19, 0x2B, 0xE2, 0xAD, 0xC6, 0xC3, 0x35, 0x00, 0x1C, 0x41, 
0x5D, 0xA0, 0xEC, 0x22, 0x10, 0x2B, 0x5C, 0x28, 0x70, 0x3D, 0x2C, 0x72, 0xC5, 0x1B, 0xDA, 0x8F, 
0x60, 0x79, 0xE5, 0x5E, 0x00, 0x8F, 0x1C, 0xB6, 0xB8, 0x88, 0xDC, 0x20, 0xF9, 0xC4, 0xAF, 0x34, 
0x14, 0x9E, 0xAE, 0x10, 0x66, 0x89, 0x4B, 0x42, 0x2E, 0x90, 0xE2, 0xF6, 0x70, 0x8D, 0xF5, 0x47, 
0xAF, 0x71, 0x87, 0xA8, 0x99, 0xE0, 0x34, 0x50, 0x58, 0xF5, 0xD6, 0x0B, 0x37, 0xE8, 0xC9, 0x47, 
0x49, 0xE4, 0xB5, 0x47, 0xB2, 0xE6, 0x13, 0x0B, 0x1E, 0xC4, 0x1A, 0x78, 0xCE, 0x34, 0x0C, 0x67, 
0xD5, 0x7B, 0x08, 0x10, 0xB8, 0xA9, 0x58, 0x9A, 0x87, 0xD4, 0x0B, 0x25, 0xA9, 0x2D, 0x59, 0x86, 
0x50, 0x99, 0x69, 0xF8, 0x52, 0xE3, 0x3C, 0xF0, 0x56, 0x3D, 0x91, 0x38, 0xFF, 0x80, 0x14, 0x70, 
0x26, 0xF6, 0x23, 0x52, 0xBE, 0x6D, 0x90, 0xF2, 0x6D, 0x1B, 0x29, 0x5E, 0x53, 0x88, 0xF0, 0x30, 
0x01, 0xB4, 0x9F, 0x48, 0x40, 0x66, 0xF8, 0x72, 0x42, 0xC7, 0x43, 0x72, 0xC1, 0xFC, 0x55, 0xFA, 
0x22, 0xFA, 0x63, 0xFA, 0x46, 0xF8, 0x9A, 0xE4, 0x01, 0x95, 0xC5, 0xEC, 0x7F, 0x41, 0x2B, 0x1E, 
0xF8, 0x23, 0x5A, 0xF3, 0x7A, 0xBD, 0xAA, 0x3F, 0x72, 0xFF, 0xF7, 0x1E, 0xB9, 0x91, 0x2B, 0xEE, 
0x1B, 0xFD, 0xBE, 0x05, 0xFF, 0x44, 0xE4, 0xEB, 0x6F, 0x86, 0xAD, 0xBF, 0xEE, 0x11, 0xB7, 0x18, 
0x40, 0x8B, 0x24, 0x3A, 0xE5, 0xB1, 0x0D, 0xBF, 0x97, 0xA9, 0x42, 0x1A, 0x0B, 0x86, 0xD0, 0xFA, 
0x7C, 0x04, 0x6A, 0x95, 0xE2, 0xC5, 0xFA, 0x3A, 0xCB, 0xDF, 0x55, 0x80, 0xF8, 0x6C, 0xB6, 0x00, 
0x56, 0xC4, 0x8B, 0x38, 0xDD, 0x81, 0xC2, 0x0A, 0x18, 0x07, 0x0A, 0xA0, 0x9A, 0xEF, 0x5C, 0xBF, 
0x7E, 0x76, 0xD3, 0x82, 0x4C, 0x6A, 0xC0, 0x8F, 0x6A, 0xC0, 0xE0, 0xD9, 0xCD, 0x3F, 0xD5, 0xCE, 
0xCC, 0xD5, 0x6A, 0x6F, 0xC1, 0x28, 0xBE, 0x50, 0xB2, 0xAE, 0xE9, 0x8D, 0x31, 0xCD, 0xCA, 0x97, 
0x18, 0xF5, 0xE4, 0x5D, 0x04, 0x1F, 0xCD, 0xE2, 0xF7, 0xBB, 0xF0, 0x83, 0x5F, 0xAB, 0xC2, 0x0F, 
0x77, 0x5D, 0xB5, 0x8F, 0xC4, 0x1A, 0xB5, 0xDB, 0x56, 0x19, 0x27, 0x64, 0x8D, 0xA8, 0xFD, 0x2D, 
0x2F, 0xB0, 0xE4, 0xE2, 0x5B, 0x24, 0x59, 0xC3, 0x65, 0xB8, 0xAA, 0x96, 0x88, 0xF8, 0x01, 0x0F, 
0xB2, 0x91, 0x98, 0xAD, 0xA5, 0x24, 0x39, 0x23, 0x65, 0xB3, 0x25, 0xA0, 0x2A, 0x7E, 0x51, 0x22, 
0x3E, 0x24, 0x29, 0x3F, 0x29, 0x91, 0xA0, 0xED, 0x03, 0x29, 0xF0, 0x2B, 0x4F, 0x7C, 0x11, 0x18, 
0xF7, 0x3A, 0x1D, 0xCB, 0x0E, 0x6E, 0x63, 0x88, 0x7F, 0x2C, 0xB5, 0xA7, 0x1E, 0x89, 0x28, 0xDA, 
0x6B, 0x87, 0xDC, 0x92, 0x65, 0xC7, 0x73, 0xCD, 0xB8, 0x83, 0x8A, 0xD9, 0xD1, 0x77, 0xF5, 0x03, 
0x1C, 0xE9, 0xB7, 0x71, 0xED, 0x1B, 0xDB, 0x2A, 0xC3, 0x4B, 0x96, 0x83, 0xC5, 0x14, 0x34, 0xE4, 
0xC9, 0xB4, 0xFD, 0xF2, 0xD5, 0xC3, 0x83, 0x6B, 0xDF, 0xB2, 0x14, 0x29, 0x6A, 0x83, 0x25, 0xDE, 
0x8C, 0xF3, 0xB5, 0xC6, 0x23, 0x9F, 0x5D, 0xC8, 0x79, 0x35, 0x01, 0xCD, 0x18, 0x1F, 0xE4, 0x17, 
0xCA, 0x82, 0x2C, 0xB9, 0x98, 0x24, 0xF1, 0x2A, 0xB0, 0xF2, 0x37, 0x73, 0x25, 0x22, 0xFC, 0x80, 
0xB8, 0x79, 0x03, 0xC4, 0x17, 0x83, 0x8D, 0xD5, 0x49, 0xED, 0x14, 0xDF, 0x19, 0x63, 0x5B, 0x0D, 
0x26, 0xC6, 0x6F, 0xA8, 0xEB, 0x96, 0x86, 0x30, 0xDB, 0x9D, 0xA3, 0x14, 0x85, 0xC6, 0x24, 0x7E, 
0x69, 0x91, 0x3F, 0x00, 0xDB, 0x00, 0xAC, 0xAD, 0x29, 0xF4, 0xFA, 0x00, 0x80, 0x6A, 0x7E, 0x30, 
0x29, 0x4C, 0xEA, 0xC1, 0x74, 0x9E, 0x09, 0xF3, 0xBB, 0xE7, 0xFA, 0xA7, 0x47, 0xD5, 0x52, 0x97, 
0x5F, 0xB1, 0xE3, 0xEA, 0xE6, 0xA5, 0xFB, 0xF6, 0x4D, 0x62, 0x35, 0x67, 0x18, 0x19, 0x15, 0x9C, 
0xE3, 0x97, 0xD7, 0xFF, 0x01, 0x71, 0x58, 0x05, 0x14, 0x89, 0x2D, 0x00, 0x00
};

#define SPIFFS_MAXLENGTH_FILEPATH 32
const char *excludeListFile = "/.exclude.files";

typedef struct ExcludeListS {
    char *item;
    ExcludeListS *next;
} ExcludeList;

static ExcludeList *excludes = NULL;

static bool matchWild(const char *pattern, const char *testee) {
  const char *nxPat = NULL, *nxTst = NULL;

  while (*testee) {
    if (( *pattern == '?' ) || (*pattern == *testee)){
      pattern++;testee++;
      continue;
    }
    if (*pattern=='*'){
      nxPat=pattern++; nxTst=testee;
      continue;
    }
    if (nxPat){ 
      pattern = nxPat+1; testee=++nxTst;
      continue;
    }
    return false;
  }
  while (*pattern=='*'){pattern++;}  
  return (*pattern == 0);
}

static bool addExclude(const char *item){
    size_t len = strlen(item);
    if(!len){
        return false;
    }
    ExcludeList *e = (ExcludeList *)malloc(sizeof(ExcludeList));
    if(!e){
        return false;
    }
    e->item = (char *)malloc(len+1);
    if(!e->item){
        free(e);
        return false;
    }
    memcpy(e->item, item, len+1);
    e->next = excludes;
    excludes = e;
    return true;
}

static void loadExcludeList(fs::FS &_fs, const char *filename){
    static char linebuf[SPIFFS_MAXLENGTH_FILEPATH];
    fs::File excludeFile=_fs.open(filename, "r");
    if(!excludeFile){
        //addExclude("/*.js.gz");
        return;
    }
#ifdef ESP32
    if(excludeFile.isDirectory()){
      excludeFile.close();
      return;
    }
#endif
    if (excludeFile.size() > 0){
      uint8_t idx;
      bool isOverflowed = false;
      while (excludeFile.available()){
        linebuf[0] = '\0';
        idx = 0;
        int lastChar;
        do {
          lastChar = excludeFile.read();
          if(lastChar != '\r'){
            linebuf[idx++] = (char) lastChar;
          }
        } while ((lastChar >= 0) && (lastChar != '\n') && (idx < SPIFFS_MAXLENGTH_FILEPATH));

        if(isOverflowed){
          isOverflowed = (lastChar != '\n');
          continue;
        }
        isOverflowed = (idx >= SPIFFS_MAXLENGTH_FILEPATH);
        linebuf[idx-1] = '\0';
        if(!addExclude(linebuf)){
            excludeFile.close();
            return;
        }
      }
    }
    excludeFile.close();
}

static bool isExcluded(fs::FS &_fs, const char *filename) {
  if(excludes == NULL){
      loadExcludeList(_fs, excludeListFile);
  }
  ExcludeList *e = excludes;
  while(e){
    if (matchWild(e->item, filename)){
      return true;
    }
    e = e->next;
  }
  return false;
}

// WEB HANDLER IMPLEMENTATION

#ifdef ESP32
SPIFFSEditor::SPIFFSEditor(const fs::FS& fs, const String& username, const String& password)
#else
SPIFFSEditor::SPIFFSEditor(const String& username, const String& password, const fs::FS& fs)
#endif
:_fs(fs)
,_username(username)
,_password(password)
,_authenticated(false)
,_startTime(0)
{}

bool SPIFFSEditor::canHandle(AsyncWebServerRequest *request){
  if(request->url().equalsIgnoreCase("/edit")){
    if(request->method() == HTTP_GET){
      if(request->hasParam("list"))
        return true;
      if(request->hasParam("edit")){
        request->_tempFile = _fs.open(request->arg("edit"), "r");
        if(!request->_tempFile){
          return false;
        }
#ifdef ESP32
        if(request->_tempFile.isDirectory()){
          request->_tempFile.close();
          return false;
        }
#endif
      }
      if(request->hasParam("download")){
        request->_tempFile = _fs.open(request->arg("download"), "r");
        if(!request->_tempFile){
          return false;
        }
#ifdef ESP32
        if(request->_tempFile.isDirectory()){
          request->_tempFile.close();
          return false;
        }
#endif
      }
      request->addInterestingHeader("If-Modified-Since");
      return true;
    }
    else if(request->method() == HTTP_POST)
      return true;
    else if(request->method() == HTTP_DELETE)
      return true;
    else if(request->method() == HTTP_PUT)
      return true;

  }
  return false;
}


void SPIFFSEditor::handleRequest(AsyncWebServerRequest *request){
  if(_username.length() && _password.length() && !request->authenticate(_username.c_str(), _password.c_str()))
    return request->requestAuthentication();

  if(request->method() == HTTP_GET){
    if(request->hasParam("list")){
      String path = request->getParam("list")->value();
#ifdef ESP32
      File dir = _fs.open(path);
#else
      Dir dir = _fs.openDir(path);
#endif
      path = String();
      String output = "[";
#ifdef ESP32
      File entry = dir.openNextFile();
      while(entry){
#else
      while(dir.next()){
        fs::File entry = dir.openFile("r");
        
#endif
        if (isExcluded(_fs, entry.name())) {
#ifdef ESP32
            entry = dir.openNextFile();
#endif
            continue;
        }
        if (output != "[") output += ',';
        output += "{\"type\":\"";
        if (dir.isDirectory()) {
           output += "dir";
        } else {
           output += "file";
        }
        output += "\",\"name\":\"";
        #ifdef ESP32
          output += String(entry.path());
        #else
          output += String(entry.name());
        #endif
        output += "\",\"size\":";
        output += String(entry.size());
        output += "}";
#ifdef ESP32
        entry = dir.openNextFile();
#else
        entry.close();
#endif
      }
#ifdef ESP32
      dir.close();
#endif
      output += "]";
      request->send(200, "application/json", output);
      output = String();
    }
    else if(request->hasParam("edit") || request->hasParam("download")){
      request->send(request->_tempFile, request->_tempFile.name(), String(), request->hasParam("download"));
    }
    else {
      const char * buildTime = __DATE__ " " __TIME__ " GMT";
      if (request->header("If-Modified-Since").equals(buildTime)) {
        request->send(304);
      } else {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", edit_htm_gz, edit_htm_gz_len);
        response->addHeader("Content-Encoding", "gzip");
        response->addHeader("Last-Modified", buildTime);
        request->send(response);
      }
    }
  } else if(request->method() == HTTP_DELETE){
    if(request->hasParam("path", true)){
        _fs.remove(request->getParam("path", true)->value());
      request->send(200, "", "DELETE: "+request->getParam("path", true)->value());
    } else
      request->send(404);
  } else if(request->method() == HTTP_POST){
    if(request->hasParam("data", true, true) && _fs.exists(request->getParam("data", true, true)->value()))
      request->send(200, "", "UPLOADED: "+request->getParam("data", true, true)->value());
    else
      request->send(500);
  } else if(request->method() == HTTP_PUT){
    if(request->hasParam("path", true)){
      String filename = request->getParam("path", true)->value();
      if(_fs.exists(filename)){
        request->send(200);
      } else {
        fs::File f = _fs.open(filename, "w");
        if(f){
          f.write((uint8_t)0x00);
          f.close();
          request->send(200, "", "CREATE: "+filename);
        } else {
          request->send(500);
        }
      }
    } else
      request->send(400);
  }
}

void SPIFFSEditor::handleUpload(AsyncWebServerRequest *request, const String& filename, size_t index, uint8_t *data, size_t len, bool final){
  if(!index){
    if(!_username.length() || request->authenticate(_username.c_str(),_password.c_str())){
      _authenticated = true;
      request->_tempFile = _fs.open(filename, "w");
      _startTime = millis();
    }
  }
  if(_authenticated && request->_tempFile){
    if(len){
      request->_tempFile.write(data,len);
    }
    if(final){
      request->_tempFile.close();
    }
  }
}
