/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 17:16:54 by ddryha            #+#    #+#             */
/*   Updated: 2018/06/20 17:16:56 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void error(std::string error)
{
	std::cout << error << std::endl;
	exit(1);
}

std::string	getData(std::string filename)
{
	std::ifstream fs(filename);
	std::stringstream buffer;

	if (!fs.is_open())
	{
		std::cout << "File can'not be open!" << std::endl;
		exit(1);
	}
	buffer << fs.rdbuf();
	fs.close();
	return (buffer.str());
}

int main(int argc, char **argv)
{
	std::string str1;
	std::string str2;
	std::string res;

	if (argc != 4)
		error("Usage: ./replace filename string1 string2!");
	str1 = argv[2];
	str2 = argv[3];
	if (!str1.length() || !str2.length())
		error("String1 or String2 is empty!");
	if (!str1.compare(str2))
		error("Strings is same!");
	std::ofstream fout("test.replace");
	res = getData(argv[1]);
	while (res.find(str1) != std::string::npos)
		res.replace(res.find(str1), str1.length(), str2);
	fout << res;
	fout.close();
	return 0;
}
