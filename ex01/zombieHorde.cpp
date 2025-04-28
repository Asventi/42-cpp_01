/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:10:14 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/24 18:10:14 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, const std::string& name)
{
	Zombie *zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombies[i].set_name(name);
	}
	return zombies;
}
