/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:39:49 by dgross            #+#    #+#             */
/*   Updated: 2023/03/13 16:42:18 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include <string>
#include <iostream>

int main(void)
{
	std::cout << "\033[1;32m** Constructing b **\033[0m" << std::endl;
	Bureaucrat *b = new Bureaucrat();
	std::cout << "\033[1;32m** Testing b **\033[0m" << std::endl;
	std::cout << b;
	try
	{
	b->Increment();
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.msg() << '\n';
	}
	std::cout << b;
	try
	{
		b->Decrement();
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.msg() << '\n';
	}
	std::cout << b;
	try
	{
		while (1)
			b->Decrement();
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.msg() << '\n';
	}
	std::cout << b;
	std::cout << "\033[1;32m** Deconstructing b **\033[0m" << std::endl;
	delete b;
	return 0;
}