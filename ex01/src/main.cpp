/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:36:22 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/11 14:17:39 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie bob = Zombie("bob");
	int	N = 10;

	bob.announce();
	Zombie *zombies = zombieHorde(N, "jim");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
