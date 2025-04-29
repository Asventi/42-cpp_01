/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:14:20 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/28 17:14:20 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

# include <string>

class HumanA
{
    Weapon      &_weapon;
    std::string    _name;
public:
    const Weapon & weapon() const;
    void set_weapon(const Weapon &weapon) const;

    const std::string & name() const;
    void set_name(const std::string &name);

    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
    void attack() const;
};

#endif
