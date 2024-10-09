#include <iostream>
#include<string>
#include "Account.h"

static int generateId() {
	static int nextId{};
	return ++nextId;
}

Account::Account(balance_type balance, const std::string& accountName = "user")
	:
	m_id{ generateId() },
	m_balance{ balance },
	m_accountName{ accountName + std::to_string(m_id)}
{}

std::ostream& operator<<(std::ostream& os, const Account& account) {
	return os << "Account's name: " << account.m_accountName << "\nAccount's balance: " << account.m_balance << "\nAccount's Id: " << account.m_id;
}