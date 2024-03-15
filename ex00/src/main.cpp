/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:36:22 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/15 16:34:36 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie bob = Zombie("bob");
	Zombie *topheur = newZombie("topheur");

	randomChump("jim");
	bob.announce();
	topheur->announce();
	delete topheur;
	return (0);
}
