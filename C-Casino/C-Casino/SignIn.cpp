#include "SignIn.h"
#include "SignUp.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <sstream>

using namespace std;

int signIn(string login, string password) {
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
	return 1;
		
}

bool isFileCreated() {
	ifstream file("auth.txt");
	if (!file.is_open())
		return false;
	file.close();
	return true;
}

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