/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:53:18 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/24 16:53:18 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

#include "./Zombie.hpp"

int	main(int c, char **args)
{
	const int		n = c > 1 ? std::atoi(args[1]) : 2;
	const Zombie	*zombies = zombieHorde(n, "Charles");

	for (int i = 0; i < n; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
}
