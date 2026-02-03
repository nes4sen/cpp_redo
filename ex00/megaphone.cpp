/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:23:43 by nosahimi          #+#    #+#             */
/*   Updated: 2026/02/03 09:45:53 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
	if (ac >= 2)
	{
		std::string str;
		for (int j = 1; j < ac; j++)
		{
			str = av[j];
			for (size_t i = 0; i  < str.length(); i++)
				std::cout << (char )std::toupper((unsigned char)str[i]);
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}