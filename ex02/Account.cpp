/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:33:19 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/12 13:04:09 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

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


void Account::displayAccountsInfos(void)
{
	
}

Account::Account(int initial_deposit)
{
	_nbDeposits = initial_deposit;
}
Account::~Account(void)
{

}

void Account::makeDeposit(int deposit)
{
	_nbDeposits += deposit;
}
bool Account::makeWithdrawal(int withdrawal)
{
	
}
int Account::checkAmount(void) const
{
	
}
void Account::displayStatus(void) const
{
	
}