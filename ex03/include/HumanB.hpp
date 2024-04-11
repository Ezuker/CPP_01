/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:01:49 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/11 11:10:14 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void		attack();
		void		setWeapon(Weapon *weapon);
		Weapon		*getWeapon();

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
