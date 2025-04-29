/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:00:08 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/28 18:00:08 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <string>
#include <iostream>

void HumanB::set_weapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB(const std::string &name): _weapon(NULL), _name(name) {}

HumanB::~HumanB() {}

void HumanB::attack() const
{
	if (_weapon == NULL)
		std::cout << _name << " can't attack without a weapon" << '\n';
	else
		std::cout << _name << " attacks with their " << _weapon->type() << '\n';
}
