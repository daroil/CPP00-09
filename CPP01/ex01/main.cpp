/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/05/10 14:46:40 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		Zombie* horde;
		horde = zombieHorde(10, "Ur Mom");
		for (int i = 0; i < 10; i++)
			horde[i].announce();
		delete [] horde;
	}
	else if (argc == 2)
	{
		 if (stringIsDigit(argv[1]))
		 {
			Zombie* horde;
			int	N;
			N = std::stoi(argv[1]);
			horde = zombieHorde(N, "Ur Mom");
			for (int i = 0; i < N; i++)
				horde[i].announce();
			delete [] horde;	
		 }
		 else
		 	std::cout << "Second arguement should be digit" << std::endl;
	}
	else if (argc == 3)
	{
		 if (stringIsDigit(argv[1]))
		 {
			Zombie* horde;
			int	N;
			N = std::stoi(argv[1]);
			horde = zombieHorde(N, argv[2]);
			for (int i = 0; i < N; i++)
				horde[i].announce();
			delete [] horde;	
		 }
		 else
		 	std::cout << "Second arguement should be digit" << std::endl;
		
	}
	return (0);
}