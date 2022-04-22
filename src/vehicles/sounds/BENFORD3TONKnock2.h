const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 426;
const signed char knockSamples[] = {//0
0, 0, 2, 5, 6, 7, 12, 13, 14, 20, 25, 24, 27, 27, 19, 14, //16
19, 30, 35, 40, 46, 49, 45, 46, 54, 59, 69, 82, 87, 88, 84, 75, //32
69, 70, 77, 79, 83, 91, 94, 92, 95, 102, 111, 120, 127, 126, 109, 98, //48
86, 76, 75, 84, 90, 95, 95, 90, 87, 88, 92, 95, 95, 93, 89, 81, //64
75, 71, 66, 63, 60, 57, 59, 58, 55, 57, 54, 49, 47, 45, 40, 30, //80
28, 24, 18, 27, 38, 38, 40, 45, 46, 41, 38, 44, 45, 35, 23, 18, //96
10, -6, -6, -4, -3, 1, 3, 2, 4, 3, -4, -11, -23, -26, -23, -23, //112
-25, -22, -20, -17, -9, 0, 2, -2, -10, -24, -39, -53, -61, -57, -61, -63, //128
-57, -56, -61, -49, -40, -37, -34, -32, -40, -47, -50, -52, -49, -44, -39, -42, //144
-46, -50, -51, -53, -54, -50, -47, -51, -57, -57, -56, -55, -47, -44, -42, -31, //160
-30, -35, -40, -42, -46, -50, -52, -56, -61, -60, -57, -57, -56, -52, -47, -45, //176
-41, -38, -43, -51, -60, -77, -82, -80, -79, -80, -75, -67, -66, -60, -48, -41, //192
-37, -30, -29, -30, -32, -39, -56, -67, -76, -86, -89, -82, -67, -55, -42, -32, //208
-25, -21, -17, -14, -9, -7, -11, -26, -30, -32, -33, -29, -18, 3, 10, 12, //224
12, 10, 6, 4, 5, 7, 6, 0, -3, -5, -13, -19, -19, -13, -2, 4, //240
11, 16, 22, 30, 33, 30, 25, 22, 13, -6, -14, -25, -35, -39, -37, -24, //256
-10, 6, 21, 32, 39, 38, 34, 30, 24, 23, 21, 17, 15, 15, 17, 22, //272
39, 48, 52, 55, 54, 46, 39, 40, 42, 47, 52, 57, 56, 52, 48, 43, //288
40, 37, 34, 36, 38, 38, 44, 56, 62, 65, 69, 71, 66, 60, 53, 40, //304
27, 19, 11, 10, 10, 12, 19, 26, 33, 41, 44, 46, 46, 35, 28, 26, //320
25, 21, 20, 16, 17, 22, 25, 28, 37, 33, 30, 34, 37, 38, 32, 24, //336
18, 14, 12, 13, 14, 14, 15, 16, 19, 25, 28, 25, 16, 8, 0, -4, //352
-8, -11, -8, -10, -14, -12, -16, -24, -27, -25, -21, -26, -32, -39, -45, -49, //368
-50, -50, -52, -53, -55, -57, -66, -71, -70, -64, -59, -54, -53, -56, -59, -66, //384
-76, -82, -77, -72, -72, -78, -86, -93, -90, -84, -80, -76, -72, -73, -73, -71, //400
-66, -60, -51, -49, -45, -37, -34, -37, -38, -38, -42, -44, -45, -41, -37, -37, //416
-33, -20, -11, -6, -5, -6, -7, -6, -4, 0, };
