/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:41:23 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/15 16:48:52 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{	
}

HumanA::~HumanA()
{
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

Weapon	&HumanA::getWeapon()
{
	return (this->_weapon);
}
void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
