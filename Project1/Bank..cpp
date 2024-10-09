#include <iostream>
#include "Bank.h"

Bank::Bank(std::string bankName)
	:
	m_bankName{ bankName }
{}

void Bank::AddAccount()
{
	std::string name{};
	std::cout << "account name(" << Bank::word_for_generated_name << " for a generated name): ";
	std::cin >> name;


	Account::balance_type number{};
	do {
		std::cin.clear();
		/*
			discard and ignore as: clear the buffer
			discard characters from the buffer until an new line is found
			if the second argument isn't provied, it ignores everything for ever!
		*/
		std::cin.ignore(INT_MAX, '\n');
		std::cout << "account balance: ";
		std::cin >> number;
	} while (std::cin.fail());

	m_accounts.push_back
	(name == Bank::word_for_generated_name ? Account{ number, "user"} : Account{number, name});
}

void Bank::Print() {
	/*for (size_t i{}; i < m_accounts.size(); ++i) {
		std::cout << m_accounts[i];
	}*/
	for (const Account& acc : m_accounts) {
		std::cout << acc;
	}
}