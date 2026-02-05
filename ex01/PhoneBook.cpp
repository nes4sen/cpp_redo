/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:41:29 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/05 14:28:53 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool PhoneBook::_isValidPhoneNum(std::string num)
{
	for (int i = 0; i < num.length(); i++)
	{
		if (!std::isdigit(num[i]))
			return (false);
	}
	return (true);
}

bool PhoneBook::_isAllWhiteSpaces(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!std::isspace(str[i]))
			return (false);
	}
	return (true);
}

std::string	PhoneBook::_GetValidInput(std::string str)
{
	std::string prompt;

	std::cout << str;
	while (std::getline(std::cin, prompt))
	{
		if (prompt.empty() || _isAllWhiteSpaces(str))
		{
			std::cout << "--- PLEASE ENTER A VALID INPUT !! ---\n";
			continue ;
		}
		if (str == "Number : " && _isValidPhoneNum(str))
		{
			std::cout << "PLEASE ENTER A VALID PHONE NUMBER !!\n";
			continue ;
		}
		return (prompt);
	}
	return ("");
}

bool PhoneBook::addContacts()
{
    Contact		page;
	std::string result;

	if ((result = _GetValidInput("First name : ")).empty())
		return (false);
	else
		page.setFirstName(result);

	if ((result = _GetValidInput("Last name : ")).empty())
		return (false);
	else
		page.setLastName(result);

	if ((result = _GetValidInput("Nick name : ")).empty())
		return (false);
	else
		page.setNickName(result);

	if ((result = _GetValidInput("Number : ")).empty())
		return (false);
	else
		page.setNumber(result);
		
	if ((result = _GetValidInput("Dark secret : ")).empty())
		return (false);
	else
		page.setFirstName(result);
	return (true);
}

void PhoneBook::findContact()
{
	std::string prompt;

	std::getline(std::cin, prompt);
	if (prompt.empty() || prompt >= '')
}