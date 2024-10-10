#ifndef BANK
#define BANK

#include <vector>
#include <string_view>
#include "Account.h"

class Bank
{
	static constexpr std::string_view word_for_generated_name{ "default_name" };

private:
	const std::string m_bankName{};
	std::vector<Account> m_accounts{};
public:
	Bank(std::string bankName);

	void AddAccount();
	void Print() const;
};

#endif