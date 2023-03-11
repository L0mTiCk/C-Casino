#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int signIn(string login, string password);
bool isFileCreated();
void fillVector(string str, vector<string>* logins, vector<string>* passwords);