/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:39:51 by smagdela          #+#    #+#             */
/*   Updated: 2022/06/14 11:45:23 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <string>

bool	gnl(std::ifstream &file, std::string &line)
{
	std::getline(file, line);
	if (file.eof())
		return (false);
	if (file.fail())
	{
		std::cout << "Bad file stream." <<std::endl;
		file.clear();
		file.ignore();
		return (false);
	}
	return (true);
}

void	winner_sed(std::ifstream &file, std::ofstream &replace_file,
	std::string const sep, std::string const rep)
{
	std::string	line;
	size_t		pos = 0;
	size_t		start = 0;

	while (gnl(file, line))
	{
		pos = 0;
		while (pos != std::string::npos)
		{
			start = pos;
			pos = line.find(sep, pos);
			if (pos != std::string::npos)
			{
				replace_file << line.substr(start, pos - start) + rep;
				pos += sep.size();
			}
			else
				replace_file << line.substr(start) << std::endl;
		}
	}
}

int	main(int ac, char **av)
{
	std::ifstream	file;
	std::ofstream	replace_file;
	std::string		replace_filename;

	if (ac != 4 || std::string(av[2]).empty())
	{
		std::cout << "Bad arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	file.open(av[1]);
	if (!file.is_open())
	{
		std::cout << "Bad input file." << std::endl;
		return (EXIT_FAILURE);
	}
	replace_filename = av[1] + std::string(".replace");
	replace_file.open(replace_filename.c_str(), std::ios::app);
	if (!replace_file.is_open())
	{
		std::cout << "Failed to create output file." << std::endl;
		file.close();
		return (EXIT_FAILURE);
	}
	winner_sed(file, replace_file, av[2], av[3]);
	file.close();
	replace_file.close();
	return (EXIT_SUCCESS);
}
