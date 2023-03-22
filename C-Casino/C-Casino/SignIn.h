#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int signIn(string login, string password, int mode);
bool isFileCreated();
void fillVector(string str, vector<string>* logins, vector<string>* passwords);
int checkLogin(string login, vector<string>* logins);
int checkPassword(string password, vector<string>* passwords, int index);
int returnId();