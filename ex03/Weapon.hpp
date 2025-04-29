/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:14:12 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/28 17:14:12 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
    std::string _type;

public:
    const std::string & type() const;

    void set_type(const std::string &type);

    Weapon();
    Weapon(std::string type);
    ~Weapon();
    Weapon(const Weapon&);
    Weapon& operator=(const Weapon& e);
};

#endif
