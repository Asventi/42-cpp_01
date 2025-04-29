/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:29:16 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/29 15:29:16 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

enum e_level
{
	DEBUG,
	INFO,
	ERROR,
	WARNING,
	NOLEVEL
};

e_level	get_level(std::string &level)
{
	if (level == "DEBUG")
		return DEBUG;
	if (level == "INFO")
		return INFO;
	if (level == "WARNING")
		return WARNING;
	if (level == "ERROR")
		return ERROR;
	return NOLEVEL;
}

int main(int c, char **args)
{
	const Harl	harl;
	std::string	level;
	e_level		str_level = NOLEVEL;

	if (c > 1)
	{
		level = args[1];
		str_level = get_level(level);
	}
	switch (str_level)
	{
		case NOLEVEL:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
		case DEBUG:
			std::cout << "[ DEBUG ]\n";
			harl.complain("debug");
		case INFO:
			std::cout << "[ INFO ]\n";
			harl.complain("info");
		case WARNING:
			std::cout << "[ WARNING ]\n";
			harl.complain("warning");
		case ERROR:
			std::cout << "[ ERROR ]\n";
			harl.complain("error");
	}
}
