#include "SignUp.h"
#include <iostream>
#include <fstream>

using namespace std;

void createFile() {
	ofstream file("auth.txt");
	file.close();
}

int fileInput(string login, string password) {
	ofstream file("auth.txt", ios_base::app);
	if (!file.is_open())
		return 0;
	string str = login + password;
	file <<endl<< login<< " " << password;
	file.close();
	return 1;
}

