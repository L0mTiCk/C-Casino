#include "SignUp.h"
#include <iostream>
#include <fstream>

using namespace std;

void createFile() {
	ofstream file("auth.txt");
	file << "admin 123456";
	file.close();
	ofstream file1("balance.txt");
	file1 << "2500";
	file1.close();
}

int fileInput(string login, string password) {
	ofstream file("auth.txt", ios_base::app);
	if (!file.is_open())
		return 0;
	string str = login + password;
	file <<endl<< login<< " " << password;
	file.close();
	ofstream file1("balance.txt", ios_base::app);
	file1 << endl << "2500";
	return 1;
}

