/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honlee <honlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:00:07 by honlee            #+#    #+#             */
/*   Updated: 2021/04/08 20:16:44 by honlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <string>
#include <fstream>

int	error_return(void)
{
	std::cout << "plz check your input" << std::endl;
	return (1);
}

//https://stackoverflow.com/questions/2896600/how-to-replace-all-occurrences-of-a-character-in-string
//google -> search keyword : cpp replace all
std::string replaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}

int	main(int ac, char **av)
{
	std::string file_name;
	std::string s1;
	std::string s2;

	if (ac != 4)
		return (error_return());
	file_name = std::string(av[1]);
	s1 = std::string(av[2]);
	s2 = std::string(av[3]);

	if (s1.length() == 0)
		return (error_return());
	std::ifstream file_in(file_name);
	if (!file_in)
		return (error_return());
	
	std::ofstream file_out(file_name + ".replace");
	if (!file_out)
	{
		std::cout << "Can't make file : " << file_name + ".replace" << std::endl; 
	}

	std::string line;
	std::stringstream ss;

	ss << file_in.rdbuf();
	line = ss.str();
	line = replaceAll(line, s1, s2);
	file_out << line;

	file_in.close();
	file_out.close();
}