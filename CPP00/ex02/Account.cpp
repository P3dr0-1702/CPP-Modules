#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created\n";
	
}

void Account::_displayTimestamp(void)
{
	std::time_t now;
	std::tm *t;

	now = std::time(NULL);
	t = std::localtime(&now);
	std::cout << "[" << (t->tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << (t->tm_mon + 1)
		<< std::setw(2) << std::setfill('0') << t->tm_mday
		<< "_"
		<< std::setw(2) << std::setfill('0') << t->tm_hour
		<< std::setw(2) << std::setfill('0') << t->tm_min
		<< std::setw(2) << std::setfill('0') << t->tm_sec
		<< "] ";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
		<< "total:" << _totalAmount << ";"
		<< "deposits:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals << "\n";

}


void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals
		<< "\n";
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";"
		<< "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";"
		<< "nb_deposits:" << this->_nbDeposits
		<< "\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";";
	if(withdrawal > this->_amount)
	{
		std::cout << "withdrawl:refused\n";
		return (false);
	}
	std::cout << "withdrawl:" << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << this->_amount << ";"
		<< "nb_withdrawls:" << this->_nbWithdrawals
		<< "\n";
	return true;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed\n";
}
