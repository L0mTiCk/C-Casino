#include "RouletteBet.h"

#include <vector>
#include <iostream>

std::vector<int> betFields;
std::vector<int> betValues;
public struct Booleans {
	bool red = false;
	bool black = false;
	bool even = false;
	bool odd = false;
	bool firstHalf = false;
	bool secondHalf = false;
	bool first12 = false;
	bool second12 = false;
	bool third12 = false;
	bool firstLine = false;
	bool secondLine = false;
	bool thirdLine = false;
	bool zero;

	void setToFalse() {
		red = false;
		black = false;
		even = false;
		odd = false;
		firstHalf = false;
		secondHalf = false;
		first12 = false;
		second12 = false;
		third12 = false;
		firstLine = false;
		secondLine = false;
		thirdLine = false;
		zero = false;
	}
};

Booleans user;
Booleans win;
/*
	числа для обозначения нецифровых полей для ставок :
	*	'100' — 0
	*	"102" — четные
	*	"103" — нечетные
	*	"110" - первая половина
	*	"120" - вторая половина
	*	"112" - от 1 до 12
	*	"124" - от 13 до 24
	*	"136" - от 25 до 36
	*	"201" - первая линия
	*	"202" - вторая линия
	*	"203" - третья линия
	*	"300" - красные
		"400" - черные
*/ 
int winIndex;

void addToVectors(int betField, int betValue) {
	betFields.push_back(betField);
	betValues.push_back(betValue);
}

void clearVector() {
	betFields = {};
	betValues = {};
}

void printVector() {
	//std::cout << "Total bets = " << betFields.size();
	//std::cout << "\nBet fields: ";
	//for (int i = 0; i < betFields.size(); i++)
		//std::cout << betFields.at(i) << " ";
}

int checkWin(int winNum) {
	int winMultipl = 1;
	for (int i = 0; i < betFields.size(); i++) {
		if (betFields.at(i) == winNum) {
			winIndex = i;
			winMultipl = 35;
		}
	}
	setWinBoolean(winNum);
	winMultipl += totalWinSum();

	return betValues.at(winIndex) * (winMultipl - 1);
}

/*
	коды для bool переменных в структуре:
		1 - красные
		2 - черные
		3 - четные
		4 - нечетные
		5 - первая половина
		6 - вторая половина
		7 - первые 12
		8 - вторые 12
		9 - третьи 12
		10 - первая линия
		11 - вторая линия
		12 - третья линия
		13 - ноль
*/

void setBetBoolean(int num) {
	switch (num)
	{
	case 1:
		user.red = true;
		break;
	case 2:
		user.black = true;
		break;
	case 3:
		user.even = true;
		break;
	case 4:
		user.odd = true;
		break;
	case 5:
		user.firstHalf = true;
		break;
	case 6:
		user.secondHalf = true;
		break;
	case 7:
		user.first12 = true;
		break;
	case 8:
		user.second12 = true;
		break;
	case 9:
		user.third12 = true;
		break;
	case 10:
		user.firstLine = true;
		break;
	case 11:
		user.secondLine = true;
		break;
	case 12:
		user.thirdLine = true;
		break;
	case 13:
		user.zero = true;
		break;
	default:
		break;
	}
}

void setWinBoolean(int winNum) {
	int redArray[18] = { 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};
	//красный / черный
	for (int i = 0; i < 18; i++) {
		if (redArray[i] == winNum)
			win.red = true;
	}
	if (!win.red)
		win.black = true;
	//четные
	if (winNum % 2 == 0)
		win.even = true;
	else
		win.odd = true;

	//дюжина
	if (winNum < 13)
		win.first12 = true;
	else if (winNum > 12 && winNum < 25)
		win.second12 = true;
	else if (winNum > 24 && winNum < 37)
		win.third12 = true;

	//половина
	if (winNum < 19)
		win.firstHalf = true;
	else
		win.secondHalf = true;

	//ноль
	if (winNum == 0)
		win.zero = true;

	//линии
	if (winNum % 3 == 1)
		win.thirdLine = true;
	else if (winNum % 3 == 2)
		win.secondLine = true;
	else
		win.firstLine = true;
}

int totalWinSum() {
	int totalMultiplier = 0;
	if (win.red && user.red)
		totalMultiplier++;

	if (win.black && user.black)
		totalMultiplier++;

	if (win.even && user.even)
		totalMultiplier++;

	if (win.odd && user.odd)
		totalMultiplier++;

	if (win.first12 && user.first12)
		totalMultiplier++;

	if (win.second12 && user.second12)
		totalMultiplier++;

	if (win.third12 && user.third12)
		totalMultiplier++;

	if (win.firstHalf && user.firstHalf)
		totalMultiplier++;

	if (win.secondHalf && user.secondHalf)
		totalMultiplier++;
	
	if (win.firstLine && user.firstLine)
		totalMultiplier++;

	if (win.secondLine && user.secondLine)
		totalMultiplier++;

	if (win.thirdLine && user.thirdLine)
		totalMultiplier++;

	return totalMultiplier;
}

void setToFalse() {
	win.setToFalse();
	user.setToFalse();
	winIndex = 0;
}