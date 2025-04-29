/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:00:08 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/28 18:00:08 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

# include <string>

class HumanB
{
    Weapon      *_weapon;
    std::string _name;

public:
    void set_weapon(Weapon &weapon);
    void attack() const;

    explicit HumanB(const std::string &name);
    ~HumanB();
};

#endif
