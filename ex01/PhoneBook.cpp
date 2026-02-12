/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:41:29 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/09 12:11:58 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_contactIndex = 0;
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
		page.setDarkSecret(result);
	
	std::cout << "New contact was added in page " << _contactIndex % 8 << "\n";
	_contact[_contactIndex % 8] = page;
	_contactIndex++;
	return (true);
}

void PhoneBook::findContact()
{
	std::cout << " ___________________________________________ " << "\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << "\n";
	std::cout << "|__________|__________|__________|__________|" << "\n";

	int limit = _contactIndex;
	if (limit > 8)
		limit = 8;

	for (int i = 0; i < limit; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << _format(_contact[i].getFirstName());
		std::cout << "|" << std::setw(10) << _format(_contact[i].getLastName());
		std::cout << "|" << std::setw(10) << _format(_contact[i].getNickName());
		std::cout << "|" << "\n";
	}
	std::cout << "|__________|__________|__________|__________|" << "\n";

	_ContactIndexSearch();
}
