/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:14:12 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/28 17:14:12 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Weapon.hpp"

const std::string & Weapon::type() const
{
	return _type;
}

void Weapon::set_type(const std::string &type)
{
	_type = type;
}

Weapon::Weapon(): _type("basic weapon") {}

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon() {}

Weapon::Weapon(const Weapon &cpy): _type(cpy._type) {}

Weapon &Weapon::operator=(const Weapon &e)
{
	if (&e == this)
		return *this;
	_type = e._type;
	return *this;
}
