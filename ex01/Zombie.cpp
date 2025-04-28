/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:39:23 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/24 16:39:23 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

void Zombie::set_name(const std::string &name)
{
	_name = name;
}

void Zombie::announce() const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(): _name("Zombie") {}

Zombie::Zombie(std::string &name): _name(name) {}

Zombie::~Zombie()
{
	std::cout << _name << ": died.\n";
}

Zombie::Zombie(const Zombie &cpy) : _name(cpy._name) {}

Zombie &Zombie::operator=(const Zombie &e)
{
	if (&e != this)
	{
		_name = e._name;
	}
	return *this;
}
