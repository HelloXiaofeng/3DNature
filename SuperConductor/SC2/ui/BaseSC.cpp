/****************************************************************************
** Form implementation generated from reading ui file 'BaseSC.ui'
**
** Created: Wed Dec 29 15:57:17 2004
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.3   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "BaseSC.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qspinbox.h>
#include <qlistbox.h>
#include <qheader.h>
#include <qlistview.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include <qimage.h>
#include <qpixmap.h>

static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x73, 0x7a, 0x7a, 0xf4, 0x00, 0x00, 0x01,
    0x52, 0x49, 0x44, 0x41, 0x54, 0x58, 0x85, 0xed, 0x57, 0x3b, 0x6e, 0xc3,
    0x30, 0x0c, 0xa5, 0x8a, 0x4c, 0x19, 0x7d, 0x1b, 0x73, 0x0b, 0xd0, 0x29,
    0xf0, 0x8d, 0x0a, 0x4f, 0x46, 0x6e, 0x64, 0x74, 0xea, 0x4c, 0x9f, 0x21,
    0x97, 0xc8, 0x15, 0xd4, 0x49, 0xaa, 0x42, 0xd3, 0x12, 0x49, 0x23, 0x75,
    0x87, 0xbe, 0xd1, 0xb0, 0xf9, 0x1e, 0x7f, 0x4f, 0x72, 0x20, 0x22, 0x38,
    0x12, 0x6f, 0x87, 0xb2, 0xff, 0x05, 0x01, 0x27, 0xcf, 0x47, 0x38, 0x4c,
    0x11, 0x00, 0x00, 0x1e, 0x9f, 0x4f, 0xcf, 0x89, 0x96, 0x60, 0x8d, 0x15,
    0xac, 0x33, 0x80, 0xc3, 0x14, 0x39, 0x31, 0x87, 0x45, 0x88, 0xa9, 0x05,
    0x1a, 0x72, 0x00, 0x00, 0xc4, 0x3e, 0x6a, 0x63, 0xaa, 0x2b, 0x20, 0x91,
    0xf3, 0x4c, 0x39, 0xb1, 0xa6, 0x12, 0xae, 0x21, 0x24, 0x5a, 0x82, 0x14,
    0xbc, 0x25, 0xc8, 0x2d, 0xa0, 0xcc, 0xde, 0x33, 0x68, 0xbb, 0x05, 0x98,
    0xd0, 0x5d, 0x4d, 0xaf, 0x9b, 0xd7, 0x90, 0xaf, 0xe0, 0xde, 0x8a, 0x34,
    0x05, 0x64, 0xc2, 0x04, 0x36, 0x88, 0xa9, 0xcf, 0x5e, 0x21, 0x55, 0x01,
    0xb9, 0xf7, 0x45, 0x59, 0x7f, 0x6d, 0x06, 0x9e, 0x06, 0x6f, 0x1e, 0x83,
    0xa6, 0xb7, 0x7c, 0x55, 0xcf, 0x97, 0xbb, 0x5f, 0xc0, 0x56, 0x8f, 0x2d,
    0x26, 0xa3, 0x81, 0x28, 0x60, 0xd5, 0x77, 0x05, 0x6a, 0x2e, 0x89, 0xc3,
    0x14, 0xb7, 0x84, 0x57, 0xd7, 0xb0, 0xcc, 0x3e, 0xb7, 0xa1, 0xbb, 0xaa,
    0xaa, 0x70, 0xbe, 0xdc, 0xe1, 0xeb, 0xf6, 0x70, 0x3a, 0xe1, 0x46, 0x26,
    0x34, 0x8f, 0x62, 0x40, 0xa9, 0xf7, 0x25, 0x79, 0x12, 0x2f, 0x09, 0x37,
    0x1b, 0x51, 0x2d, 0x98, 0x07, 0xbe, 0xb3, 0x60, 0x1e, 0xf3, 0x59, 0xd0,
    0xca, 0x9e, 0x83, 0x0b, 0xdf, 0x65, 0xc5, 0xda, 0xe3, 0xb9, 0x06, 0xb7,
    0x00, 0x89, 0x5c, 0x3b, 0x78, 0x25, 0xea, 0x4e, 0x88, 0x7d, 0xdc, 0x34,
    0x20, 0x03, 0x79, 0xad, 0x52, 0xa2, 0x00, 0xa2, 0x25, 0xe4, 0x5e, 0x29,
    0x4a, 0x9c, 0x1c, 0x0f, 0xb1, 0x8f, 0x2b, 0xe3, 0x6a, 0xb4, 0xc9, 0x75,
    0x29, 0xe5, 0xe4, 0x29, 0x73, 0x44, 0xf8, 0x31, 0x9c, 0x54, 0xb9, 0x46,
    0x02, 0xcd, 0x2b, 0x99, 0xb4, 0x6e, 0xa5, 0xc7, 0xf3, 0xb2, 0xb7, 0xd6,
    0x93, 0x57, 0x48, 0x75, 0x27, 0x7c, 0xff, 0xe8, 0x56, 0x41, 0x2d, 0xab,
    0x26, 0x11, 0x9b, 0x04, 0xbc, 0x12, 0x87, 0xff, 0x19, 0xfd, 0x0b, 0x38,
    0x5c, 0xc0, 0x37, 0xee, 0x5f, 0xcd, 0x4c, 0x1c, 0xd5, 0x37, 0x27, 0x00,
    0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image1_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x57, 0x02, 0xf9, 0x87, 0x00, 0x00, 0x00,
    0xc2, 0x49, 0x44, 0x41, 0x54, 0x68, 0x81, 0xed, 0xd7, 0xbb, 0x0a, 0x84,
    0x30, 0x14, 0x84, 0xe1, 0x75, 0xf1, 0x75, 0xac, 0xac, 0xf2, 0xfe, 0x90,
    0xad, 0xac, 0xce, 0x03, 0xc5, 0x22, 0x0c, 0xd8, 0xba, 0xe7, 0x32, 0x04,
    0xe6, 0x6f, 0xc4, 0x42, 0x98, 0x0f, 0x85, 0xe0, 0xd6, 0x7b, 0xff, 0xac,
    0xdc, 0x97, 0x3d, 0xc0, 0x9b, 0x00, 0xec, 0x04, 0x60, 0x27, 0x00, 0x3b,
    0x01, 0xd8, 0x09, 0xc0, 0x4e, 0x00, 0x76, 0x02, 0x98, 0xb5, 0x61, 0xd6,
    0x46, 0xc4, 0x98, 0x7f, 0xda, 0x3d, 0x0f, 0x9b, 0xb5, 0x71, 0x5d, 0xb8,
    0x9b, 0x88, 0xe3, 0xf8, 0x6d, 0xde, 0x51, 0x6f, 0x72, 0x01, 0x9e, 0xb1,
    0x20, 0x61, 0x00, 0x54, 0x0d, 0x09, 0x07, 0xa0, 0x2a, 0x48, 0x1a, 0x00,
    0x65, 0x43, 0xd2, 0x01, 0x28, 0x0b, 0x52, 0x06, 0x40, 0xd1, 0x90, 0x72,
    0x00, 0x7a, 0x42, 0x3c, 0x88, 0xe5, 0x4f, 0x62, 0xda, 0x1b, 0x38, 0xcf,
    0x79, 0x5d, 0xee, 0x13, 0x8a, 0x1a, 0x8e, 0xca, 0x00, 0xd1, 0xc3, 0x51,
    0x3a, 0x20, 0x6b, 0x38, 0x4a, 0x03, 0x64, 0x0f, 0x47, 0xe1, 0x80, 0xaa,
    0xe1, 0x28, 0x0c, 0x50, 0x3d, 0x1c, 0xb9, 0x00, 0x73, 0x2c, 0xe7, 0x3f,
    0x00, 0xb9, 0xdf, 0x00, 0x6b, 0x38, 0x5a, 0xfe, 0x24, 0x16, 0x80, 0x9d,
    0x00, 0xec, 0x04, 0x60, 0x27, 0x00, 0x3b, 0x01, 0xd8, 0x09, 0xc0, 0x6e,
    0x79, 0xc0, 0x0d, 0xf2, 0x42, 0x3a, 0x64, 0xbf, 0x54, 0xb8, 0x1c, 0x00,
    0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image2_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x57, 0x02, 0xf9, 0x87, 0x00, 0x00, 0x00,
    0x8c, 0x49, 0x44, 0x41, 0x54, 0x68, 0x81, 0xed, 0xd9, 0x41, 0x0a, 0x80,
    0x20, 0x14, 0x00, 0xd1, 0x8c, 0xae, 0xd3, 0x01, 0xbc, 0x3f, 0xd8, 0xca,
    0xd5, 0x3f, 0x90, 0x2d, 0x22, 0x68, 0x11, 0x44, 0x16, 0x0c, 0xc2, 0xbc,
    0x9d, 0x7c, 0x10, 0x07, 0x5a, 0x28, 0xa5, 0x52, 0xca, 0x34, 0xb2, 0x99,
    0x3e, 0xc0, 0x57, 0x06, 0xd0, 0x0c, 0xa0, 0x19, 0x40, 0x33, 0x80, 0x66,
    0x00, 0xcd, 0x00, 0x9a, 0x01, 0x57, 0x11, 0xb9, 0x45, 0xe4, 0xd6, 0x3b,
    0xef, 0xb1, 0xfc, 0xb5, 0x51, 0x44, 0x6e, 0xb5, 0x9e, 0xab, 0xdc, 0xd6,
    0x75, 0x4b, 0x6f, 0xe6, 0xbd, 0xfc, 0x84, 0x68, 0x06, 0xd0, 0x0c, 0xa0,
    0x19, 0x40, 0x33, 0x80, 0x66, 0x00, 0xcd, 0x00, 0xda, 0xf0, 0x01, 0xbf,
    0xbd, 0x07, 0x8e, 0xfb, 0xfd, 0xf1, 0x58, 0xb9, 0xbb, 0xeb, 0x3f, 0xcd,
    0x7b, 0x25, 0x7f, 0x70, 0xc0, 0x0c, 0xa0, 0x19, 0x40, 0x33, 0x80, 0x66,
    0x00, 0xcd, 0x00, 0x9a, 0x01, 0xb4, 0xe1, 0x03, 0x76, 0xea, 0xd2, 0x25,
    0x1b, 0x6c, 0x96, 0xcb, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,
    0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image3_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30,
    0x08, 0x06, 0x00, 0x00, 0x00, 0x57, 0x02, 0xf9, 0x87, 0x00, 0x00, 0x00,
    0x87, 0x49, 0x44, 0x41, 0x54, 0x68, 0x81, 0xed, 0xd7, 0xb1, 0x09, 0x03,
    0x31, 0x10, 0x05, 0xd1, 0xd5, 0xe1, 0x76, 0xae, 0x00, 0xf5, 0x0f, 0x72,
    0x74, 0x91, 0x0a, 0x92, 0x03, 0x97, 0xf0, 0x0f, 0x86, 0x85, 0x99, 0x5c,
    0x8b, 0x1e, 0x6c, 0x20, 0x8d, 0xb5, 0x56, 0x75, 0xee, 0xa2, 0x2f, 0x90,
    0x26, 0x80, 0x4e, 0x00, 0x9d, 0x00, 0x3a, 0x01, 0x74, 0x02, 0xe8, 0x04,
    0xd0, 0xb5, 0x07, 0x7c, 0xd2, 0x01, 0x7b, 0xcf, 0x93, 0x9c, 0xbf, 0xef,
    0xef, 0x48, 0xce, 0x47, 0x80, 0xbd, 0xe7, 0x79, 0x9e, 0x64, 0x42, 0x55,
    0xd5, 0x3c, 0x09, 0xa2, 0xfd, 0x0a, 0x09, 0xa0, 0x13, 0x40, 0x27, 0x80,
    0x4e, 0x00, 0x9d, 0x00, 0x3a, 0x01, 0x74, 0x02, 0xe8, 0xa2, 0xff, 0xc0,
    0xff, 0x1d, 0xdf, 0xf8, 0x43, 0xf3, 0xc6, 0x05, 0xd2, 0xda, 0xaf, 0x90,
    0x00, 0x3a, 0x01, 0x74, 0x02, 0xe8, 0x04, 0xd0, 0x09, 0xa0, 0x13, 0x40,
    0xd7, 0x1e, 0xf0, 0x03, 0x4d, 0x88, 0x12, 0x2a, 0x56, 0xd1, 0x42, 0xbf,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image4_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0x7f, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xed, 0x95, 0x51, 0x0a, 0x00,
    0x21, 0x08, 0x44, 0x75, 0xd9, 0xdb, 0x04, 0x1e, 0xc0, 0xe8, 0xfa, 0x5e,
    0xcb, 0xfd, 0xda, 0x85, 0x2d, 0x4b, 0x11, 0xfa, 0x6b, 0x20, 0x28, 0xa3,
    0x57, 0x0c, 0x53, 0xa1, 0x88, 0xc0, 0x0e, 0xdd, 0x7d, 0x81, 0x99, 0x35,
    0xb2, 0x50, 0x44, 0x70, 0x35, 0x7f, 0x59, 0x45, 0x55, 0x9d, 0x36, 0x00,
    0x00, 0x22, 0x72, 0x0f, 0x60, 0x82, 0x3d, 0x11, 0x91, 0x0b, 0x1f, 0xac,
    0x88, 0xa8, 0x94, 0xf2, 0xf5, 0x99, 0x59, 0x2d, 0x5b, 0x52, 0xe0, 0x5a,
    0xeb, 0x6f, 0x6c, 0xc1, 0x53, 0xe0, 0xd6, 0xda, 0x50, 0xeb, 0xe1, 0x29,
    0x30, 0xe2, 0x32, 0x10, 0x39, 0xf0, 0x9b, 0x0c, 0x6f, 0xb3, 0x54, 0x2a,
    0x22, 0x3a, 0xe0, 0x03, 0x3e, 0xe0, 0x85, 0xcc, 0x2b, 0x1d, 0x79, 0x0b,
    0x3c, 0xe1, 0xae, 0x3f, 0x6f, 0x9b, 0x15, 0x0f, 0x6d, 0x54, 0x33, 0xaf,
    0x47, 0xa4, 0xf4, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
    0xae, 0x42, 0x60, 0x82
};

static const unsigned char image5_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xae, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xb5, 0x94, 0x51, 0x0e, 0xc3,
    0x20, 0x0c, 0x43, 0x6d, 0xb4, 0x53, 0x71, 0xb6, 0x69, 0x1f, 0xd3, 0xce,
    0xe6, 0x6b, 0xb1, 0x8f, 0x51, 0x35, 0xa2, 0x19, 0x23, 0x5a, 0xf0, 0x4f,
    0x44, 0x2b, 0x5e, 0x2c, 0x03, 0xa1, 0x24, 0xec, 0x50, 0xd9, 0x42, 0xdd,
    0x09, 0xbe, 0x45, 0x37, 0xd4, 0x5a, 0x9b, 0x5d, 0x4b, 0xe2, 0xf8, 0x5f,
    0x12, 0x43, 0xe0, 0x63, 0x93, 0xd7, 0x48, 0x12, 0x6d, 0x53, 0x66, 0x1d,
    0x9e, 0x85, 0x4a, 0x62, 0x4a, 0xc6, 0x63, 0x3c, 0x40, 0xcf, 0xf8, 0x57,
    0x6e, 0x51, 0x28, 0x00, 0x10, 0x40, 0x6b, 0x0d, 0x00, 0xda, 0xb1, 0x04,
    0xb9, 0xc6, 0x9d, 0x19, 0xe8, 0x87, 0x77, 0x42, 0x01, 0xf6, 0x4e, 0xbc,
    0x7c, 0x8f, 0x34, 0x2f, 0xc6, 0x78, 0xb0, 0xce, 0x55, 0x3c, 0xc7, 0x6b,
    0x75, 0x2e, 0x37, 0xe3, 0x68, 0xd6, 0x9e, 0xdc, 0x8c, 0x2d, 0xf4, 0xf5,
    0x8c, 0x01, 0xef, 0x8f, 0x4f, 0x75, 0x33, 0xfe, 0x17, 0x6a, 0x1e, 0x48,
    0x2e, 0xf4, 0xe2, 0x38, 0x0b, 0x6a, 0xc0, 0xb9, 0xd0, 0xd3, 0x6a, 0x57,
    0x16, 0x14, 0x30, 0x83, 0x3e, 0x13, 0x0a, 0xac, 0xde, 0xf6, 0x2f, 0x9a,
    0xcd, 0x8a, 0xb4, 0x79, 0x3c, 0xea, 0x0d, 0x05, 0x19, 0x70, 0xcd, 0xbc,
    0x4f, 0x01, 0xb2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae,
    0x42, 0x60, 0x82
};

static const unsigned char image6_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xad, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xd5, 0x95, 0x31, 0x0e, 0x84,
    0x20, 0x10, 0x45, 0x3f, 0x86, 0x86, 0xc4, 0x82, 0xf3, 0xd0, 0xcc, 0xc5,
    0x8c, 0x85, 0xf1, 0x62, 0x34, 0x73, 0x1e, 0x0b, 0x92, 0x2d, 0x77, 0x0b,
    0x33, 0x86, 0x15, 0x0d, 0x62, 0xd0, 0x84, 0xd7, 0x10, 0x0c, 0xbe, 0x7c,
    0xc6, 0x41, 0x14, 0x33, 0xe3, 0x09, 0x34, 0x00, 0x38, 0xe7, 0xbe, 0x35,
    0xa5, 0xcc, 0xac, 0xb4, 0x4c, 0xe6, 0x69, 0x1d, 0x87, 0x11, 0xf0, 0xde,
    0x17, 0x89, 0x88, 0x68, 0x7b, 0x87, 0x88, 0x00, 0x00, 0x5d, 0xa5, 0x90,
    0x09, 0x3a, 0xbf, 0xe4, 0x18, 0x13, 0x2c, 0x3e, 0xfd, 0xb2, 0xcd, 0x25,
    0xa9, 0x90, 0x4d, 0x6c, 0x82, 0x85, 0x09, 0x36, 0x79, 0x1e, 0x4b, 0x81,
    0xb5, 0x94, 0x52, 0xce, 0x4b, 0xe2, 0xbb, 0x64, 0x4b, 0xb1, 0x4f, 0x76,
    0x95, 0xc7, 0x12, 0xb7, 0x27, 0x4e, 0x6a, 0x3c, 0x4f, 0x69, 0xeb, 0xe4,
    0x88, 0xbb, 0xe1, 0x54, 0x7c, 0xb6, 0xb0, 0x94, 0x77, 0xdb, 0x6d, 0x18,
    0xcb, 0x45, 0xfb, 0x5d, 0xde, 0x3e, 0xd2, 0xf1, 0x8f, 0xea, 0xe8, 0x9b,
    0xb4, 0xd7, 0x6e, 0xed, 0x89, 0x95, 0xdc, 0x79, 0xb5, 0xae, 0x27, 0x66,
    0x56, 0x7f, 0xe2, 0xda, 0xfc, 0x00, 0x45, 0x36, 0x2b, 0xc8, 0x71, 0x7a,
    0x5b, 0x49, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
    0x60, 0x82
};


/*
 *  Constructs a SCMain as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
SCMain::SCMain( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl )
{
    (void)statusBar();
    QImage img;
    img.loadFromData( image0_data, sizeof( image0_data ), "PNG" );
    image0 = img;
    img.loadFromData( image1_data, sizeof( image1_data ), "PNG" );
    image1 = img;
    img.loadFromData( image2_data, sizeof( image2_data ), "PNG" );
    image2 = img;
    img.loadFromData( image3_data, sizeof( image3_data ), "PNG" );
    image3 = img;
    img.loadFromData( image4_data, sizeof( image4_data ), "PNG" );
    image4 = img;
    img.loadFromData( image5_data, sizeof( image5_data ), "PNG" );
    image5 = img;
    img.loadFromData( image6_data, sizeof( image6_data ), "PNG" );
    image6 = img;
    if ( !name )
	setName( "SCMain" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    setMinimumSize( QSize( 811, 533 ) );
    setSizeIncrement( QSize( 0, 0 ) );
    setBaseSize( QSize( 640, 480 ) );
    setIcon( image0 );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );
    SCMainLayout = new QGridLayout( centralWidget(), 1, 1, 11, 6, "SCMainLayout"); 

    GroupBox2 = new QGroupBox( centralWidget(), "GroupBox2" );
    GroupBox2->setColumnLayout(0, Qt::Vertical );
    GroupBox2->layout()->setSpacing( 6 );
    GroupBox2->layout()->setMargin( 11 );
    GroupBox2Layout = new QGridLayout( GroupBox2->layout() );
    GroupBox2Layout->setAlignment( Qt::AlignTop );

    PriorityLabel = new QLabel( GroupBox2, "PriorityLabel" );

    GroupBox2Layout->addMultiCellWidget( PriorityLabel, 3, 3, 0, 1 );

    Run = new QPushButton( GroupBox2, "Run" );
    Run->setPixmap( image1 );

    GroupBox2Layout->addWidget( Run, 0, 0 );

    PrioritySpin = new QSpinBox( GroupBox2, "PrioritySpin" );
    PrioritySpin->setMaxValue( 11 );

    GroupBox2Layout->addWidget( PrioritySpin, 3, 2 );

    Pause = new QPushButton( GroupBox2, "Pause" );
    Pause->setPixmap( image2 );

    GroupBox2Layout->addWidget( Pause, 0, 1 );

    Stop = new QPushButton( GroupBox2, "Stop" );
    Stop->setPixmap( image3 );

    GroupBox2Layout->addWidget( Stop, 0, 2 );

    RemoveProject = new QPushButton( GroupBox2, "RemoveProject" );

    GroupBox2Layout->addMultiCellWidget( RemoveProject, 1, 1, 0, 2 );

    AddProject = new QPushButton( GroupBox2, "AddProject" );

    GroupBox2Layout->addMultiCellWidget( AddProject, 2, 2, 0, 2 );

    SCMainLayout->addWidget( GroupBox2, 1, 1 );

    GroupBox3 = new QGroupBox( centralWidget(), "GroupBox3" );
    GroupBox3->setColumnLayout(0, Qt::Vertical );
    GroupBox3->layout()->setSpacing( 6 );
    GroupBox3->layout()->setMargin( 11 );
    GroupBox3Layout = new QVBoxLayout( GroupBox3->layout() );
    GroupBox3Layout->setAlignment( Qt::AlignTop );

    MessageButton = new QPushButton( GroupBox3, "MessageButton" );
    GroupBox3Layout->addWidget( MessageButton );

    SCMainLayout->addWidget( GroupBox3, 2, 1 );

    GroupBox4 = new QGroupBox( centralWidget(), "GroupBox4" );
    GroupBox4->setColumnLayout(0, Qt::Vertical );
    GroupBox4->layout()->setSpacing( 6 );
    GroupBox4->layout()->setMargin( 11 );
    GroupBox4Layout = new QGridLayout( GroupBox4->layout() );
    GroupBox4Layout->setAlignment( Qt::AlignTop );

    ClientList = new QListBox( GroupBox4, "ClientList" );

    GroupBox4Layout->addMultiCellWidget( ClientList, 1, 5, 0, 0 );

    ClientSettingList = new QListView( GroupBox4, "ClientSettingList" );
    ClientSettingList->addColumn( tr( "Setting" ) );
    ClientSettingList->addColumn( tr( "Value" ) );

    GroupBox4Layout->addMultiCellWidget( ClientSettingList, 1, 5, 1, 1 );

    TextLabel2 = new QLabel( GroupBox4, "TextLabel2" );

    GroupBox4Layout->addWidget( TextLabel2, 0, 1 );

    AddClient = new QPushButton( GroupBox4, "AddClient" );
    QFont AddClient_font(  AddClient->font() );
    AddClient_font.setPointSize( 10 );
    AddClient->setFont( AddClient_font ); 

    GroupBox4Layout->addWidget( AddClient, 1, 2 );

    RemoveClient = new QPushButton( GroupBox4, "RemoveClient" );
    QFont RemoveClient_font(  RemoveClient->font() );
    RemoveClient_font.setPointSize( 10 );
    RemoveClient->setFont( RemoveClient_font ); 

    GroupBox4Layout->addWidget( RemoveClient, 2, 2 );

    ApplySettings = new QPushButton( GroupBox4, "ApplySettings" );
    QFont ApplySettings_font(  ApplySettings->font() );
    ApplySettings_font.setPointSize( 10 );
    ApplySettings->setFont( ApplySettings_font ); 

    GroupBox4Layout->addWidget( ApplySettings, 5, 2 );

    LoadList = new QPushButton( GroupBox4, "LoadList" );
    QFont LoadList_font(  LoadList->font() );
    LoadList_font.setPointSize( 10 );
    LoadList->setFont( LoadList_font ); 

    GroupBox4Layout->addWidget( LoadList, 3, 2 );

    SaveList = new QPushButton( GroupBox4, "SaveList" );
    QFont SaveList_font(  SaveList->font() );
    SaveList_font.setPointSize( 10 );
    SaveList->setFont( SaveList_font ); 

    GroupBox4Layout->addWidget( SaveList, 4, 2 );
    spacer1 = new QSpacerItem( 81, 41, QSizePolicy::Expanding, QSizePolicy::Minimum );
    GroupBox4Layout->addItem( spacer1, 0, 2 );

    TextLabel1 = new QLabel( GroupBox4, "TextLabel1" );

    GroupBox4Layout->addWidget( TextLabel1, 0, 0 );

    SCMainLayout->addMultiCellWidget( GroupBox4, 1, 2, 0, 0 );

    GroupBox1 = new QGroupBox( centralWidget(), "GroupBox1" );
    GroupBox1->setFrameShape( QGroupBox::Box );
    GroupBox1->setFrameShadow( QGroupBox::Sunken );
    GroupBox1->setColumnLayout(0, Qt::Vertical );
    GroupBox1->layout()->setSpacing( 6 );
    GroupBox1->layout()->setMargin( 11 );
    GroupBox1Layout = new QVBoxLayout( GroupBox1->layout() );
    GroupBox1Layout->setAlignment( Qt::AlignTop );

    ProjectList = new QListView( GroupBox1, "ProjectList" );
    ProjectList->addColumn( tr( "Project Name" ) );
    ProjectList->addColumn( tr( "Frames" ) );
    ProjectList->addColumn( tr( "Avg. time/frame" ) );
    ProjectList->addColumn( tr( "Elapsed Time" ) );
    ProjectList->addColumn( tr( "Time Remaining(est.)" ) );
    ProjectList->addColumn( tr( "Project ID" ) );
    ProjectList->addColumn( tr( "Status" ) );
    GroupBox1Layout->addWidget( ProjectList );

    SCMainLayout->addMultiCellWidget( GroupBox1, 0, 0, 0, 1 );

    // actions
    fileNewAction = new QAction( this, "fileNewAction" );
    fileNewAction->setIconSet( QIconSet( image4 ) );
    fileOpenAction = new QAction( this, "fileOpenAction" );
    fileOpenAction->setIconSet( QIconSet( image5 ) );
    fileSaveAction = new QAction( this, "fileSaveAction" );
    fileSaveAction->setIconSet( QIconSet( image6 ) );
    fileSaveAsAction = new QAction( this, "fileSaveAsAction" );
    fileExitAction = new QAction( this, "fileExitAction" );
    helpAboutAction = new QAction( this, "helpAboutAction" );


    // toolbars


    // menubar
    menubar = new QMenuBar( this, "menubar" );


    fileMenu = new QPopupMenu( this );
    fileNewAction->addTo( fileMenu );
    fileOpenAction->addTo( fileMenu );
    fileSaveAction->addTo( fileMenu );
    fileSaveAsAction->addTo( fileMenu );
    fileMenu->insertSeparator();
    fileMenu->insertSeparator();
    fileExitAction->addTo( fileMenu );
    menubar->insertItem( QString(""), fileMenu, 1 );

    helpMenu = new QPopupMenu( this );
    helpMenu->insertSeparator();
    helpAboutAction->addTo( helpMenu );
    menubar->insertItem( QString(""), helpMenu, 2 );

    languageChange();
    resize( QSize(892, 725).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( fileNewAction, SIGNAL( activated() ), this, SLOT( fileNew() ) );
    connect( fileOpenAction, SIGNAL( activated() ), this, SLOT( fileOpen() ) );
    connect( fileSaveAction, SIGNAL( activated() ), this, SLOT( fileSave() ) );
    connect( fileSaveAsAction, SIGNAL( activated() ), this, SLOT( fileSaveAs() ) );
    connect( fileExitAction, SIGNAL( activated() ), this, SLOT( fileExit() ) );
    connect( helpAboutAction, SIGNAL( activated() ), this, SLOT( helpAbout() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
SCMain::~SCMain()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SCMain::languageChange()
{
    setCaption( tr( "SuperConductor" ) );
    GroupBox2->setTitle( tr( "Project Control" ) );
    PriorityLabel->setText( tr( "Priority" ) );
    Run->setText( QString::null );
    QToolTip::add( Run, tr( "Run Selected Project" ) );
    Pause->setText( QString::null );
    QToolTip::add( Pause, tr( "Pause Selected Project" ) );
    Stop->setText( QString::null );
    QToolTip::add( Stop, tr( "Halt Selected Project" ) );
    RemoveProject->setText( tr( "Remove" ) );
    QToolTip::add( RemoveProject, tr( "Halt and Remove selected project" ) );
    AddProject->setText( tr( "Add New" ) );
    QToolTip::add( AddProject, tr( "Add a new project" ) );
    GroupBox3->setTitle( tr( "Diagnostics" ) );
    MessageButton->setText( tr( "View Messages" ) );
    GroupBox4->setTitle( tr( "Project Clients" ) );
    ClientSettingList->header()->setLabel( 0, tr( "Setting" ) );
    ClientSettingList->header()->setLabel( 1, tr( "Value" ) );
    TextLabel2->setText( tr( "Client Settings" ) );
    AddClient->setText( tr( "Add Client" ) );
    QToolTip::add( AddClient, tr( "Add a new client to the selected project" ) );
    RemoveClient->setText( tr( "Remove Client" ) );
    QToolTip::add( RemoveClient, tr( "Remove selected client from the current project" ) );
    ApplySettings->setText( tr( "Apply New\n"
"Settings" ) );
    QToolTip::add( ApplySettings, tr( "Apply the new settings to the current client" ) );
    LoadList->setText( tr( "Load Client List" ) );
    SaveList->setText( tr( "Save Client List" ) );
    TextLabel1->setText( tr( "Client List" ) );
    GroupBox1->setTitle( tr( "Project Information" ) );
    ProjectList->header()->setLabel( 0, tr( "Project Name" ) );
    ProjectList->header()->setLabel( 1, tr( "Frames" ) );
    ProjectList->header()->setLabel( 2, tr( "Avg. time/frame" ) );
    ProjectList->header()->setLabel( 3, tr( "Elapsed Time" ) );
    ProjectList->header()->setLabel( 4, tr( "Time Remaining(est.)" ) );
    ProjectList->header()->setLabel( 5, tr( "Project ID" ) );
    ProjectList->header()->setLabel( 6, tr( "Status" ) );
    fileNewAction->setText( tr( "New" ) );
    fileNewAction->setMenuText( tr( "&New" ) );
    fileNewAction->setAccel( tr( "Ctrl+N" ) );
    fileOpenAction->setText( tr( "Open" ) );
    fileOpenAction->setMenuText( tr( "&Open..." ) );
    fileOpenAction->setAccel( tr( "Ctrl+O" ) );
    fileSaveAction->setText( tr( "Save" ) );
    fileSaveAction->setMenuText( tr( "&Save" ) );
    fileSaveAction->setAccel( tr( "Ctrl+S" ) );
    fileSaveAsAction->setText( tr( "Save As" ) );
    fileSaveAsAction->setMenuText( tr( "Save &As..." ) );
    fileSaveAsAction->setAccel( QString::null );
    fileExitAction->setText( tr( "Exit" ) );
    fileExitAction->setMenuText( tr( "E&xit" ) );
    fileExitAction->setAccel( QString::null );
    helpAboutAction->setText( tr( "About" ) );
    helpAboutAction->setMenuText( tr( "&About..." ) );
    helpAboutAction->setAccel( QString::null );
    if (menubar->findItem(1))
        menubar->findItem(1)->setText( tr( "&File" ) );
    if (menubar->findItem(2))
        menubar->findItem(2)->setText( tr( "&Help" ) );
}

void SCMain::fileNew()
{
    qWarning( "SCMain::fileNew(): Not implemented yet" );
}

void SCMain::fileOpen()
{
    qWarning( "SCMain::fileOpen(): Not implemented yet" );
}

void SCMain::fileSave()
{
    qWarning( "SCMain::fileSave(): Not implemented yet" );
}

void SCMain::fileSaveAs()
{
    qWarning( "SCMain::fileSaveAs(): Not implemented yet" );
}

void SCMain::filePrint()
{
    qWarning( "SCMain::filePrint(): Not implemented yet" );
}

void SCMain::fileExit()
{
    qWarning( "SCMain::fileExit(): Not implemented yet" );
}

void SCMain::helpIndex()
{
    qWarning( "SCMain::helpIndex(): Not implemented yet" );
}

void SCMain::helpContents()
{
    qWarning( "SCMain::helpContents(): Not implemented yet" );
}

void SCMain::helpAbout()
{
    qWarning( "SCMain::helpAbout(): Not implemented yet" );
}

