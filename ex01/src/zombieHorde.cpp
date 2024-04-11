/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:32:07 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/11 11:05:44 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
	}
	return (zombie);
}
