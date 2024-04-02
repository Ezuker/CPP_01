/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 17:32:05 by bcarolle          #+#    #+#             */
/*   Updated: 2024/04/02 22:59:25 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Not enough arguments" << std::endl;
        return (1);
    }
    if (argc > 2)
    {
        std::cerr << "Too many arguments" << std::endl;
        return (1);
    }
    std::string s = argv[1];
    Harl harl;

    for (size_t i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    harl.complain(s);
    return (0);
}