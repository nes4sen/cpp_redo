/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosahimi <nosahimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:41:09 by nosahimi          #+#    #+#             */
/*   Updated: 2026/01/27 19:29:26 by nosahimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class MyType
{
	int			_nb;
	std::string	_str;

	public :

};

int main()
{
	int  i = 5;
	i = 8;
	
	 int const *p = &i;
	int j = 1;
	*p = j;
	
	std::cout << " *p = " << *p << std::endl;

}
