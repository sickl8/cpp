#include <iostream>
#include <iomanip>
#include <time.h>
#include "Account.hpp"

int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;
int Account::_nbAccounts;

void	printNum(char fill, int width, int num) {
	std::cout << std::setfill(fill) << std::setw(width) << num;
}

void	Account::_displayTimestamp() {
	time_t now;
	struct tm tm;

	now = time(NULL);
	tm = *localtime(&now);
	tm.tm_year += 1900;
	std::cout << '[';
	printNum('0', 4, tm.tm_year);
	printNum('0', 2, tm.tm_mon);
	printNum('0', 2, tm.tm_mday);
	std::cout << '_';
	printNum('0', 2, tm.tm_hour);
	printNum('0', 2, tm.tm_min);
	printNum('0', 2, tm.tm_sec);
	std::cout << "] ";
}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

int Account::getTotalAmount() {
	return (Account::_totalAmount);
}

int	Account::checkAmount() const {
	return (this->_amount);
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount()
	<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout
	<< ";amount:" << this->checkAmount()
	<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	bool	ret;

	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";p_amount:" << this->checkAmount();
	std::cout
	<< ";withdrawal:";

	if (this->_amount < withdrawal) {
		ret = false;
		std::cout << "refused" << std::endl;
	}
	else {
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		ret = true;
		std::cout << withdrawal;
		std::cout
		<< ";amount:" << this->checkAmount()
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (ret);
}

Account::Account(int init) {
	this->_accountIndex = getNbAccounts();
	this->_totalAmount += init;
	this->_amount = init;
	this->_nbAccounts++;

	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";created" << std::endl;
}

Account::~Account() {
	this->_totalAmount -= this->_amount;
	this->_nbAccounts--;

	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";closed" << std::endl;
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout
	<< "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->checkAmount()
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}