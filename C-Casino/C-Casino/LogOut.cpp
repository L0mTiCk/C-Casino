#include "LogOut.h"

void saveBalance(int balance, int userId) {
	//TODO: посмотреть как я заполняю и перезаписать файлы но изменить баланс
	std::vector<int> balances{};
	fillBalanceVector(&balances);
	std::ofstream fout("balance.txt", std::ios::trunc);
	if(fout.is_open()) {
		for (int i = 0; i < balances.size(); i++) {
			if (i == userId) {
				if (i + 1 == balances.size())
					fout << balance;
				else
					fout << balance << std::endl;
			}
			else {
				if (i + 1 == balances.size())
					fout << balances.at(i);
				else
					fout << balances.at(i) << std::endl;
			}
		}
		fout.close();
	}
}