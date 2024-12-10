/*
 * TestVector.h
 *
 *  Created on: 13 nov 2024
 *      Author: User
 */

#ifndef SRC_TESTVECTOR_H_
#define SRC_TESTVECTOR_H_

#define inputTest_250 0, 33, 65, 98, 131, 163, 195, 227, 259, 290, 321, 352, 383, 413, 442, 471, 500, 528, 556, 582, 609, 634, 659, 684, 707, 730, 752, 773, 793, 813, 831, 849, 866, 882, 897, 911, 924, 936, 947, 957, 966, 974, 981, 987, 991, 995, 998, 999, 1000, 999, 998, 995, 991, 987, 981, 974, 966, 957, 947, 936, 924, 911, 897, 882, 866, 849, 831, 813, 793, 773, 752, 730, 707, 684, 659, 634, 609, 582, 556, 528, 500, 471, 442, 413, 383, 352, 321, 290, 259, 227, 195, 163, 131, 98, 65, 33, 0, -33, -65, -98, -131, -163, -195, -227, -259, -290, -321, -352, -383, -413, -442, -471, -500, -528, -556, -582, -609, -634, -659, -684, -707, -730, -752, -773, -793, -813, -831, -849, -866, -882, -897, -911, -924, -936, -947, -957, -966, -974, -981, -987, -991, -995, -998, -999, -1000, -999, -998, -995, -991, -987, -981, -974, -966, -957, -947, -936, -924, -911, -897, -882, -866, -849, -831, -813, -793, -773, -752, -730, -707, -684, -659, -634, -609, -582, -556, -528, -500, -471, -442, -413, -383, -352, -321, -290, -259, -227, -195, -163, -131, -98, -65, -33, 0, 33, 65, 98, 131, 163, 195, 227
#define inputTest_500 0, 65, 131, 195, 259, 321, 383, 442, 500, 556, 609, 659, 707, 752, 793, 831, 866, 897, 924, 947, 966, 981, 991, 998, 1000, 998, 991, 981, 966, 947, 924, 897, 866, 831, 793, 752, 707, 659, 609, 556, 500, 442, 383, 321, 259, 195, 131, 65, 0, -65, -131, -195, -259, -321, -383, -442, -500, -556, -609, -659, -707, -752, -793, -831, -866, -897, -924, -947, -966, -981, -991, -998, -1000, -998, -991, -981, -966, -947, -924, -897, -866, -831, -793, -752, -707, -659, -609, -556, -500, -442, -383, -321, -259, -195, -131, -65, 0, 65, 131, 195, 259, 321, 383, 442, 500, 556, 609, 659, 707, 752, 793, 831, 866, 897, 924, 947, 966, 981, 991, 998, 1000, 998, 991, 981, 966, 947, 924, 897, 866, 831, 793, 752, 707, 659, 609, 556, 500, 442, 383, 321, 259, 195, 131, 65, 0, -65, -131, -195, -259, -321, -383, -442, -500, -556, -609, -659, -707, -752, -793, -831, -866, -897, -924, -947, -966, -981, -991, -998, -1000, -998, -991, -981, -966, -947, -924, -897, -866, -831, -793, -752, -707, -659, -609, -556, -500, -442, -383, -321, -259, -195, -131, -65, 0, 65, 131, 195, 259, 321, 383, 442
#define inputTest_1000 0, 131, 259, 383, 500, 609, 707, 793, 866, 924, 966, 991, 1000, 991, 966, 924, 866, 793, 707, 609, 500, 383, 259, 131, 0, -131, -259, -383, -500, -609, -707, -793, -866, -924, -966, -991, -1000, -991, -966, -924, -866, -793, -707, -609, -500, -383, -259, -131, 0, 131, 259, 383, 500, 609, 707, 793, 866, 924, 966, 991, 1000, 991, 966, 924, 866, 793, 707, 609, 500, 383, 259, 131, 0, -131, -259, -383, -500, -609, -707, -793, -866, -924, -966, -991, -1000, -991, -966, -924, -866, -793, -707, -609, -500, -383, -259, -131, 0, 131, 259, 383, 500, 609, 707, 793, 866, 924, 966, 991, 1000, 991, 966, 924, 866, 793, 707, 609, 500, 383, 259, 131, 0, -131, -259, -383, -500, -609, -707, -793, -866, -924, -966, -991, -1000, -991, -966, -924, -866, -793, -707, -609, -500, -383, -259, -131, 0, 131, 259, 383, 500, 609, 707, 793, 866, 924, 966, 991, 1000, 991, 966, 924, 866, 793, 707, 609, 500, 383, 259, 131, 0, -131, -259, -383, -500, -609, -707, -793, -866, -924, -966, -991, -1000, -991, -966, -924, -866, -793, -707, -609, -500, -383, -259, -131, 0, 131, 259, 383, 500, 609, 707, 793
#define inputTest_2000 0, 259, 500, 707, 866, 966, 1000, 966, 866, 707, 500, 259, 0, -259, -500, -707, -866, -966, -1000, -966, -866, -707, -500, -259, 0, 259, 500, 707, 866, 966, 1000, 966, 866, 707, 500, 259, 0, -259, -500, -707, -866, -966, -1000, -966, -866, -707, -500, -259, 0, 259, 500, 707, 866, 966, 1000, 966, 866, 707, 500, 259, 0, -259, -500, -707, -866, -966, -1000, -966, -866, -707, -500, -259, 0, 259, 500, 707, 866, 966, 1000, 966, 866, 707, 500, 259, 0, -259, -500, -707, -866, -966, -1000, -966, -866, -707, -500, -259, 0, 259, 500, 707, 866, 966, 1000, 966, 866, 707, 500, 259, 0, -259, -500, -707, -866, -966, -1000, -966, -866, -707, -500, -259, 0, 259, 500, 707, 866, 966, 1000, 966, 866, 707, 500, 259, 0, -259, -500, -707, -866, -966, -1000, -966, -866, -707, -500, -259, 0, 259, 500, 707, 866, 966, 1000, 966, 866, 707, 500, 259, 0, -259, -500, -707, -866, -966, -1000, -966, -866, -707, -500, -259, 0, 259, 500, 707, 866, 966, 1000, 966, 866, 707, 500, 259, 0, -259, -500, -707, -866, -966, -1000, -966, -866, -707, -500, -259, 0, 259, 500, 707, 866, 966, 1000, 966
#define inputTest_4000 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500, -866, -1000, -866, -500, 0, 500, 866, 1000, 866, 500, 0, -500
#define inputTest_6000 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707, 0, 707, 1000, 707, 0, -707, -1000, -707
#define inputTest_8000 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866, 866, 0, -866, -866, 0, 866

#define outputTest_F_250_LP 0, 0, -1, -2, -4, -8, -12, -17, -23, -28, -32, -34, -32, -26, -15, 0, 21, 46, 75, 105, 137, 169, 201, 231, 260, 288, 315, 340, 365, 389, 413, 436, 459, 481, 503, 524, 544, 564, 584, 603, 621, 638, 655, 671, 687, 701, 715, 728, 741, 752, 763, 773, 782, 791, 798, 805, 810, 815, 819, 822, 824, 825, 826, 825, 824, 822, 819, 815, 810, 805, 798, 791, 782, 773, 763, 752, 741, 728, 715, 701, 687, 671, 655, 638, 621, 603, 584, 564, 544, 524, 503, 481, 459, 436, 413, 389, 365, 341, 316, 291, 265, 239, 213, 187, 161, 134, 107, 81, 54, 27, 0, -27, -54, -81, -107, -134, -161, -187, -213, -239, -265, -291, -316, -341, -365, -389, -413, -436, -459, -481, -503, -524, -544, -564, -584, -603, -621, -638, -655, -671, -687, -701, -715, -728, -741, -752, -763, -773, -782, -791, -798, -805, -810, -815, -819, -822, -824, -825, -826, -825, -824, -822, -819, -815, -810, -805, -798, -791, -782, -773, -763, -752, -741, -728, -715, -701, -687, -671, -655, -638, -621, -603, -584, -564, -544, -524, -503, -481, -459, -436, -413, -389, -365, -341, -316, -291, -265, -239, -213, -187
#define outputTest_F_500_LP 0, 0, -2, -4, -9, -16, -25, -35, -46, -56, -63, -66, -61, -47, -24, 9, 52, 103, 161, 223, 286, 349, 409, 467, 520, 568, 613, 653, 690, 723, 753, 780, 803, 823, 840, 853, 862, 868, 869, 868, 862, 853, 840, 823, 803, 780, 753, 723, 690, 653, 615, 573, 529, 483, 434, 384, 332, 279, 225, 169, 113, 56, 0, -56, -113, -169, -225, -279, -332, -384, -434, -483, -529, -573, -615, -653, -690, -723, -753, -780, -803, -823, -840, -853, -862, -868, -869, -868, -862, -853, -840, -823, -803, -780, -753, -723, -690, -653, -615, -573, -529, -483, -434, -384, -332, -279, -225, -169, -113, -56, 0, 56, 113, 169, 225, 279, 332, 384, 434, 483, 529, 573, 615, 653, 690, 723, 753, 780, 803, 823, 840, 853, 862, 868, 869, 868, 862, 853, 840, 823, 803, 780, 753, 723, 690, 653, 615, 573, 529, 483, 434, 384, 332, 279, 225, 169, 113, 56, 0, -56, -113, -169, -225, -279, -332, -384, -434, -483, -529, -573, -615, -653, -690, -723, -753, -780, -803, -823, -840, -853, -862, -868, -869, -868, -862, -853, -840, -823, -803, -780, -753, -723, -690, -653, -615, -573, -529, -483, -434, -384
#define outputTest_F_1000_LP 0, -1, -4, -9, -18, -31, -48, -67, -87, -104, -114, -112, -95, -59, -3, 72, 166, 274, 390, 510, 626, 733, 825, 901, 956, 991, 1005, 999, 975, 932, 874, 801, 714, 614, 504, 386, 261, 131, 0, -131, -261, -386, -504, -614, -714, -801, -874, -932, -975, -1000, -1009, -1000, -975, -932, -874, -801, -714, -614, -504, -386, -261, -131, 0, 131, 261, 386, 504, 614, 714, 801, 874, 932, 975, 1000, 1009, 1000, 975, 932, 874, 801, 714, 614, 504, 386, 261, 131, 0, -131, -261, -386, -504, -614, -714, -801, -874, -932, -975, -1000, -1009, -1000, -975, -932, -874, -801, -714, -614, -504, -386, -261, -131, 0, 131, 261, 386, 504, 614, 714, 801, 874, 932, 975, 1000, 1009, 1000, 975, 932, 874, 801, 714, 614, 504, 386, 261, 131, 0, -131, -261, -386, -504, -614, -714, -801, -874, -932, -975, -1000, -1009, -1000, -975, -932, -874, -801, -714, -614, -504, -386, -261, -131, 0, 131, 261, 386, 504, 614, 714, 801, 874, 932, 975, 1000, 1009, 1000, 975, 932, 874, 801, 714, 614, 504, 386, 261, 131, 0, -131, -261, -386, -504, -614, -714, -801, -874, -932, -975, -1000, -1009, -1000, -975, -932, -874, -801
#define outputTest_F_2000_LP 0, -2, -7, -18, -34, -57, -84, -113, -136, -147, -138, -101, -30, 76, 215, 380, 556, 729, 878, 986, 1038, 1021, 932, 773, 552, 285, -7, -306, -587, -830, -1017, -1134, -1174, -1134, -1017, -830, -587, -304, 0, 304, 587, 830, 1017, 1134, 1174, 1134, 1017, 830, 587, 304, 0, -304, -587, -830, -1017, -1134, -1174, -1134, -1017, -830, -587, -304, 0, 304, 587, 830, 1017, 1134, 1174, 1134, 1017, 830, 587, 304, 0, -304, -587, -830, -1017, -1134, -1174, -1134, -1017, -830, -587, -304, 0, 304, 587, 830, 1017, 1134, 1174, 1134, 1017, 830, 587, 304, 0, -304, -587, -830, -1017, -1134, -1174, -1134, -1017, -830, -587, -304, 0, 304, 587, 830, 1017, 1134, 1174, 1134, 1017, 830, 587, 304, 0, -304, -587, -830, -1017, -1134, -1174, -1134, -1017, -830, -587, -304, 0, 304, 587, 830, 1017, 1134, 1174, 1134, 1017, 830, 587, 304, 0, -304, -587, -830, -1017, -1134, -1174, -1134, -1017, -830, -587, -304, 0, 304, 587, 830, 1017, 1134, 1174, 1134, 1017, 830, 587, 304, 0, -304, -587, -830, -1017, -1134, -1174, -1134, -1017, -830, -587, -304, 0, 304, 587, 830, 1017, 1134, 1174, 1134, 1017, 830, 587, 304, 0, -304, -587, -830, -1017, -1134
#define outputTest_F_4000_LP 0, -4, -14, -30, -53, -78, -98, -104, -89, -44, 32, 136, 256, 371, 460, 503, 485, 401, 261, 88, -89, -237, -327, -342, -282, -163, -14, 127, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132, 0, -132, -229, -264, -229, -132, 0, 132, 229, 264, 229, 132
#define outputTest_F_6000_LP 0, -6, -18, -34, -50, -60, -57, -39, -6, 38, 89, 138, 179, 207, 217, 209, 182, 140, 89, 36, -8, -41, -57, -58, -48, -33, -18, -7, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1, 2, 1, 0, -1, -2, -1, 0, 1
#define outputTest_F_8000_LP 0, -7, -19, -29, -35, -33, -26, -15, 1, 26, 60, 95, 124, 141, 144, 135, 118, 95, 66, 32, 1, -21, -33, -33, -29, -23, -19, -13, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6, 0, -6, -6, 0, 6, 6

#define outputTest_F_250_HP 0, 1, 1, 0, -2, -3, -2, 0, 2, 4, 3, -3, -15, -3, 1, 3, 1, -1, -4, -5, -4, -3, -2, -1, -3, -3, -4, -4, -4, -4, -4, -5, -5, -6, -6, -6, -6, -6, -6, -7, -7, -7, -8, -8, -8, -8, -8, -8, -8, -8, -8, -9, -9, -8, -9, -8, -9, -9, -9, -9, -9, -9, -9, -9, -9, -8, -9, -8, -9, -9, -8, -8, -8, -8, -8, -8, -8, -8, -8, -7, -7, -7, -6, -6, -6, -6, -6, -6, -5, -5, -4, -4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -1, -1, 0, -1, -1, 0, 0, 0, 1, 1, 0, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 6, 6, 6, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 8, 9, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 8, 9, 8, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 6, 6, 6, 6, 6, 6, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 1, 1
#define outputTest_F_500_HP 0, 3, 2, -1, -4, -6, -5, 0, 4, 8, 6, -6, -31, -7, 5, 6, 2, -3, -7, -10, -8, -5, -2, -1, -5, -5, -6, -6, -6, -6, -7, -7, -7, -7, -8, -7, -7, -7, -8, -7, -7, -7, -7, -6, -6, -6, -6, -5, -5, -5, -4, -4, -4, -3, -2, -2, -1, -1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 7, 7, 7, 8, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 2, 2, 1, 1, 0, 0, 0, 0, 0, -1, -1, -2, -2, -3, -4, -4, -4, -5, -5, -5, -6, -6, -6, -6, -7, -7, -7, -7, -8, -7, -7, -7, -8, -7, -7, -7, -7, -6, -6, -6, -6, -5, -5, -5, -4, -4, -4, -3, -2, -2, -1, -1, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 7, 7, 7, 8, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 2, 2
#define outputTest_F_1000_HP 0, 7, 4, -2, -10, -13, -10, -1, 10, 17, 13, -11, -63, -11, 12, 16, 8, -2, -12, -15, -12, -4, 2, 4, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1
#define outputTest_F_2000_HP 0, 15, 8, -7, -22, -28, -20, 0, 25, 42, 32, -19, -123, -16, 37, 49, 33, 8, -11, -19, -14, 0, 13, 18, 0, -2, -4, -6, -8, -9, -9, -9, -8, -6, -4, -2, 0, 2, 4, 6, 8, 9, 9, 9, 8, 6, 4, 2, 0, -2, -4, -6, -8, -9, -9, -9, -8, -6, -4, -2, 0, 2, 4, 6, 8, 9, 9, 9, 8, 6, 4, 2, 0, -2, -4, -6, -8, -9, -9, -9, -8, -6, -4, -2, 0, 2, 4, 6, 8, 9, 9, 9, 8, 6, 4, 2, 0, -2, -4, -6, -8, -9, -9, -9, -8, -6, -4, -2, 0, 2, 4, 6, 8, 9, 9, 9, 8, 6, 4, 2, 0, -2, -4, -6, -8, -9, -9, -9, -8, -6, -4, -2, 0, 2, 4, 6, 8, 9, 9, 9, 8, 6, 4, 2, 0, -2, -4, -6, -8, -9, -9, -9, -8, -6, -4, -2, 0, 2, 4, 6, 8, 9, 9, 9, 8, 6, 4, 2, 0, -2, -4, -6, -8, -9, -9, -9, -8, -6, -4, -2, 0, 2, 4, 6, 8, 9, 9, 9, 8, 6, 4, 2, 0, -2, -4, -6, -8, -9, -9, -9
#define outputTest_F_4000_HP 0, 29, 10, -28, -58, -58, -19, 45, 109, 129, 69, -87, -322, -82, 78, 139, 117, 50, -19, -62, -66, -38, 1, 24, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4, -8, -9, -8, -4, 0, 4, 8, 9, 8, 4, 0, -4
#define outputTest_F_6000_HP 0, 42, 1, -63, -89, -42, 61, 160, 179, 74, -139, -381, -544, 161, 628, 617, 179, -382, -706, -585, -89, 479, 768, 584, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542, 0, -542, -767, -542, 0, 542, 767, 542
#define outputTest_F_8000_HP 0, 51, -20, -99, -77, 46, 163, 155, 9, -169, -258, -223, -141, 755, 720, -169, -969, -823, 163, 1025, 901, -99, -998, -927, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978, 978, 0, -978, -978, 0, 978

#endif /* SRC_TESTVECTOR_H_ */