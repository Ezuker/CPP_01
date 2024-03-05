/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:29 by bcarolle          #+#    #+#             */
/*   Updated: 2024/03/05 15:16:36 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <string>
#include <sstream>

std::string	ifsContentTransform(std::string ifsContent, std::string needle, std::string haystack)
{
	std::string	newIfsContent;
	size_t		pos;

	pos = 0;
	newIfsContent += ifsContent.substr(0, ifsContent.find(needle));
	newIfsContent += haystack;
	pos += needle.length() + ifsContent.find(needle);
	while (pos < ifsContent.length())
	{
		if (ifsContent.find(needle, pos + 1) == std::string::npos)
			break;
		newIfsContent += ifsContent.substr(pos, ifsContent.find(needle, pos + 1) - pos);
		newIfsContent += haystack;
		pos += needle.length() + ifsContent.find(needle, pos + 1) - pos;
	}
	newIfsContent += ifsContent.substr(pos, ifsContent.length() - pos);
	return (newIfsContent);
}
int	main (int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}
	std::string	s1;
	std::string	s2;

	s1 = argv[2];
	s2 = argv[3];

	std::ifstream	ifs(argv[1]);
	std::ofstream	ofs(strcat(argv[1], ".replace"));
	
	std::string	ifsContent;

	if (ifs.is_open())
	{
		while (ifs)
		{
			std::string	tmp;
			std::getline(ifs, tmp);
			ifsContent += tmp;
		}
	}
	ifsContent = ifsContentTransform(ifsContent, s1, s2);
	ofs << ifsContent;
	return (0);
}
