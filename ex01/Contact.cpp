/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:20:26 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/04 22:01:04 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName)
{
	if(!firstName.empty())
		_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	if (lastName.empty())
		_lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	if (nickName.empty())
		_nickName = nickName;
}

void Contact::setNumber(std::string	number)
{
	number = _number;
}

void Contact::setDarkSecret(std::string darkSecret)
{
	if (darkSecret.empty())
		_darkSecret = darkSecret;
}

std::string Contact::getFirstName(void){return _firstName;}
std::string Contact::getLastName(void){return _lastName;}
std::string	Contact::getNickName(void){return _nickName;}
std::string	Contact::getNumber(void){return _number;}
std::string Contact::getDarkSecret(void){return _darkSecret;}