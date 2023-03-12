#include "SignIn.h"
#include "SignUp.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <sstream>

using namespace std;

int signIn(string login, string password, int mode) {
	if (!isFileCreated()) {
		createFile();
		return 0;
	}
	ifstream file("auth.txt");
	vector<string> logins{};
	vector<string> passwords{};
	while (!file.eof()) {
		string str = "";
		getline(file, str);
		fillVector(str, &logins, &passwords);

	}
	file.close();
	if (mode) {
		int checkLoginIndex = checkLogin(login, &logins);
		if (checkLoginIndex != 0)
			if (checkPassword(password, &passwords, checkLoginIndex))
				return 1;
			else
			{
				return 0;
			}
		else
			return 0;
	} 
	else {
		if (checkLogin(login, &logins) == 0)
			return 0;
		else
			return 1;
	}
}

bool isFileCreated() {
	ifstream file("auth.txt");
	if (!file.is_open())
		return false;
	file.close();
	return true;
}

//filling vectors with logins and passwords
void fillVector(string str, vector<string>* logins, vector<string>* passwords) {
	int spaceIndex = str.find(" ");
	string word;
	for (int i = 0; i < str.size(); i++) {
		if (i == spaceIndex) {
			logins->push_back(word);
			cout << word;
			word = "";
		}
		else {
			word += str[i];
		}
	}
	cout << " " << word << endl;
	passwords->push_back(word);

}

int checkLogin(string login, vector<string>* logins) {
	for (int i = 0; i < logins->size();i++) {
		if (login == logins->at(i)) {
			return i + 1;
		}
	}
	return 0;
}

int checkPassword(string password, vector<string>* passwords, int index) {
	if (password == passwords->at(index - 1))
		return 1;
	return 0;
}