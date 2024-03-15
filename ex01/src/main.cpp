/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:36:22 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/15 16:38:34 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie bob;

	bob.setName("bob");
	bob.announce();

	Zombie *zombies = zombieHorde(10, "jim");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
