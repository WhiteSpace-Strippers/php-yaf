/*
	+----------------------------------------------------------------------+
	| Yet Another Framework																								|
	+----------------------------------------------------------------------+
	| This source file is subject to version 3.01 of the PHP license,			|
	| that is bundled with this package in the file LICENSE, and is				|
	| available through the world-wide-web at the following url:					 |
	| http://www.php.net/license/3_01.txt																	|
	| If you did not receive a copy of the PHP license and are unable to	 |
	| obtain it through the world-wide-web, please send a note to					|
	| license@php.net so we can mail you a copy immediately.							 |
	+----------------------------------------------------------------------+
	| Author: Xinchen Hui	<laruence@php.net>															|
	+----------------------------------------------------------------------+
*/

/* $Id: yaf_logo.h 329002 2013-01-07 12:55:53Z laruence $ */

#ifndef YAF_LOGO_H
#define YAF_LOGO_H

#if PHP_MAJOR_VERSION == 5 && PHP_MINOR_VERSION < 5
#define YAF_LOGO_MIME_TYPE "image/png"
#define YAF_LOGO_GUID		 "YAF-LOGO-LARUNECE-COM"
#define YAF_SUPPORT_URL		 "http://pecl.php.net/package/yaf"
#define YAF_LOGO_IMG			 "<a href=" YAF_SUPPORT_URL "> \
							 <img src=\"?=" YAF_LOGO_GUID "\" alt=\"Yaf logo\" /></a>\n"

static const unsigned char yaf_logo[] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
	0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x15,
	0x08, 0x06, 0x00, 0x00, 0x00, 0xbe, 0x35, 0x35, 0x5f, 0x00, 0x00, 0x00,
	0x04, 0x67, 0x41, 0x4d, 0x41, 0x00, 0x00, 0xb1, 0x8f, 0x0b, 0xfc, 0x61,
	0x05, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b,
	0x10, 0x00, 0x00, 0x0b, 0x10, 0x01, 0xad, 0x23, 0xbd, 0x75, 0x00, 0x00,
	0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61,
	0x72, 0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69,
	0x61, 0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20,
	0x38, 0xb5, 0x68, 0xd2, 0x78, 0x00, 0x00, 0x06, 0x1a, 0x49, 0x44, 0x41,
	0x54, 0x48, 0x4b, 0x95, 0x55, 0x09, 0x4c, 0x94, 0x47, 0x14, 0x46, 0x04,
	0x85, 0x72, 0x28, 0x42, 0x6d, 0x04, 0x43, 0x22, 0xa4, 0x96, 0x43, 0x0e,
	0x39, 0x2c, 0x6a, 0x23, 0x56, 0xb0, 0x50, 0x35, 0x1c, 0x86, 0x88, 0x06,
	0x10, 0x31, 0x20, 0xa0, 0xc2, 0x7a, 0x21, 0xa8, 0xa0, 0x20, 0xc8, 0x2d,
	0x0d, 0x97, 0x18, 0x56, 0x10, 0xb1, 0x40, 0x11, 0x2c, 0xe5, 0x58, 0xb1,
	0x88, 0xda, 0x02, 0x0a, 0x04, 0x13, 0xb9, 0x94, 0x86, 0xd6, 0xc6, 0xb6,
	0x11, 0x49, 0x4b, 0x8b, 0x42, 0xbd, 0x5d, 0x5e, 0xbf, 0x37, 0x89, 0x84,
	0x15, 0xb4, 0xba, 0xc9, 0x66, 0x7f, 0xf8, 0x67, 0xe6, 0x7d, 0xd7, 0x7b,
	0xa3, 0xa4, 0xf4, 0x8e, 0x1f, 0x22, 0x52, 0xee, 0xeb, 0xeb, 0xd3, 0xba,
	0x7a, 0xf5, 0xaa, 0xda, 0x54, 0x5b, 0xf8, 0x7d, 0x77, 0x77, 0x77, 0x69,
	0x57, 0x57, 0xd7, 0xa3, 0xea, 0xea, 0x6a, 0x73, 0x33, 0x33, 0xb3, 0x19,
	0xef, 0x78, 0xf4, 0xd4, 0xcb, 0xce, 0x9d, 0x3b, 0x37, 0xfd, 0xc8, 0x91,
	0x23, 0x2a, 0x07, 0x0e, 0x1c, 0x30, 0x09, 0x0d, 0x0d, 0x75, 0x44, 0xe1,
	0x92, 0xf6, 0xf6, 0xf6, 0xf0, 0x0b, 0x17, 0x2e, 0xcc, 0x7c, 0x7d, 0xc7,
	0xc8, 0xc8, 0xc8, 0x87, 0x32, 0x99, 0x2c, 0xf0, 0xe4, 0xc9, 0x93, 0x7d,
	0x31, 0x31, 0x31, 0xff, 0x38, 0x38, 0x38, 0xf8, 0xf0, 0x5e, 0x80, 0x9a,
	0xf6, 0xde, 0x20, 0xda, 0xda, 0xda, 0xe6, 0xe7, 0xe4, 0xe4, 0xb8, 0xfa,
	0xf8, 0xf8, 0x78, 0x6d, 0xd9, 0xb2, 0xe5, 0x2f, 0x6f, 0x6f, 0x6f, 0x3a,
	0x7e, 0xfc, 0x38, 0xa1, 0x40, 0x4f, 0x5d, 0x5d, 0x9d, 0xf5, 0x9b, 0x0e,
	0x2c, 0x2c, 0x2c, 0xb4, 0xc8, 0xcb, 0xcb, 0x7b, 0xea, 0xe6, 0xe6, 0xf6,
	0xcb, 0x9e, 0x3d, 0x7b, 0x3c, 0x00, 0xdc, 0xec, 0xbd, 0x8a, 0xdf, 0xb9,
	0x73, 0x67, 0x56, 0x53, 0x53, 0x53, 0x52, 0x78, 0x78, 0xf8, 0xf0, 0xca,
	0x95, 0x2b, 0xc9, 0xd4, 0xd4, 0x94, 0x0e, 0x1e, 0x3c, 0x48, 0x49, 0x49,
	0x49, 0xcf, 0xc1, 0xac, 0xa1, 0xb6, 0xb6, 0xd6, 0xea, 0xd5, 0x81, 0xcc,
	0xac, 0xb3, 0xb3, 0xf3, 0xb3, 0xa2, 0xa2, 0xa2, 0x4d, 0xd7, 0xae, 0x5d,
	0xdb, 0xd4, 0xd3, 0xd3, 0xe3, 0x57, 0x5f, 0x5f, 0x3f, 0xbc, 0x71, 0xe3,
	0x46, 0xf2, 0xf5, 0xf5, 0x7d, 0x0e, 0xd0, 0x32, 0xec, 0xb3, 0x7a, 0x67,
	0x05, 0x6e, 0xdc, 0xb8, 0xe1, 0x91, 0x91, 0x91, 0xf1, 0x93, 0x95, 0x95,
	0x15, 0xe9, 0xea, 0xea, 0x12, 0xfc, 0x23, 0x0b, 0x0b, 0x8b, 0x17, 0x1b,
	0x36, 0x6c, 0xa8, 0x38, 0x73, 0xe6, 0x8c, 0xf3, 0x44, 0x26, 0xec, 0x75,
	0x47, 0x47, 0x47, 0xe8, 0xa9, 0x53, 0xa7, 0xbe, 0xc1, 0xbb, 0xd1, 0x9a,
	0x9a, 0x1a, 0xaa, 0xa8, 0xa8, 0xa0, 0x7d, 0xfb, 0xf6, 0x11, 0x14, 0x23,
	0xc8, 0x2f, 0xdf, 0xbe, 0x7d, 0xfb, 0xf7, 0x00, 0x6d, 0xf3, 0xbf, 0x0a,
	0xc0, 0xe7, 0x59, 0xd8, 0x9c, 0xeb, 0xee, 0xee, 0x3e, 0xa6, 0xa5, 0xa5,
	0x45, 0x6a, 0x6a, 0x6a, 0xa4, 0xa7, 0xa7, 0xc7, 0x07, 0x3d, 0x28, 0x2d,
	0x2d, 0xfd, 0x74, 0xaa, 0x03, 0x38, 0x84, 0xf0, 0x57, 0x7f, 0xf7, 0xee,
	0xdd, 0xc5, 0xc1, 0xc1, 0xc1, 0x2f, 0x5c, 0x5c, 0x5c, 0x28, 0x24, 0x24,
	0x84, 0xb2, 0xb2, 0xb2, 0x68, 0xf9, 0xf2, 0xe5, 0xe4, 0xe8, 0xe8, 0x28,
	0x0f, 0x08, 0x08, 0x88, 0x6f, 0x69, 0x69, 0xd1, 0x7a, 0x2b, 0x80, 0xa8,
	0xa8, 0x28, 0xe7, 0xcd, 0x9b, 0x37, 0xdf, 0x34, 0x36, 0x36, 0x26, 0x65,
	0x65, 0x65, 0x52, 0x55, 0x55, 0x25, 0x3f, 0x3f, 0x3f, 0x2a, 0x28, 0x28,
	0x08, 0xe0, 0xb4, 0x5f, 0xba, 0x74, 0xc9, 0xb0, 0xa4, 0xa4, 0x24, 0x19,
	0x52, 0xe6, 0x55, 0x56, 0x56, 0xe6, 0xc1, 0xff, 0x3c, 0x04, 0x30, 0xbf,
	0xa1, 0xa1, 0xe1, 0x63, 0x0e, 0xe6, 0x8e, 0x1d, 0x3b, 0x52, 0x9d, 0x9d,
	0x9d, 0x89, 0xbf, 0xfe, 0xfe, 0xfe, 0x04, 0xef, 0xc9, 0xdc, 0xdc, 0x9c,
	0x56, 0xac, 0x58, 0xd1, 0x1e, 0x18, 0x18, 0xe8, 0xf0, 0xc6, 0xe2, 0xbd,
	0xbd, 0xbd, 0x9a, 0x90, 0x27, 0x26, 0x22, 0x22, 0xe2, 0x19, 0x4b, 0xad,
	0xae, 0xae, 0x4e, 0xfa, 0xfa, 0xfa, 0x32, 0xc8, 0x19, 0xd1, 0xdf, 0xdf,
	0x3f, 0x13, 0xc8, 0xdd, 0x21, 0xeb, 0x8f, 0x50, 0xe0, 0xb1, 0x54, 0x2a,
	0x95, 0xf3, 0x17, 0x4a, 0xc9, 0xa1, 0xd4, 0x18, 0x3c, 0x6f, 0xc1, 0x73,
	0x14, 0xce, 0xf0, 0x39, 0x71, 0xe2, 0x44, 0xa1, 0xa5, 0xa5, 0x65, 0xf7,
	0xbc, 0x79, 0xf3, 0xc8, 0xce, 0xce, 0x8e, 0x4c, 0x4c, 0x4c, 0xc8, 0xc6,
	0xc6, 0xe6, 0xe9, 0xd6, 0xad, 0x5b, 0xc3, 0x60, 0xe9, 0x07, 0x53, 0x02,
	0x00, 0x23, 0x1d, 0x30, 0x4a, 0xe3, 0x54, 0xaf, 0x5b, 0xb7, 0x8e, 0xe0,
	0x15, 0x45, 0x46, 0x46, 0xba, 0x33, 0xe3, 0xc1, 0xc1, 0xc1, 0x66, 0x30,
	0xbc, 0xdb, 0xd8, 0xd8, 0x48, 0x17, 0x2f, 0x5e, 0x24, 0x14, 0x60, 0x35,
	0x08, 0x40, 0x44, 0x18, 0x13, 0x13, 0x13, 0x09, 0xec, 0xff, 0x3e, 0x7b,
	0xf6, 0x6c, 0xd5, 0xc0, 0xc0, 0x80, 0x29, 0x32, 0xf3, 0xd5, 0xb2, 0x65,
	0xcb, 0xc8, 0xc8, 0xc8, 0x88, 0x60, 0x85, 0x50, 0x60, 0xcd, 0x9a, 0x35,
	0xd1, 0x78, 0xaf, 0xad, 0x50, 0x1c, 0x7e, 0x29, 0x23, 0xd9, 0xb6, 0x41,
	0x41, 0x41, 0xe1, 0x87, 0x0f, 0x1f, 0x0e, 0x85, 0x74, 0xff, 0xf2, 0xe2,
	0xb0, 0xb0, 0x30, 0x02, 0xa3, 0x01, 0xa8, 0xf1, 0x2b, 0x06, 0xc7, 0xd8,
	0xf5, 0xeb, 0xd7, 0xe9, 0xf2, 0xe5, 0xcb, 0xc4, 0x00, 0xb8, 0xf0, 0xd1,
	0xa3, 0x47, 0x09, 0x36, 0xd1, 0xb1, 0x63, 0xc7, 0xa8, 0xb9, 0xb9, 0x99,
	0x60, 0x09, 0xa1, 0x45, 0x9f, 0x5c, 0xb9, 0x72, 0xa5, 0xbf, 0xac, 0xac,
	0xac, 0x0d, 0xca, 0x10, 0xbc, 0xa6, 0xf5, 0xeb, 0xd7, 0x93, 0xad, 0xad,
	0x2d, 0xed, 0xda, 0xb5, 0xab, 0x1d, 0x2a, 0xc6, 0x64, 0x67, 0x67, 0xeb,
	0x8e, 0x03, 0xe0, 0x61, 0xb2, 0x7f, 0xff, 0xfe, 0x2f, 0xc1, 0xf2, 0x8f,
	0xb4, 0xb4, 0xb4, 0xd8, 0xbd, 0x7b, 0xf7, 0xe6, 0x78, 0x7a, 0x7a, 0x92,
	0x81, 0x81, 0x01, 0xa3, 0x15, 0xc8, 0xab, 0xaa, 0xaa, 0x08, 0xad, 0x44,
	0xd8, 0xcc, 0x80, 0x08, 0x33, 0x80, 0x00, 0x5a, 0xbc, 0x03, 0x68, 0xd1,
	0x11, 0xcc, 0x92, 0xdf, 0xa1, 0xbf, 0x29, 0x3f, 0x3f, 0x5f, 0x0e, 0x89,
	0x45, 0x5e, 0x34, 0x35, 0x35, 0x69, 0xd5, 0xaa, 0x55, 0xb4, 0x6d, 0xdb,
	0xb6, 0xa7, 0x00, 0x50, 0x09, 0x5b, 0xf5, 0x15, 0xd8, 0xa3, 0x65, 0xa6,
	0xdf, 0xba, 0x75, 0xcb, 0x1b, 0x03, 0x62, 0x00, 0x8c, 0x1f, 0xc1, 0xdb,
	0x97, 0x7c, 0x10, 0x42, 0x24, 0x14, 0x00, 0x13, 0x02, 0x23, 0x82, 0xef,
	0x04, 0xe4, 0x04, 0x75, 0xd8, 0x47, 0x82, 0xb7, 0x02, 0x24, 0x07, 0x93,
	0x8b, 0x60, 0x28, 0x89, 0x16, 0xe3, 0xc0, 0xb9, 0xba, 0xba, 0xd2, 0x82,
	0x05, 0x0b, 0x68, 0xf1, 0xe2, 0xc5, 0x2f, 0x3d, 0x3c, 0x3c, 0xfe, 0x4c,
	0x48, 0x48, 0x88, 0x83, 0x82, 0x1f, 0xc1, 0x56, 0x75, 0x10, 0x9e, 0xa1,
	0xc4, 0xac, 0x21, 0xa7, 0xc1, 0x2b, 0x24, 0x98, 0xcd, 0x36, 0x60, 0x97,
	0x12, 0x17, 0x17, 0x57, 0x0f, 0xdf, 0x86, 0x59, 0xde, 0xd4, 0xd4, 0x54,
	0xd1, 0xb7, 0xe5, 0xe5, 0xe5, 0x82, 0x19, 0x17, 0x5e, 0xb2, 0x64, 0x09,
	0xcd, 0x99, 0x33, 0x47, 0xcc, 0x01, 0x6d, 0x6d, 0x6d, 0xd2, 0xd0, 0xd0,
	0x10, 0x00, 0xac, 0xad, 0xad, 0x89, 0x55, 0x43, 0x41, 0x32, 0x34, 0x34,
	0xa4, 0xd5, 0xab, 0x57, 0x13, 0xc6, 0xed, 0x10, 0x14, 0x8d, 0x46, 0x36,
	0xec, 0xc0, 0xfa, 0x73, 0xe4, 0x2a, 0x2c, 0x3e, 0x3e, 0xde, 0x4f, 0x09,
	0x52, 0xda, 0x7f, 0x8d, 0x0f, 0x24, 0x74, 0x83, 0x87, 0x6e, 0x38, 0xd8,
	0xed, 0xd5, 0x33, 0xa4, 0xee, 0x60, 0x99, 0x99, 0x3d, 0x7b, 0x9b, 0x99,
	0x99, 0x49, 0x00, 0x25, 0x24, 0xe4, 0x24, 0xcf, 0x9d, 0x3b, 0x97, 0x66,
	0xcf, 0x9e, 0x2d, 0x66, 0x81, 0x8a, 0x8a, 0x0a, 0xe9, 0xe8, 0xe8, 0x88,
	0x77, 0xac, 0x86, 0xbd, 0xbd, 0x3d, 0x71, 0xbf, 0xa3, 0x6d, 0x59, 0xb9,
	0x61, 0xdc, 0x0d, 0xbd, 0xb0, 0xf6, 0xa6, 0x44, 0x22, 0xe9, 0x00, 0x18,
	0x19, 0xac, 0xf9, 0x4e, 0xa9, 0xb5, 0xb5, 0xd5, 0xfb, 0xd0, 0xa1, 0x43,
	0xd2, 0xd8, 0xd8, 0x58, 0x29, 0x82, 0x23, 0xdd, 0xb9, 0x73, 0xa7, 0x14,
	0xa8, 0x2a, 0x51, 0xe8, 0x1e, 0x16, 0x8b, 0xc0, 0xa0, 0x45, 0xc4, 0x2f,
	0xa7, 0x1f, 0xb3, 0x5b, 0xf4, 0x2f, 0x26, 0x17, 0x2d, 0x5c, 0xb8, 0x50,
	0x48, 0xcd, 0xc3, 0x88, 0x41, 0x70, 0x51, 0x96, 0x1b, 0x43, 0x85, 0x25,
	0x1f, 0x43, 0x16, 0xe4, 0x00, 0xce, 0xdf, 0x7b, 0x08, 0x72, 0x0d, 0x3a,
	0x22, 0x1c, 0x1d, 0xe1, 0x84, 0x71, 0xac, 0x31, 0xa9, 0xdd, 0x92, 0x93,
	0x93, 0xe7, 0xc3, 0x33, 0x7f, 0x6c, 0x4a, 0xc7, 0x74, 0xaa, 0x4e, 0x4f,
	0x4f, 0x97, 0x01, 0x58, 0x1d, 0xd0, 0x3e, 0x5e, 0xba, 0x74, 0xa9, 0x38,
	0x9c, 0x81, 0x70, 0xa0, 0x78, 0x82, 0x61, 0x76, 0x0b, 0x76, 0x5e, 0x5e,
	0x5e, 0xa2, 0x35, 0xd7, 0xae, 0x5d, 0x2b, 0x7c, 0x86, 0xd4, 0xcf, 0x20,
	0xfd, 0x0f, 0x58, 0x17, 0x8f, 0x73, 0x12, 0xc0, 0x3e, 0x1f, 0xcf, 0x5d,
	0xe8, 0xa8, 0x62, 0x9c, 0xf7, 0x05, 0xec, 0x53, 0x1f, 0x2f, 0xce, 0xf3,
	0x39, 0x37, 0x37, 0xd7, 0x12, 0x8c, 0xca, 0x31, 0x56, 0xef, 0x62, 0x51,
	0x05, 0x0a, 0xba, 0x40, 0x89, 0x45, 0xe8, 0xe7, 0x45, 0x28, 0x38, 0x00,
	0x46, 0x2f, 0x51, 0x6c, 0x10, 0xde, 0x37, 0x22, 0xe1, 0x12, 0x58, 0x24,
	0x49, 0x49, 0x49, 0x11, 0xbf, 0x00, 0x29, 0x01, 0x3b, 0x09, 0x2e, 0x11,
	0x09, 0x0e, 0x7f, 0x82, 0xc0, 0x8d, 0x46, 0x47, 0x47, 0xc7, 0x70, 0x01,
	0xbe, 0x50, 0x50, 0x58, 0x0f, 0x7b, 0xdc, 0x61, 0xdd, 0xb7, 0xf8, 0x7f,
	0x33, 0x3a, 0xc5, 0x7c, 0xfc, 0xa2, 0xe1, 0xa4, 0x23, 0x54, 0x9e, 0x90,
	0xbc, 0x03, 0x28, 0x03, 0x50, 0xf0, 0x93, 0x09, 0xb7, 0x96, 0x32, 0x2c,
	0xf9, 0x0d, 0xbd, 0x3a, 0x82, 0xdf, 0x20, 0x0c, 0x98, 0xf1, 0x1b, 0x6d,
	0xaa, 0x49, 0x85, 0x71, 0xfb, 0x00, 0xa9, 0x1e, 0x45, 0x58, 0x45, 0xf1,
	0x89, 0x1f, 0x0c, 0xab, 0x30, 0xd4, 0xe9, 0x54, 0xb8, 0xe5, 0x18, 0x05,
	0x52, 0x68, 0x03, 0xb6, 0x11, 0x78, 0x56, 0x7d, 0xed, 0xd6, 0x9a, 0x86,
	0xff, 0xf7, 0x39, 0x39, 0x39, 0xbd, 0x80, 0x67, 0xad, 0x00, 0xd6, 0x88,
	0x36, 0x4c, 0xc4, 0x10, 0x52, 0xb8, 0x24, 0xb0, 0x4f, 0x05, 0xcc, 0x8c,
	0xd0, 0x0d, 0x23, 0x48, 0xf6, 0xe8, 0xe9, 0xd3, 0xa7, 0x27, 0x15, 0x1f,
	0x1a, 0x1a, 0x9a, 0x8f, 0x80, 0x27, 0x62, 0x20, 0x19, 0x2a, 0xa0, 0x42,
	0x22, 0x67, 0x22, 0x91, 0x3a, 0x53, 0xb1, 0x41, 0xea, 0xb3, 0x39, 0x3c,
	0xec, 0x2f, 0xae, 0x55, 0x1e, 0x2a, 0x3f, 0x63, 0xd4, 0x7a, 0x4d, 0x5c,
	0x8b, 0xf9, 0x50, 0x00, 0x46, 0xfd, 0x90, 0x5d, 0x8e, 0x0b, 0x64, 0xf4,
	0xf6, 0xed, 0xdb, 0x93, 0x8a, 0xf3, 0xfa, 0x87, 0x0f, 0x1f, 0xea, 0x62,
	0xf8, 0x28, 0x10, 0x7c, 0xeb, 0x4d, 0x87, 0x2b, 0x53, 0x13, 0x6c, 0xcb,
	0x90, 0xf6, 0xdf, 0x11, 0xb4, 0xc2, 0xe2, 0xe2, 0xe2, 0x48, 0x85, 0xd0,
	0x60, 0x37, 0xfe, 0x6e, 0x3a, 0x7f, 0xfe, 0x3c, 0xcf, 0x01, 0x39, 0xde,
	0x17, 0xdd, 0xbf, 0x7f, 0x7f, 0x72, 0xa2, 0x5f, 0xab, 0xf2, 0x1f, 0xf3,
	0xb5, 0xec, 0x46, 0x1d, 0x87, 0x54, 0xda, 0x00, 0x00, 0x00, 0x00, 0x49,
	0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

extern PHPAPI int	php_register_info_logo(char *logo_string, const char *mimetype, const unsigned char *data, int size);
#else
#define YAF_LOGO_BASE64		"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"
#define YAF_LOGO_DATA			"data:image/png;base64," YAF_LOGO_BASE64
#define YAF_SUPPORT_URL		 "http://pecl.php.net/package/yaf"
#define YAF_LOGO_IMG			 "<a href=" YAF_SUPPORT_URL "> \
							 <img src=\"" YAF_LOGO_DATA "\" alt=\"Yaf logo\" /></a>\n"

#endif
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
