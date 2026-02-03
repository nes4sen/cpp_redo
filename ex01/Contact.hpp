/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:43:20 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/03 16:52:40 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickName;
	std::string		_darkSecret;
	int				_number; 

	public :
		void 		setFirstName(std::string firstName);
		void		setLastName(std::string lastName);
		void		setNickName(std::string nickName);
		void 		setDarkSecret(std::string darkSecret);
		void 		setNumber(int number);

		std::string	getFirstName(void);
		std::string getLastName(void);
		std::string	getNickName(void);
		std::string getDarkSecret(void);
		int			getNumber(void);
};

#endif