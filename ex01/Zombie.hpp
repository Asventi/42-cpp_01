/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:39:23 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/24 16:39:23 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
    std::string _name;

public:
	void set_name(const std::string &name);
	void    announce() const;

	Zombie();
    explicit Zombie(std::string &name);
    ~Zombie();
    Zombie(const Zombie& cpy);
    Zombie& operator=(const Zombie& e);
};

Zombie  *zombieHorde(int N, const std::string& name);

#endif
