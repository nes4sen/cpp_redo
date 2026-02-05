/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:41:49 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/05 14:55:14 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONBOOK_HPP
#define PHONBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	Contact _contact[8];
	int		_contactIndex;

	std::string	_GetValidInput(std::string str);
	bool 		_isValidPhoneNum(std::string num);
	bool		_isAllWhiteSpaces(std::string);
	
	public :
		bool	addContacts();
		void 	findContact();

	
};

#endif