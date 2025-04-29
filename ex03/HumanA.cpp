/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:14:20 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/28 17:14:20 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

#include <string>
#include <iostream>

const Weapon & HumanA::weapon() const
{
	return _weapon;
}

void HumanA::set_weapon(const Weapon &weapon) const
{
	_weapon = weapon;
}

const std::string & HumanA::name() const
{
	return _name;
}

void HumanA::set_name(const std::string &name)
{
	_name = name;
}

HumanA::HumanA(const std::string &name, Weapon &weapon):
	_weapon(weapon), _name(name) {}

HumanA::~HumanA() {}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.type() << '\n';
}

