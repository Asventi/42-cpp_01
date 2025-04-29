/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:14:03 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/28 17:14:03 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"
#include "Weapon.hpp"
#include "HumanA.hpp"

int	main()
{
	Weapon club("crude spiked club");
	Weapon club2("curde spiked club2");

	const HumanA bob("bob", club);
	bob.attack();
	club.set_type("some other type of club");
	bob.attack();

	HumanB jim("jim");
	jim.set_weapon(club2);
	jim.attack();
	club2.set_type("some other type of club2");
	jim.attack();
}
