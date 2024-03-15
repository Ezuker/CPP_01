/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:01:49 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/15 16:52:06 by bcarolle         ###   ########.fr       */
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
		void		setWeapon(Weapon &weapon);

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
