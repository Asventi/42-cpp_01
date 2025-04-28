/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:00:25 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/28 17:00:25 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	const std::string	str("HI THIS IS BRAIN");
	const std::string	*stringPTR = &str;
	const std::string	&stringREF = str;

	std::cout << "Memory address of str: " << &str << '\n';
	std::cout << "Memory address held by stringPTR: " << stringPTR << '\n';
	std::cout << "Memory address held by stringREF: " << &stringREF << '\n';

	std::cout << "Value of str: " << str << '\n';
	std::cout << "Value pointed by stringPTR: " << *stringPTR << '\n';
	std::cout << "Value referred by stringREF: " << stringREF << '\n';
}
