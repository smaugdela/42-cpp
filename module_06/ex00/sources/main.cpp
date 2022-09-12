/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagdela <smagdela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:10:28 by smagdela          #+#    #+#             */
/*   Updated: 2022/09/12 19:22:42 by smagdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

static void	strtrim(std::string& str, const char *charset)
{
	size_t	start = str.find_first_not_of(charset);
	size_t	end = str.find_last_not_of(charset);

	if (start == std::string::npos && end == std::string::npos)
	{
		str = "";
		return ;
	}
	str.substr(start, end - start);
}

static e_origin_type	detect_type(std::string& str)
{
	size_t	i = 0;

	if (str == "nanf" || str == "-inff" || str == "+inff")
		return FLOAT;
	if (str == "nan" || str == "-inf" || str == "+inf")
		return DOUBLE;
	for ( ; str[i] && (str[i] == '-' || str[i] == '+'); ++i);
	for ( ; str[i] && isdigit(str[i]); ++i);
	if (!str[i])
		return INT;
	if (str.length() == 1 && isprint(str[0]))
		return CHAR;
	i = 0;
	for ( ; str[i] && (str[i] == '-' || str[i] == '+'); ++i);
	for ( ; str[i] && isdigit(str[i]); ++i);
	if (str[i] == '.')
		++i;
	else
		return ERROR;
	for ( ; str[i] && isdigit(str[i]); ++i);
	if (!str[i])
		return DOUBLE;
	else if (str[i] == 'f' && !str[++i])
		return FLOAT;
	return ERROR;
}

int main(int argc, const char** argv)
{
	t_origin_type	origin_type;
	t_dict			tab[5] = {{INT, &casti}, {CHAR, &castc}, {FLOAT, &castf}, {DOUBLE, &castd}, {ERROR, &error}};
	std::string		str("");
	int				i;

	if (argc != 2)
		return error(str);
	str = std::string(argv[1]);
	strtrim(str, " \t\n\v\f\r");
	origin_type = detect_type(str);
	for (i = 0 ; origin_type != tab[i].key && tab[i].key != ERROR; ++i);
	return tab[i].fun(str);
}
