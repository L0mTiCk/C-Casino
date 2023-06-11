#include "RandomGenerator.h"



using namespace std;

double randomSin() {
	double randomNum;
	srand(time(NULL));
	switch (rand() % 1) {
	case 1: 
		randomNum = round(abs(sin((rand() % 359 + 1) * M_PI / 180)) * 360);
		break;
	case 0:
		randomNum = round(abs(cos((rand() % 359 + 1) * M_PI / 180)) * 360);
		break;
	}
	//cout << randomNum << endl;
	return randomNum;
}

int checkRouletteAngle(double angle) {
	int temp;
	if (int(angle) % 10 > 4)
		temp = (int(angle) / 10) * 10 + 10;
	else
		temp = (int(angle) / 10) * 10;
	switch (temp)
	{
	case 0: return 0;
	case 10: return 26;
	case 20: return 3;
	case 30: return 35;
	case 40: return 12;
	case 50: return 28;
	case 60: return 7;
	case 70: return 29;
	case 80: return 18;
	case 90: return 22;
	case 100: return 9;
	case 110: return 31;
	case 120: return 14;
	case 130: return 20;
	case 140: return 1;
	case 150: return 33;
	case 160: return 16;
	case 170: return 24;
	case 180: return 5;
	case 190: return 10;
	case 200: return 23;
	case 210: return 8;
	case 220: return 30;
	case 230: return 11;
	case 240: return 36;
	case 250: return 13;
	case 260: return 27;
	case 270: return 6;
	case 280: return 34;
	case 290: return 17;
	case 300: return 25;
	case 310: return 2;
	case 320: return 21;
	case 330: return 4;
	case 340: return 19;
	case 350: return 15;
	case 360: return 32;
	default:
		break;
	}
	return temp;
}