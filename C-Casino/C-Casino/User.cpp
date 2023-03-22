#include "User.h"
#include <iostream>

class User {
private:
	int balance;
public:
	void setBalance(int setBal) {
		balance = setBal;
	}
	int getBalance() {
		return balance;
	}
};