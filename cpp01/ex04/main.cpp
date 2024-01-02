/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel <ldaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:52:37 by ldaniel           #+#    #+#             */
/*   Updated: 2023/12/18 13:57:34 by ldaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


int	replaced_copy(const std::string &name, const std::string &s1, const std::string &s2)
{
	std::ifstream	infile;
	std::string txt;
	infile.open(name, std::ios::in);
	if (!infile)
		return (std::cerr << "Wrong file\n", 1);
	std::ofstream	outfile(name + ".replace");
	if (!outfile)
		return (std::cerr << "Unable to create outfile\n", 1);
	 std::string line;
	while (std::getline(infile, line)){
		int pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		outfile << line << '\n';
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4) {std::cerr << "./Copy <file> <str1> <str2>\n"; return (1);}
	replaced_copy(av[1], av[2], av[3]);

	return (0);
}
