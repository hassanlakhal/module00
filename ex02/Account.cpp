/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 23:17:16 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/19 03:44:02 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Account.hpp"
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	// int a;
	// a = initial_deposit;
}

void Account::makeDeposit(int deposit)
{

}

bool Account::makeWithdrawal(int withdrawal)
{
	return true;
}

int Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{

}

void Account::_displayTimestamp(void)
{

}
void Account::displayAccountsInfos( void )
{

}

Account::~Account()
{

}
int Account::getNbAccounts(void)
{
	return _nbAccounts;
}
int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}
