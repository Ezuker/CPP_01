/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:10:06 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/02 22:30:41 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <iomanip>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		std::string	getName();
		void		setName(std::string name);
		void		announce();

	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
