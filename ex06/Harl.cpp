/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:29:24 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/29 15:29:24 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

void Harl::debug() const
{
	std::cout << DEBUG_MSG;
}

void Harl::info() const
{
	std::cout << INFO_MSG;
}

void Harl::warning() const
{
	std::cout << WARNING_MSG;
}

void Harl::error() const
{
	std::cout << ERROR_MSG;
}

void Harl::complain(std::string level) const
{
	void	(Harl::*f[4]) (void) const = {&Harl::debug, &Harl::info,
		&Harl::warning, &Harl::error};
	const std::string	levels[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*f[i])();
			return ;
		}
	}
	std::cout << "invalid level\n";
}


