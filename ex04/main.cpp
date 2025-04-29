/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:08:21 by pjarnac           #+#    #+#             */
/*   Updated: 2025/04/29 11:08:21 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>

int	main(int c, char **args)
{
	if (c != 4)
	{
		std::cout << "Invalid usage: filename string1 string2\n";
		return 1;
	}
	std::string			filename(args[1]);
	std::string			s1(args[2]);
	std::string			s2(args[3]);
	std::stringstream	txt_stream;
	std::ifstream		in_file(args[1]);

	if (!in_file.good())
	{
		std::cout << args[1] << " is not a valid file\n";
		return 1;
	}
	txt_stream << in_file.rdbuf();
	std::string txt = txt_stream.str();
	std::string::size_type i = 0;
	while ((i = txt.find(s1, i)) != std::string::npos)
	{
		txt.erase(i, s1.size());
		txt.insert(i, s2);
		i += s2.size();
	}
	in_file.close();
	std::ofstream	outfile(filename.append(".replace").c_str(), std::ios::trunc);
	if (!outfile.good())
	{
		std::cout << args[1] << ".replace is not a valid file\n";
		return 1;
	}
	outfile << txt;
	outfile.close();
}
