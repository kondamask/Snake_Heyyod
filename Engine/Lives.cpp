#include "Lives.h"

void Lives::DrawRed(int x, int y, Graphics & gfx)
{
	gfx.PutPixel(6 + x, 0 + y, 225, 0, 0);
	gfx.PutPixel(7 + x, 0 + y, 224, 0, 0);
	gfx.PutPixel(8 + x, 0 + y, 224, 0, 0);
	gfx.PutPixel(9 + x, 0 + y, 227, 0, 0);
	gfx.PutPixel(10 + x, 0 + y, 222, 0, 0);
	gfx.PutPixel(19 + x, 0 + y, 228, 0, 0);
	gfx.PutPixel(20 + x, 0 + y, 224, 0, 0);
	gfx.PutPixel(21 + x, 0 + y, 224, 0, 0);
	gfx.PutPixel(22 + x, 0 + y, 224, 0, 0);
	gfx.PutPixel(23 + x, 0 + y, 230, 0, 0);
	gfx.PutPixel(4 + x, 1 + y, 216, 14, 13);
	gfx.PutPixel(5 + x, 1 + y, 221, 0, 0);
	gfx.PutPixel(6 + x, 1 + y, 220, 0, 0);
	gfx.PutPixel(7 + x, 1 + y, 220, 0, 0);
	gfx.PutPixel(8 + x, 1 + y, 220, 0, 0);
	gfx.PutPixel(9 + x, 1 + y, 221, 0, 0);
	gfx.PutPixel(10 + x, 1 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 1 + y, 215, 23, 23);
	gfx.PutPixel(18 + x, 1 + y, 218, 0, 0);
	gfx.PutPixel(19 + x, 1 + y, 221, 0, 0);
	gfx.PutPixel(20 + x, 1 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 1 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 1 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 1 + y, 221, 0, 0);
	gfx.PutPixel(24 + x, 1 + y, 217, 13, 13);
	gfx.PutPixel(2 + x, 2 + y, 207, 0, 0);
	gfx.PutPixel(3 + x, 2 + y, 231, 0, 0);
	gfx.PutPixel(4 + x, 2 + y, 224, 0, 0);
	gfx.PutPixel(5 + x, 2 + y, 221, 0, 0);
	gfx.PutPixel(6 + x, 2 + y, 219, 0, 0);
	gfx.PutPixel(7 + x, 2 + y, 214, 0, 0);
	gfx.PutPixel(8 + x, 2 + y, 214, 0, 0);
	gfx.PutPixel(9 + x, 2 + y, 219, 0, 0);
	gfx.PutPixel(10 + x, 2 + y, 221, 0, 0);
	gfx.PutPixel(11 + x, 2 + y, 224, 0, 0);
	gfx.PutPixel(12 + x, 2 + y, 227, 0, 0);
	gfx.PutPixel(17 + x, 2 + y, 225, 0, 0);
	gfx.PutPixel(18 + x, 2 + y, 221, 0, 0);
	gfx.PutPixel(19 + x, 2 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 2 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 2 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 2 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 2 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 2 + y, 223, 0, 0);
	gfx.PutPixel(25 + x, 2 + y, 228, 0, 0);
	gfx.PutPixel(2 + x, 3 + y, 215, 11, 11);
	gfx.PutPixel(3 + x, 3 + y, 222, 0, 0);
	gfx.PutPixel(4 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(5 + x, 3 + y, 218, 0, 0);
	gfx.PutPixel(6 + x, 3 + y, 223, 42, 42);
	gfx.PutPixel(7 + x, 3 + y, 255, 254, 254);
	gfx.PutPixel(8 + x, 3 + y, 255, 255, 255);
	gfx.PutPixel(9 + x, 3 + y, 220, 6, 6);
	gfx.PutPixel(10 + x, 3 + y, 219, 0, 0);
	gfx.PutPixel(11 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 3 + y, 223, 1, 0);
	gfx.PutPixel(13 + x, 3 + y, 212, 16, 16);
	gfx.PutPixel(16 + x, 3 + y, 222, 0, 0);
	gfx.PutPixel(17 + x, 3 + y, 221, 0, 0);
	gfx.PutPixel(18 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 3 + y, 222, 0, 0);
	gfx.PutPixel(26 + x, 3 + y, 220, 0, 0);
	gfx.PutPixel(1 + x, 4 + y, 227, 0, 0);
	gfx.PutPixel(2 + x, 4 + y, 222, 0, 0);
	gfx.PutPixel(3 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(4 + x, 4 + y, 217, 0, 0);
	gfx.PutPixel(5 + x, 4 + y, 210, 0, 0);
	gfx.PutPixel(6 + x, 4 + y, 223, 56, 56);
	gfx.PutPixel(7 + x, 4 + y, 255, 255, 255);
	gfx.PutPixel(8 + x, 4 + y, 255, 255, 255);
	gfx.PutPixel(9 + x, 4 + y, 221, 18, 18);
	gfx.PutPixel(10 + x, 4 + y, 217, 0, 0);
	gfx.PutPixel(11 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 4 + y, 222, 0, 0);
	gfx.PutPixel(16 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 4 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 4 + y, 219, 0, 0);
	gfx.PutPixel(26 + x, 4 + y, 221, 0, 0);
	gfx.PutPixel(27 + x, 4 + y, 222, 0, 0);
	gfx.PutPixel(1 + x, 5 + y, 223, 0, 0);
	gfx.PutPixel(2 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(3 + x, 5 + y, 218, 0, 0);
	gfx.PutPixel(4 + x, 5 + y, 214, 1, 1);
	gfx.PutPixel(5 + x, 5 + y, 214, 2, 2);
	gfx.PutPixel(6 + x, 5 + y, 220, 41, 41);
	gfx.PutPixel(7 + x, 5 + y, 255, 255, 255);
	gfx.PutPixel(8 + x, 5 + y, 255, 255, 255);
	gfx.PutPixel(9 + x, 5 + y, 220, 10, 10);
	gfx.PutPixel(10 + x, 5 + y, 219, 0, 0);
	gfx.PutPixel(11 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 5 + y, 221, 0, 0);
	gfx.PutPixel(15 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(26 + x, 5 + y, 220, 0, 0);
	gfx.PutPixel(27 + x, 5 + y, 221, 0, 0);
	gfx.PutPixel(0 + x, 6 + y, 214, 0, 0);
	gfx.PutPixel(1 + x, 6 + y, 223, 0, 0);
	gfx.PutPixel(2 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(3 + x, 6 + y, 214, 0, 0);
	gfx.PutPixel(4 + x, 6 + y, 214, 2, 2);
	gfx.PutPixel(5 + x, 6 + y, 255, 255, 255);
	gfx.PutPixel(6 + x, 6 + y, 254, 250, 250);
	gfx.PutPixel(7 + x, 6 + y, 214, 0, 0);
	gfx.PutPixel(8 + x, 6 + y, 217, 0, 0);
	gfx.PutPixel(9 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(26 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(27 + x, 6 + y, 221, 0, 0);
	gfx.PutPixel(28 + x, 6 + y, 220, 0, 0);
	gfx.PutPixel(0 + x, 7 + y, 219, 1, 1);
	gfx.PutPixel(1 + x, 7 + y, 223, 0, 0);
	gfx.PutPixel(2 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(3 + x, 7 + y, 214, 0, 0);
	gfx.PutPixel(4 + x, 7 + y, 214, 0, 0);
	gfx.PutPixel(5 + x, 7 + y, 255, 255, 255);
	gfx.PutPixel(6 + x, 7 + y, 254, 249, 249);
	gfx.PutPixel(7 + x, 7 + y, 215, 0, 0);
	gfx.PutPixel(8 + x, 7 + y, 218, 0, 0);
	gfx.PutPixel(9 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(26 + x, 7 + y, 220, 0, 0);
	gfx.PutPixel(27 + x, 7 + y, 221, 0, 0);
	gfx.PutPixel(28 + x, 7 + y, 218, 9, 8);
	gfx.PutPixel(0 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(1 + x, 8 + y, 223, 0, 0);
	gfx.PutPixel(2 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(3 + x, 8 + y, 214, 0, 0);
	gfx.PutPixel(4 + x, 8 + y, 214, 1, 1);
	gfx.PutPixel(5 + x, 8 + y, 255, 255, 255);
	gfx.PutPixel(6 + x, 8 + y, 255, 255, 255);
	gfx.PutPixel(7 + x, 8 + y, 216, 0, 0);
	gfx.PutPixel(8 + x, 8 + y, 219, 0, 0);
	gfx.PutPixel(9 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(26 + x, 8 + y, 220, 0, 0);
	gfx.PutPixel(27 + x, 8 + y, 221, 0, 0);
	gfx.PutPixel(28 + x, 8 + y, 218, 9, 8);
	gfx.PutPixel(0 + x, 9 + y, 215, 3, 3);
	gfx.PutPixel(1 + x, 9 + y, 223, 0, 0);
	gfx.PutPixel(2 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(3 + x, 9 + y, 214, 0, 0);
	gfx.PutPixel(4 + x, 9 + y, 214, 1, 1);
	gfx.PutPixel(5 + x, 9 + y, 255, 255, 255);
	gfx.PutPixel(6 + x, 9 + y, 255, 255, 255);
	gfx.PutPixel(7 + x, 9 + y, 216, 0, 0);
	gfx.PutPixel(8 + x, 9 + y, 219, 0, 0);
	gfx.PutPixel(9 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(26 + x, 9 + y, 220, 0, 0);
	gfx.PutPixel(27 + x, 9 + y, 221, 0, 0);
	gfx.PutPixel(28 + x, 9 + y, 218, 9, 8);
	gfx.PutPixel(0 + x, 10 + y, 215, 3, 3);
	gfx.PutPixel(1 + x, 10 + y, 223, 0, 0);
	gfx.PutPixel(2 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(3 + x, 10 + y, 214, 0, 0);
	gfx.PutPixel(4 + x, 10 + y, 214, 0, 0);
	gfx.PutPixel(5 + x, 10 + y, 255, 255, 255);
	gfx.PutPixel(6 + x, 10 + y, 255, 255, 255);
	gfx.PutPixel(7 + x, 10 + y, 216, 0, 0);
	gfx.PutPixel(8 + x, 10 + y, 219, 0, 0);
	gfx.PutPixel(9 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(26 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(27 + x, 10 + y, 221, 0, 0);
	gfx.PutPixel(28 + x, 10 + y, 220, 0, 0);
	gfx.PutPixel(1 + x, 11 + y, 228, 0, 0);
	gfx.PutPixel(2 + x, 11 + y, 222, 0, 0);
	gfx.PutPixel(3 + x, 11 + y, 213, 0, 0);
	gfx.PutPixel(4 + x, 11 + y, 214, 0, 0);
	gfx.PutPixel(5 + x, 11 + y, 255, 255, 255);
	gfx.PutPixel(6 + x, 11 + y, 255, 255, 255);
	gfx.PutPixel(7 + x, 11 + y, 215, 0, 0);
	gfx.PutPixel(8 + x, 11 + y, 219, 0, 0);
	gfx.PutPixel(9 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 11 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 11 + y, 219, 0, 0);
	gfx.PutPixel(26 + x, 11 + y, 221, 0, 0);
	gfx.PutPixel(27 + x, 11 + y, 228, 0, 0);
	gfx.PutPixel(1 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(2 + x, 12 + y, 218, 2, 2);
	gfx.PutPixel(3 + x, 12 + y, 221, 0, 0);
	gfx.PutPixel(4 + x, 12 + y, 214, 0, 0);
	gfx.PutPixel(5 + x, 12 + y, 255, 255, 255);
	gfx.PutPixel(6 + x, 12 + y, 255, 254, 254);
	gfx.PutPixel(7 + x, 12 + y, 218, 0, 0);
	gfx.PutPixel(8 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(9 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(24 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(25 + x, 12 + y, 223, 0, 0);
	gfx.PutPixel(26 + x, 12 + y, 216, 2, 2);
	gfx.PutPixel(27 + x, 12 + y, 220, 0, 0);
	gfx.PutPixel(2 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(3 + x, 13 + y, 228, 0, 0);
	gfx.PutPixel(4 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(5 + x, 13 + y, 213, 0, 0);
	gfx.PutPixel(6 + x, 13 + y, 215, 0, 0);
	gfx.PutPixel(7 + x, 13 + y, 221, 0, 0);
	gfx.PutPixel(8 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(9 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 13 + y, 218, 0, 0);
	gfx.PutPixel(24 + x, 13 + y, 225, 0, 0);
	gfx.PutPixel(25 + x, 13 + y, 231, 0, 0);
	gfx.PutPixel(26 + x, 13 + y, 220, 0, 0);
	gfx.PutPixel(3 + x, 14 + y, 205, 8, 8);
	gfx.PutPixel(4 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(5 + x, 14 + y, 221, 0, 0);
	gfx.PutPixel(6 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(7 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(8 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(9 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 14 + y, 224, 0, 0);
	gfx.PutPixel(24 + x, 14 + y, 214, 3, 3);
	gfx.PutPixel(25 + x, 14 + y, 219, 1, 1);
	gfx.PutPixel(26 + x, 14 + y, 220, 0, 0);
	gfx.PutPixel(4 + x, 15 + y, 219, 0, 0);
	gfx.PutPixel(5 + x, 15 + y, 221, 0, 0);
	gfx.PutPixel(6 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(7 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(8 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(9 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 15 + y, 223, 0, 0);
	gfx.PutPixel(23 + x, 15 + y, 232, 0, 0);
	gfx.PutPixel(24 + x, 15 + y, 219, 1, 1);
	gfx.PutPixel(25 + x, 15 + y, 220, 0, 0);
	gfx.PutPixel(5 + x, 16 + y, 221, 0, 0);
	gfx.PutPixel(6 + x, 16 + y, 218, 0, 0);
	gfx.PutPixel(7 + x, 16 + y, 221, 0, 1);
	gfx.PutPixel(8 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(9 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 16 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 16 + y, 221, 0, 0);
	gfx.PutPixel(22 + x, 16 + y, 218, 1, 1);
	gfx.PutPixel(23 + x, 16 + y, 221, 1, 1);
	gfx.PutPixel(24 + x, 16 + y, 219, 0, 0);
	gfx.PutPixel(6 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(7 + x, 17 + y, 223, 1, 1);
	gfx.PutPixel(8 + x, 17 + y, 222, 0, 0);
	gfx.PutPixel(9 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 17 + y, 222, 0, 0);
	gfx.PutPixel(21 + x, 17 + y, 221, 0, 0);
	gfx.PutPixel(22 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(23 + x, 17 + y, 220, 0, 0);
	gfx.PutPixel(7 + x, 18 + y, 223, 0, 0);
	gfx.PutPixel(8 + x, 18 + y, 221, 0, 0);
	gfx.PutPixel(9 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(19 + x, 18 + y, 221, 0, 0);
	gfx.PutPixel(20 + x, 18 + y, 221, 0, 0);
	gfx.PutPixel(21 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(22 + x, 18 + y, 220, 0, 0);
	gfx.PutPixel(8 + x, 19 + y, 219, 1, 1);
	gfx.PutPixel(9 + x, 19 + y, 220, 9, 9);
	gfx.PutPixel(10 + x, 19 + y, 222, 0, 0);
	gfx.PutPixel(11 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(17 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 19 + y, 223, 0, 0);
	gfx.PutPixel(19 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(21 + x, 19 + y, 220, 0, 0);
	gfx.PutPixel(9 + x, 20 + y, 219, 0, 0);
	gfx.PutPixel(10 + x, 20 + y, 223, 0, 0);
	gfx.PutPixel(11 + x, 20 + y, 221, 0, 0);
	gfx.PutPixel(12 + x, 20 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 20 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 20 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 20 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 20 + y, 219, 0, 0);
	gfx.PutPixel(17 + x, 20 + y, 221, 0, 0);
	gfx.PutPixel(18 + x, 20 + y, 221, 0, 0);
	gfx.PutPixel(19 + x, 20 + y, 220, 0, 0);
	gfx.PutPixel(20 + x, 20 + y, 220, 0, 0);
	gfx.PutPixel(10 + x, 21 + y, 220, 5, 5);
	gfx.PutPixel(11 + x, 21 + y, 220, 3, 3);
	gfx.PutPixel(12 + x, 21 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 21 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 21 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 21 + y, 220, 0, 0);
	gfx.PutPixel(16 + x, 21 + y, 221, 0, 0);
	gfx.PutPixel(17 + x, 21 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 21 + y, 220, 1, 1);
	gfx.PutPixel(19 + x, 21 + y, 220, 0, 0);
	gfx.PutPixel(11 + x, 22 + y, 219, 0, 0);
	gfx.PutPixel(12 + x, 22 + y, 222, 0, 0);
	gfx.PutPixel(13 + x, 22 + y, 222, 0, 0);
	gfx.PutPixel(14 + x, 22 + y, 219, 0, 0);
	gfx.PutPixel(15 + x, 22 + y, 222, 0, 0);
	gfx.PutPixel(16 + x, 22 + y, 221, 0, 0);
	gfx.PutPixel(17 + x, 22 + y, 220, 0, 0);
	gfx.PutPixel(18 + x, 22 + y, 220, 0, 0);
	gfx.PutPixel(12 + x, 23 + y, 220, 1, 1);
	gfx.PutPixel(13 + x, 23 + y, 219, 4, 5);
	gfx.PutPixel(14 + x, 23 + y, 221, 0, 0);
	gfx.PutPixel(15 + x, 23 + y, 220, 2, 2);
	gfx.PutPixel(16 + x, 23 + y, 220, 1, 1);
	gfx.PutPixel(17 + x, 23 + y, 220, 0, 0);
	gfx.PutPixel(13 + x, 24 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 24 + y, 224, 0, 0);
	gfx.PutPixel(15 + x, 24 + y, 220, 1, 1);
	gfx.PutPixel(16 + x, 24 + y, 220, 0, 0);
	gfx.PutPixel(14 + x, 25 + y, 220, 0, 0);
	gfx.PutPixel(15 + x, 25 + y, 217, 9, 9);

}

void Lives::DrawGrey(int x, int y, Graphics & gfx)
{
	gfx.PutPixel(3 + x, 0 + y, 95, 95, 95);
	gfx.PutPixel(4 + x, 0 + y, 88, 88, 88);
	gfx.PutPixel(5 + x, 0 + y, 90, 90, 90);
	gfx.PutPixel(6 + x, 0 + y, 90, 90, 90);
	gfx.PutPixel(7 + x, 0 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 0 + y, 97, 97, 97);
	gfx.PutPixel(14 + x, 0 + y, 87, 87, 87);
	gfx.PutPixel(15 + x, 0 + y, 90, 90, 90);
	gfx.PutPixel(16 + x, 0 + y, 90, 90, 90);
	gfx.PutPixel(17 + x, 0 + y, 90, 90, 90);
	gfx.PutPixel(18 + x, 0 + y, 97, 97, 97);
	gfx.PutPixel(1 + x, 1 + y, 78, 78, 78);
	gfx.PutPixel(2 + x, 1 + y, 89, 89, 89);
	gfx.PutPixel(3 + x, 1 + y, 94, 94, 94);
	gfx.PutPixel(4 + x, 1 + y, 89, 89, 89);
	gfx.PutPixel(5 + x, 1 + y, 70, 70, 70);
	gfx.PutPixel(6 + x, 1 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 1 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 1 + y, 93, 93, 93);
	gfx.PutPixel(9 + x, 1 + y, 93, 93, 93);
	gfx.PutPixel(13 + x, 1 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 1 + y, 87, 87, 87);
	gfx.PutPixel(15 + x, 1 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 1 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 1 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 1 + y, 92, 92, 92);
	gfx.PutPixel(19 + x, 1 + y, 92, 92, 92);
	gfx.PutPixel(1 + x, 2 + y, 89, 89, 89);
	gfx.PutPixel(2 + x, 2 + y, 90, 90, 90);
	gfx.PutPixel(3 + x, 2 + y, 86, 86, 86);
	gfx.PutPixel(4 + x, 2 + y, 84, 84, 84);
	gfx.PutPixel(5 + x, 2 + y, 186, 186, 186);
	gfx.PutPixel(6 + x, 2 + y, 195, 195, 195);
	gfx.PutPixel(7 + x, 2 + y, 83, 83, 83);
	gfx.PutPixel(8 + x, 2 + y, 87, 87, 87);
	gfx.PutPixel(9 + x, 2 + y, 90, 90, 90);
	gfx.PutPixel(10 + x, 2 + y, 94, 94, 94);
	gfx.PutPixel(12 + x, 2 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 2 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 2 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 2 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 2 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 2 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 2 + y, 88, 88, 88);
	gfx.PutPixel(19 + x, 2 + y, 89, 89, 89);
	gfx.PutPixel(20 + x, 2 + y, 87, 87, 87);
	gfx.PutPixel(0 + x, 3 + y, 91, 91, 91);
	gfx.PutPixel(1 + x, 3 + y, 91, 91, 91);
	gfx.PutPixel(2 + x, 3 + y, 90, 90, 90);
	gfx.PutPixel(3 + x, 3 + y, 75, 75, 75);
	gfx.PutPixel(4 + x, 3 + y, 59, 59, 59);
	gfx.PutPixel(5 + x, 3 + y, 255, 255, 255);
	gfx.PutPixel(6 + x, 3 + y, 255, 255, 255);
	gfx.PutPixel(7 + x, 3 + y, 81, 81, 81);
	gfx.PutPixel(8 + x, 3 + y, 86, 86, 86);
	gfx.PutPixel(9 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 3 + y, 90, 90, 90);
	gfx.PutPixel(11 + x, 3 + y, 84, 84, 84);
	gfx.PutPixel(12 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(19 + x, 3 + y, 88, 88, 88);
	gfx.PutPixel(20 + x, 3 + y, 89, 89, 89);
	gfx.PutPixel(21 + x, 3 + y, 91, 91, 91);
	gfx.PutPixel(0 + x, 4 + y, 86, 86, 86);
	gfx.PutPixel(1 + x, 4 + y, 89, 89, 89);
	gfx.PutPixel(2 + x, 4 + y, 81, 81, 81);
	gfx.PutPixel(3 + x, 4 + y, 97, 97, 97);
	gfx.PutPixel(4 + x, 4 + y, 147, 147, 147);
	gfx.PutPixel(5 + x, 4 + y, 194, 194, 194);
	gfx.PutPixel(6 + x, 4 + y, 177, 177, 177);
	gfx.PutPixel(7 + x, 4 + y, 84, 84, 84);
	gfx.PutPixel(8 + x, 4 + y, 87, 87, 87);
	gfx.PutPixel(9 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(19 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(20 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(21 + x, 4 + y, 88, 88, 88);
	gfx.PutPixel(0 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(1 + x, 5 + y, 89, 89, 89);
	gfx.PutPixel(2 + x, 5 + y, 69, 69, 69);
	gfx.PutPixel(3 + x, 5 + y, 127, 127, 127);
	gfx.PutPixel(4 + x, 5 + y, 255, 255, 255);
	gfx.PutPixel(5 + x, 5 + y, 123, 123, 123);
	gfx.PutPixel(6 + x, 5 + y, 43, 43, 43);
	gfx.PutPixel(7 + x, 5 + y, 89, 89, 89);
	gfx.PutPixel(8 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(19 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(20 + x, 5 + y, 88, 88, 88);
	gfx.PutPixel(21 + x, 5 + y, 90, 90, 90);
	gfx.PutPixel(0 + x, 6 + y, 87, 87, 87);
	gfx.PutPixel(1 + x, 6 + y, 89, 89, 89);
	gfx.PutPixel(2 + x, 6 + y, 71, 71, 71);
	gfx.PutPixel(3 + x, 6 + y, 121, 121, 121);
	gfx.PutPixel(4 + x, 6 + y, 255, 255, 255);
	gfx.PutPixel(5 + x, 6 + y, 137, 137, 137);
	gfx.PutPixel(6 + x, 6 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(19 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(20 + x, 6 + y, 88, 88, 88);
	gfx.PutPixel(21 + x, 6 + y, 92, 92, 92);
	gfx.PutPixel(0 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(1 + x, 7 + y, 89, 89, 89);
	gfx.PutPixel(2 + x, 7 + y, 71, 71, 71);
	gfx.PutPixel(3 + x, 7 + y, 121, 121, 121);
	gfx.PutPixel(4 + x, 7 + y, 255, 255, 255);
	gfx.PutPixel(5 + x, 7 + y, 137, 137, 137);
	gfx.PutPixel(6 + x, 7 + y, 68, 68, 68);
	gfx.PutPixel(7 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(19 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(20 + x, 7 + y, 88, 88, 88);
	gfx.PutPixel(21 + x, 7 + y, 90, 90, 90);
	gfx.PutPixel(0 + x, 8 + y, 89, 89, 89);
	gfx.PutPixel(1 + x, 8 + y, 90, 90, 90);
	gfx.PutPixel(2 + x, 8 + y, 70, 70, 70);
	gfx.PutPixel(3 + x, 8 + y, 122, 122, 122);
	gfx.PutPixel(4 + x, 8 + y, 255, 255, 255);
	gfx.PutPixel(5 + x, 8 + y, 139, 139, 139);
	gfx.PutPixel(6 + x, 8 + y, 67, 67, 67);
	gfx.PutPixel(7 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(19 + x, 8 + y, 88, 88, 88);
	gfx.PutPixel(20 + x, 8 + y, 89, 89, 89);
	gfx.PutPixel(21 + x, 8 + y, 87, 87, 87);
	gfx.PutPixel(0 + x, 9 + y, 85, 85, 85);
	gfx.PutPixel(1 + x, 9 + y, 89, 89, 89);
	gfx.PutPixel(2 + x, 9 + y, 73, 73, 73);
	gfx.PutPixel(3 + x, 9 + y, 120, 120, 120);
	gfx.PutPixel(4 + x, 9 + y, 245, 245, 245);
	gfx.PutPixel(5 + x, 9 + y, 134, 134, 134);
	gfx.PutPixel(6 + x, 9 + y, 69, 69, 69);
	gfx.PutPixel(7 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(18 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(19 + x, 9 + y, 89, 89, 89);
	gfx.PutPixel(20 + x, 9 + y, 88, 88, 88);
	gfx.PutPixel(21 + x, 9 + y, 85, 85, 85);
	gfx.PutPixel(0 + x, 10 + y, 85, 85, 85);
	gfx.PutPixel(1 + x, 10 + y, 87, 87, 87);
	gfx.PutPixel(2 + x, 10 + y, 89, 89, 89);
	gfx.PutPixel(3 + x, 10 + y, 90, 90, 90);
	gfx.PutPixel(4 + x, 10 + y, 95, 95, 95);
	gfx.PutPixel(5 + x, 10 + y, 91, 91, 91);
	gfx.PutPixel(6 + x, 10 + y, 87, 87, 87);
	gfx.PutPixel(7 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 10 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 10 + y, 87, 87, 87);
	gfx.PutPixel(18 + x, 10 + y, 89, 89, 89);
	gfx.PutPixel(19 + x, 10 + y, 90, 90, 90);
	gfx.PutPixel(20 + x, 10 + y, 87, 87, 87);
	gfx.PutPixel(21 + x, 10 + y, 85, 85, 85);
	gfx.PutPixel(2 + x, 11 + y, 85, 85, 85);
	gfx.PutPixel(3 + x, 11 + y, 87, 87, 87);
	gfx.PutPixel(4 + x, 11 + y, 83, 83, 83);
	gfx.PutPixel(5 + x, 11 + y, 86, 86, 86);
	gfx.PutPixel(6 + x, 11 + y, 89, 89, 89);
	gfx.PutPixel(7 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 11 + y, 91, 91, 91);
	gfx.PutPixel(18 + x, 11 + y, 89, 89, 89);
	gfx.PutPixel(19 + x, 11 + y, 88, 88, 88);
	gfx.PutPixel(20 + x, 11 + y, 86, 86, 86);
	gfx.PutPixel(3 + x, 12 + y, 87, 87, 87);
	gfx.PutPixel(4 + x, 12 + y, 87, 87, 87);
	gfx.PutPixel(5 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(6 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(7 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(8 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 12 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 12 + y, 90, 90, 90);
	gfx.PutPixel(18 + x, 12 + y, 89, 89, 89);
	gfx.PutPixel(19 + x, 12 + y, 90, 90, 90);
	gfx.PutPixel(4 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(5 + x, 13 + y, 89, 89, 89);
	gfx.PutPixel(6 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(7 + x, 13 + y, 87, 87, 87);
	gfx.PutPixel(8 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(15 + x, 13 + y, 89, 89, 89);
	gfx.PutPixel(16 + x, 13 + y, 88, 88, 88);
	gfx.PutPixel(17 + x, 13 + y, 87, 87, 87);
	gfx.PutPixel(18 + x, 13 + y, 86, 86, 86);
	gfx.PutPixel(5 + x, 14 + y, 88, 88, 88);
	gfx.PutPixel(6 + x, 14 + y, 89, 89, 89);
	gfx.PutPixel(7 + x, 14 + y, 90, 90, 90);
	gfx.PutPixel(8 + x, 14 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 14 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 14 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 14 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 14 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 14 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 14 + y, 89, 89, 89);
	gfx.PutPixel(15 + x, 14 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 14 + y, 87, 87, 87);
	gfx.PutPixel(17 + x, 14 + y, 89, 89, 89);
	gfx.PutPixel(6 + x, 15 + y, 88, 88, 88);
	gfx.PutPixel(7 + x, 15 + y, 90, 90, 90);
	gfx.PutPixel(8 + x, 15 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 15 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 15 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 15 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 15 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 15 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 15 + y, 89, 89, 89);
	gfx.PutPixel(15 + x, 15 + y, 88, 88, 88);
	gfx.PutPixel(16 + x, 15 + y, 87, 87, 87);
	gfx.PutPixel(7 + x, 16 + y, 87, 87, 87);
	gfx.PutPixel(8 + x, 16 + y, 90, 90, 90);
	gfx.PutPixel(9 + x, 16 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 16 + y, 88, 88, 88);
	gfx.PutPixel(11 + x, 16 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 16 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 16 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 16 + y, 89, 89, 89);
	gfx.PutPixel(15 + x, 16 + y, 86, 86, 86);
	gfx.PutPixel(8 + x, 17 + y, 88, 88, 88);
	gfx.PutPixel(9 + x, 17 + y, 89, 89, 89);
	gfx.PutPixel(10 + x, 17 + y, 89, 89, 89);
	gfx.PutPixel(11 + x, 17 + y, 88, 88, 88);
	gfx.PutPixel(12 + x, 17 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 17 + y, 88, 88, 88);
	gfx.PutPixel(14 + x, 17 + y, 87, 87, 87);
	gfx.PutPixel(9 + x, 18 + y, 88, 88, 88);
	gfx.PutPixel(10 + x, 18 + y, 89, 89, 89);
	gfx.PutPixel(11 + x, 18 + y, 89, 89, 89);
	gfx.PutPixel(12 + x, 18 + y, 88, 88, 88);
	gfx.PutPixel(13 + x, 18 + y, 86, 86, 86);
	gfx.PutPixel(10 + x, 19 + y, 86, 86, 86);
	gfx.PutPixel(11 + x, 19 + y, 91, 91, 91);
	gfx.PutPixel(12 + x, 19 + y, 89, 89, 89);
}