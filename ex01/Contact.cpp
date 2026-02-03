/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:20:26 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/03 11:20:36 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string firstName)
{}

void Contact::setLastName(std::string lastName)
{}

void Contact::setNickName(std::string nickName)
{}

void Contact::setNumber(int number)
{}

void Contact::setDarkSecret(std::string darkSecret)
{}

std::string Contact::getFirstName(void){return _firstName;}
std::string Contact::getLastName(void){return _lastName;}
std::string	Contact::getNickName(void){return _nickName;}
int 		Contact::getNumber(void){return _number;}
std::string Contact::getDarkSecret(void){return _darkSecret;}