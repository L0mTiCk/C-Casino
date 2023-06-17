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
	����� ��� ����������� ���������� ����� ��� ������ :
	*	'100' � 0
	*	"102" � ������
	*	"103" � ��������
	*	"110" - ������ ��������
	*	"120" - ������ ��������
	*	"112" - �� 1 �� 12
	*	"124" - �� 13 �� 24
	*	"136" - �� 25 �� 36
	*	"201" - ������ �����
	*	"202" - ������ �����
	*	"203" - ������ �����
	*	"300" - �������
		"400" - ������
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
	���� ��� bool ���������� � ���������:
		1 - �������
		2 - ������
		3 - ������
		4 - ��������
		5 - ������ ��������
		6 - ������ ��������
		7 - ������ 12
		8 - ������ 12
		9 - ������ 12
		10 - ������ �����
		11 - ������ �����
		12 - ������ �����
		13 - ����
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
	//������� / ������
	for (int i = 0; i < 18; i++) {
		if (redArray[i] == winNum)
			win.red = true;
	}
	if (!win.red)
		win.black = true;
	//������
	if (winNum % 2 == 0)
		win.even = true;
	else
		win.odd = true;

	//������
	if (winNum < 13)
		win.first12 = true;
	else if (winNum > 12 && winNum < 25)
		win.second12 = true;
	else if (winNum > 24 && winNum < 37)
		win.third12 = true;

	//��������
	if (winNum < 19)
		win.firstHalf = true;
	else
		win.secondHalf = true;

	//����
	if (winNum == 0)
		win.zero = true;

	//�����
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