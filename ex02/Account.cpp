/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:33:19 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/21 15:07:45 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

void	_displayTimestamp( void )
{
    std::time_t now = std::time(NULL);
    std::tm* local = std::localtime(&now);

    std::cout << "["
              << (local->tm_year + 1900)
              << std::setw(2) << std::setfill('0') << (local->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << local->tm_mday
              << "_"
              << std::setw(2) << std::setfill('0') << local->tm_hour
              << std::setw(2) << std::setfill('0') << local->tm_min
              << std::setw(2) << std::setfill('0') << local->tm_sec
              << "]";
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << _totalAmount << ";deposits:"
		<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl; 
}

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;

	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void)
{

}

void Account::makeDeposit(int deposit)
{
	int p_amount = _amount;
	int 
	_nbDeposits = deposit;
	_totalNbDeposits += deposit;
	_displayTimestamp();

	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";disposit:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;

}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_nbWithdrawals)
	_nbWithdrawals += withdrawal;
	_totalNbWithdrawals += withdrawal;	
}
int Account::checkAmount(void) const
{
	
}
void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";disposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl
}