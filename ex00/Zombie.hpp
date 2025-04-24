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
private:
    std::string _name;
public:
    Zombie();
    explicit Zombie(std::string &name);
    ~Zombie();
    Zombie(const Zombie&);
    Zombie& operator=(const Zombie& e);
    void    announce();
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
