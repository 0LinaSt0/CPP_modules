/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 17:25:07 by msalena           #+#    #+#             */
/*   Updated: 2022/01/27 21:12:01 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	std::cout << "[19920104_091532] " << "index:" << Account::getNbAccounts() << ";"
		<< "amount:" << initial_deposit << ";" << "created" << std::endl;
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

//not ready
Account::~Account( void ){
	std::cout << "[19920104_091532] " << "index:"
		<< "amount:" << std::endl;
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
	std::cout << "[19920104_091532] " << "accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";" << "deposits:"
		<< Account::getNbDeposits() << ";" << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


//methods
void	Account::makeDeposit( int deposit ){
	this->_nbDeposits = deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
	this->_nbWithdrawals = withdrawal;
	return true;
}

int	Account::checkAmount( void ) const{
	return _amount;
}

void	Account::displayStatus( void ) const{
	std::cout << "[19920104_091532] " << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";" << "deposits:" << Account::getNbDeposits()
		<< ";" << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}






