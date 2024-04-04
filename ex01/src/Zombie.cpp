/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:49:20 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/04 11:49:21 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Zombie::Zombie () : _name("")
{
}

Zombie::Zombie (std::string name) : _name(name)
{
}

Zombie::~Zombie ()
{
	std::cout << this->_name << " died again" << std::endl;
}

void	Zombie::setName (std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName ()
{
	return (this->_name);
}

void	Zombie::announce (void)
{
	if (this->_name == "")
		std::cout << "Zombie: BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
