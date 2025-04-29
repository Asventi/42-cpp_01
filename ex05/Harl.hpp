/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:29:24 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/29 15:29:24 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# define DEBUG_MSG "I want to complain in a DEBUG message\n"
# define INFO_MSG "I want to complain in a INFO message\n"
# define WARNING_MSG "I want to complain in a WARNING message\n"
# define ERROR_MSG "I want to complain in a ERROR message\n"

# include <string>

class Harl
{
	void	debug() const;
	void	info() const;
	void	error() const;
	void	warning() const;
public:
	void	complain(std::string level) const;
};

#endif
