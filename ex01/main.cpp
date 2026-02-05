/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:43:51 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/05 14:58:58 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	
    std::string prompt;
    PhoneBook	PhoneBook;

    while (1)
    {
        if (!std::getline(std::cin, prompt))
			break ;
        if (prompt == "ADD")
			PhoneBook.addContacts();
		else if (prompt == "SEARCH")
			PhoneBook.findContact();
		else if (prompt == "EXIT")
			break ;
		else
			std::cout << "Please enter an valid command!!\n";
    }
	std::cout << "The PhoneBook closed!!\n";
}