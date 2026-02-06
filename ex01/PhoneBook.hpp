/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:41:49 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/05 22:13:47 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONBOOK_HPP
#define PHONBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	Contact 	_contact[8];
	int			_contactIndex;

	std::string	_GetValidInput(std::string str);
	std::string	_format(std::string text);
	bool 		_isValidPhoneNum(std::string num);
	bool		_isAllWhiteSpaces(std::string);
	void		_ContactIndexSearch();
	void		_PrintSearchIndex(int index);

	public :
		bool	addContacts();
		void 	findContact();

	
};

#endif