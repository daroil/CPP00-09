/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/16 16:44:12 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	sedding(std::string *stringToRep, std::string *stringToKeep, std::string *fileContent)
{
	int	i = 0;
	i = (*fileContent).find((*stringToRep));
	while(i != -1)
	{
		std::cout << "i = " << i << std::endl;
		(*fileContent).erase(i, (*stringToRep).length());
		(*fileContent).insert(i, (*stringToKeep));
		i = (*fileContent).find((*stringToRep));
	}

}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage ./<programName> <fileName> <stringToRep> <stringToKeep>" << std::endl;
		return (1);
	}
	
	std::ifstream	infile(argv[1]);
	std::string		stringToRep = argv[2];
	std::string		stringToKeep = argv[3];
	if (!infile.good())
	{
		std::cout << "usage ./<programName> <fileName> <stringToRep> <stringToKeep>" << std::endl;
		return (1);
	}
	std::ofstream	outfile(std::string(argv[1]) + ".replace");
	std::string		fileContent;
	char			c;
	while(infile.get(c))
	{
		std::cout << c;
		fileContent.push_back(c);
	}
	std::cout << std::endl << fileContent;
	sedding(&stringToRep, &stringToKeep, &fileContent);
	std::cout << std::endl << fileContent;
	outfile << fileContent;
	infile.close();
	outfile.close();
	return (0);
}