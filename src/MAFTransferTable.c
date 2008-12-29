/*	MAFTransferTable.c

	Copyright 2008 Fred Cooke

	This file is part of the FreeEMS project.

	FreeEMS software is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	FreeEMS software is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with any FreeEMS software.  If not, see <http://www.gnu.org/licenses/>.

	We ask that if you make any changes to this file you send them upstream to us at admin@diyefi.org

	Thank you for choosing FreeEMS to run your engine! */

#include "inc/freeEMS.h"

const volatile unsigned short MAFTransferTable[1024] LOOKUPD = {
	3,		3,		3,		3,		4,		4,		4,		4,		5,		5,		5,		5,		6,		6,		6,		6,
	7,		7,		7,		8,		8,		8,		9,		9,		10,		10,		10,		11,		11,		12,		12,		13,
	13,		14,		14,		15,		15,		16,		17,		17,		18,		19,		19,		20,		21,		21,		22,		23,
	23,		24,		25,		26,		27,		28,		28,		29,		30,		31,		32,		33,		34,		35,		36,		37,
	38,		39,		40,		41,		43,		44,		45,		46,		47,		49,		50,		51,		53,		54,		55,		57,
	58,		60,		61,		63,		64,		66,		67,		69,		71,		72,		74,		76,		78,		79,		81,		83,
	85,		87,		89,		91,		93,		95,		97,		99,		101,	103,	105,	108,	110,	112,	115,	117,
	119,	122,	124,	127,	129,	132,	134,	137,	140,	142,	145,	148,	151,	154,	157,	159,
	162,	165,	169,	172,	175,	178,	181,	184,	188,	191,	194,	198,	201,	205,	208,	212,
	216,	219,	223,	227,	231,	234,	238,	242,	246,	250,	254,	258,	263,	267,	271,	275,
	280,	284,	289,	293,	298,	302,	307,	312,	317,	321,	326,	331,	336,	341,	346,	351,
	357,	362,	367,	372,	378,	383,	389,	394,	400,	406,	411,	417,	423,	429,	435,	441,
	447,	453,	459,	466,	472,	478,	485,	491,	498,	505,	511,	518,	525,	532,	539,	546,
	553,	560,	567,	574,	582,	589,	597,	604,	612,	619,	627,	635,	643,	651,	659,	667,
	675,	683,	691,	700,	708,	717,	725,	734,	742,	751,	760,	769,	778,	787,	796,	806,
	815,	824,	834,	843,	853,	862,	872,	882,	892,	902,	912,	922,	932,	943,	953,	964,
	974,	985,	995,	1006,	1017,	1028,	1039,	1050,	1061,	1073,	1084,	1096,	1107,	1119,	1130,	1142,
	1154,	1166,	1178,	1190,	1203,	1215,	1227,	1240,	1252,	1265,	1278,	1291,	1304,	1317,	1330,	1343,
	1357,	1370,	1383,	1397,	1411,	1425,	1438,	1452,	1467,	1481,	1495,	1509,	1524,	1538,	1553,	1568,
	1583,	1598,	1613,	1628,	1643,	1659,	1674,	1690,	1705,	1721,	1737,	1753,	1769,	1785,	1801,	1818,
	1834,	1851,	1868,	1884,	1901,	1918,	1935,	1953,	1970,	1987,	2005,	2023,	2040,	2058,	2076,	2095,
	2113,	2131,	2150,	2168,	2187,	2206,	2224,	2243,	2263,	2282,	2301,	2321,	2340,	2360,	2380,	2400,
	2420,	2440,	2460,	2481,	2501,	2522,	2543,	2564,	2585,	2606,	2627,	2648,	2670,	2691,	2713,	2735,
	2757,	2779,	2801,	2824,	2846,	2869,	2892,	2914,	2937,	2961,	2984,	3007,	3031,	3054,	3078,	3102,
	3126,	3150,	3175,	3199,	3224,	3248,	3273,	3298,	3323,	3348,	3374,	3399,	3425,	3451,	3477,	3503,
	3529,	3555,	3582,	3608,	3635,	3662,	3689,	3716,	3743,	3771,	3798,	3826,	3854,	3882,	3910,	3938,
	3967,	3995,	4024,	4053,	4082,	4111,	4140,	4170,	4199,	4229,	4259,	4289,	4319,	4350,	4380,	4411,
	4441,	4472,	4504,	4535,	4566,	4598,	4629,	4661,	4693,	4726,	4758,	4790,	4823,	4856,	4889,	4922,
	4955,	4989,	5022,	5056,	5090,	5124,	5158,	5192,	5227,	5262,	5297,	5332,	5367,	5402,	5438,	5473,
	5509,	5545,	5581,	5618,	5654,	5691,	5728,	5765,	5802,	5839,	5877,	5915,	5952,	5991,	6029,	6067,
	6106,	6144,	6183,	6222,	6262,	6301,	6341,	6380,	6420,	6460,	6501,	6541,	6582,	6623,	6664,	6705,
	6746,	6788,	6829,	6871,	6913,	6956,	6998,	7041,	7084,	7127,	7170,	7213,	7257,	7300,	7344,	7388,
	7433,	7477,	7522,	7567,	7612,	7657,	7702,	7748,	7794,	7840,	7886,	7932,	7979,	8026,	8073,	8120,
	8167,	8215,	8262,	8310,	8359,	8407,	8455,	8504,	8553,	8602,	8651,	8701,	8751,	8800,	8851,	8901,
	8951,	9002,	9053,	9104,	9155,	9207,	9259,	9311,	9363,	9415,	9468,	9520,	9573,	9626,	9680,	9733,
	9787,	9841,	9895,	9950,	10004,	10059,	10114,	10170,	10225,	10281,	10337,	10393,	10449,	10506,	10562,	10619,
	10677,	10734,	10792,	10849,	10907,	10966,	11024,	11083,	11142,	11201,	11260,	11320,	11380,	11440,	11500,	11561,
	11621,	11682,	11744,	11805,	11867,	11928,	11990,	12053,	12115,	12178,	12241,	12304,	12368,	12431,	12495,	12559,
	12624,	12688,	12753,	12818,	12884,	12949,	13015,	13081,	13147,	13214,	13280,	13347,	13414,	13482,	13550,	13617,
	13686,	13754,	13823,	13891,	13961,	14030,	14100,	14169,	14239,	14310,	14380,	14451,	14522,	14594,	14665,	14737,
	14809,	14881,	14954,	15027,	15100,	15173,	15246,	15320,	15394,	15469,	15543,	15618,	15693,	15768,	15844,	15920,
	15996,	16072,	16149,	16226,	16303,	16380,	16458,	16535,	16614,	16692,	16771,	16850,	16929,	17008,	17088,	17168,
	17248,	17329,	17409,	17490,	17572,	17653,	17735,	17817,	17899,	17982,	18065,	18148,	18232,	18315,	18399,	18484,
	18568,	18653,	18738,	18823,	18909,	18995,	19081,	19167,	19254,	19341,	19428,	19516,	19604,	19692,	19780,	19869,
	19958,	20047,	20136,	20226,	20316,	20407,	20497,	20588,	20679,	20771,	20862,	20954,	21047,	21139,	21232,	21326,
	21419,	21513,	21607,	21701,	21796,	21891,	21986,	22081,	22177,	22273,	22370,	22466,	22563,	22661,	22758,	22856,
	22954,	23053,	23151,	23251,	23350,	23450,	23549,	23650,	23750,	23851,	23952,	24054,	24155,	24258,	24360,	24463,
	24566,	24669,	24772,	24876,	24980,	25085,	25190,	25295,	25400,	25506,	25612,	25718,	25825,	25932,	26039,	26147,
	26255,	26363,	26472,	26581,	26690,	26799,	26909,	27019,	27130,	27240,	27351,	27463,	27575,	27687,	27799,	27912,
	28025,	28138,	28252,	28366,	28480,	28595,	28709,	28825,	28940,	29056,	29172,	29289,	29406,	29523,	29641,	29759,
	29877,	29995,	30114,	30234,	30353,	30473,	30593,	30714,	30835,	30956,	31077,	31199,	31321,	31444,	31567,	31690,
	31814,	31938,	32062,	32187,	32312,	32437,	32562,	32688,	32815,	32941,	33068,	33196,	33323,	33451,	33580,	33709,
	33838,	33967,	34097,	34227,	34357,	34488,	34619,	34751,	34883,	35015,	35148,	35281,	35414,	35547,	35681,	35816,
	35951,	36086,	36221,	36357,	36493,	36629,	36766,	36904,	37041,	37179,	37317,	37456,	37595,	37734,	37874,	38014,
	38155,	38296,	38437,	38578,	38720,	38863,	39005,	39149,	39292,	39436,	39580,	39724,	39869,	40015,	40160,	40306,
	40453,	40600,	40747,	40894,	41042,	41190,	41339,	41488,	41638,	41787,	41938,	42088,	42239,	42390,	42542,	42694,
	42847,	42999,	43153,	43306,	43460,	43615,	43769,	43925,	44080,	44236,	44392,	44549,	44706,	44864,	45022,	45180,
	45339,	45498,	45657,	45817,	45977,	46138,	46299,	46460,	46622,	46784,	46947,	47110,	47273,	47437,	47601,	47766,
	47931,	48097,	48262,	48429,	48595,	48762,	48930,	49098,	49266,	49434,	49604,	49773,	49943,	50113,	50284,	50455,
	50626,	50798,	50971,	51143,	51317,	51490,	51664,	51839,	52013,	52189,	52364,	52540,	52717,	52894,	53071,	53249,
	53427,	53606,	53785,	53964,	54144,	54324,	54505,	54686,	54867,	55049,	55232,	55414,	55598,	55781,	55965,	56150,
	56335,	56520,	56706,	56892,	57079,	57266,	57454,	57642,	57830,	58019,	58208,	58398,	58588,	58778,	58969,	59161,
	59353,	59545,	59738,	59931,	60125,	60319,	60513,	60708,	60904,	61099,	61296,	61492,	61690,	61887,	62085,	62284,
	62483,	62682,	62882,	63082,	63283,	63484,	63686,	63888,	64091,	64294,	64497,	64701,	64906,	65110,	65316,	65521
};
