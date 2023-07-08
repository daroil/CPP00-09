/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhendzel <dhendzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:10:55 by dhendzel          #+#    #+#             */
/*   Updated: 2023/06/07 16:59:11 by dhendzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void ) 
{
    Bureaucrat clerk(12, "Loh");
    Bureaucrat *clerk1 = new Bureaucrat(13, "chel");

    std::cout << clerk << std::endl;
    std::cout << clerk1 << std::endl;
    delete clerk1;`
	return (0);
}
