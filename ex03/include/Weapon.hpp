/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:41:27 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/11 11:08:42 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <iomanip>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();

		const std::string	&getType();
		void				setType(std::string type);

	private:
		std::string _type;
};

#endif
