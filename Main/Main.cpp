// Main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include <Windows.h>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	ifstream fin("stat.txt");
	if (!fin.is_open())
	{
		ofstream fout("stat.txt");
		fout.close();
		cout << "Restart programm!";
	}
	else {
		vector <string> name;
		vector <int> score;
		vector <string> password;
		while (!fin.eof())
		{
			string name, password;
			int score = 0;
			fin >> name >> password >> score;
			cout << name << ' ' << password << ' ' << score << endl;
		}
	}
}

