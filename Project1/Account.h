#ifndef ACCOUNT
#define ACCOUNT

#include <string>
#include <string_view>

class Account
{
	using balance_type = double;

private:
	int m_id{};
	balance_type m_balance{};
	std::string m_accountName{};
public:
	Account(balance_type balance, const std::string& accountName);

	friend class Bank;
	friend std::ostream& operator<<(std::ostream & os, const Account& account);
};

std::ostream& operator<<(std::ostream& os, const Account& account);

#endif