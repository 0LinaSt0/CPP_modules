/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:25:07 by msalena           #+#    #+#             */
/*   Updated: 2022/01/29 20:06:50 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//consts & distrs
Account::Account( int initial_deposit ){
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] " << "index:" << Account::getNbAccounts() << ";"
		<< "amount:" << initial_deposit << ";" << "created" << std::endl;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void ){
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] " << "index:" << (Account::getNbAccounts() - 1) << ";"
		<< "amount:" << this->_amount << ";" << "closed" << std::endl;
	Account::_nbAccounts--;
}

//static methods
int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	std::cout << "\033[31m";
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] " << "accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";" << "deposits:"
		<< Account::getNbDeposits() << ";" << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	std::cout <<  "\033[0m";
}


//methods
void	Account::makeDeposit( int deposit ){
	std::cout << "\033[32m";
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] " << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";" << "deposits:" << deposit
		<< ";";
	this->_amount += deposit;
	this->_nbDeposits += 1;
	std::cout << "amount:" << this->_amount << ";" << "nb_deposits:"
		<< this->_nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "\033[0m";
}

bool	Account::makeWithdrawal( int withdrawal ){
	std::cout << "\033[33m";
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] " << "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";";
	if ((this->_amount - withdrawal) < 0){
		std::cout << "withdrawals:" << "refused" << std::endl;
		std::cout << "\033[0m";
		return false;
	} else {
		std::cout << "withdrawals:" << withdrawal << ";";
		this->_amount -=withdrawal;
		this->_nbWithdrawals += 1;
		std::cout << "amount:" << this->_amount << ";" << "nb_withdrawals:"
		<< this->_nbWithdrawals << std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
	}
	std::cout << "\033[0m";
	return true;
}

int	Account::checkAmount( void ) const{
	return _amount;
}

void	Account::displayStatus( void ) const{
	std::cout << "\033[36m";
	std::cout << "[";
	Account::_displayTimestamp();
	std::cout << "] " << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";" << "deposits:" << this->_nbDeposits
		<< ";" << "withdrawals:" << this->_nbWithdrawals << std::endl;
	std::cout <<"\033[0m";
}


//Time

void	Account::_displayTimestamp( void ){
	std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

	std::string s(30, '\0');
    std::strftime(&s[0], s.size(), "%Y%m%d_%H%M%S", std::localtime(&now));

	    	std::cout << s;
}





