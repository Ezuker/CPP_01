/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:36:22 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/04 11:50:33 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie bob = Zombie("bob");
	Zombie *topheur = newZombie("topheur");

	randomChump("jim");
	bob.announce();
	delete topheur;
	return (0);
}
