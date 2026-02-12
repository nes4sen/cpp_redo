/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:20:26 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/09 11:37:28 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

void Contact::setNickName(std::string nickName)
{
	_nickName = nickName;
}

void Contact::setNumber(std::string	number)
{
	_number = number;
}

void Contact::setDarkSecret(std::string darkSecret)
{
	_darkSecret = darkSecret;
}

std::string Contact::getFirstName(void){return _firstName;}
std::string Contact::getLastName(void){return _lastName;}
std::string	Contact::getNickName(void){return _nickName;}
std::string	Contact::getNumber(void){return _number;}
std::string Contact::getDarkSecret(void){return _darkSecret;}