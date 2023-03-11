#include "SignUp.h"
#include <iostream>
#include <fstream>

using namespace std;

void createFile() {
	ofstream file("auth.txt");
	file.close();
}
