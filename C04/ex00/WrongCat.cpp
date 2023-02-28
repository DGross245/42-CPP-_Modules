/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:23:19 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 09:15:04 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

#include <iostream>

WrongCat::WrongCat( void ) {
	this->type = "Wrong";
	std::cout << "WrongCat's default constructor called called" << std::endl;
	return ;
}
WrongCat::WrongCat( const WrongCat &obj ) {
	*this = obj;
	std::cout << "WrongCat's copy constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat's destructor called" << std::endl;
	return ;
}
WrongCat &WrongCat::operator=( WrongCat const &instance) {
	this->type = instance.type;
	std::cout << "WrongCat's copy assignment operator called" << std::endl;
	return (*this);
}
