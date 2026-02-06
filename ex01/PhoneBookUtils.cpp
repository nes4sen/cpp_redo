/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 22:05:07 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/06 16:07:35 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

bool PhoneBook::_isValidPhoneNum(std::string num)
{
	for (size_t i = 0; i < num.length(); i++)
	{
		if (!std::isdigit(num[i]))
			return (false);
	}
	return (true);
}

bool PhoneBook::_isAllWhiteSpaces(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
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

std::string PhoneBook::_format(std::string text)
{
	if (text.length() > 10)
		return text.substr(0, 9) + ".";
	return text;
}

void PhoneBook::_PrintSearchIndex(int index)
{
	std::cout << "\n--- Contact Details #" << index << " ---\n";

	std::cout << "First Name    : " << _contact[index].getFirstName() << "\n";
	std::cout << "Last Name     : " << _contact[index].getLastName() << "\n";
	std::cout << "Nickname      : " << _contact[index].getNickName() << "\n";
	std::cout << "Phone Number  : " << _contact[index].getNumber() << "\n";
	std::cout << "Darkest Secret: " << _contact[index].getDarkSecret() << "\n";

	std::cout << "-----------------------------" << "\n";
}

void PhoneBook::_ContactIndexSearch()
{
	std::string input;

	std::cout << "Please enter a page index from 0->7\n";
	if (!std::getline(std::cin, input))
		return;
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
	{
		int index = input[0] - '0';
		if (_contact[index].getFirstName().empty())
		{
			std::cout << "Error: Contact #" << index << " is empty.\n";
			return;
		}
		else
			_PrintSearchIndex(index);
		return;
	}
	std::cout << "Error: Invalid index. Please enter 0-7.\n";
}
