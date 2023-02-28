/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgross <dgross@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 06:09:51 by dgross            #+#    #+#             */
/*   Updated: 2023/02/28 09:14:27 by dgross           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>
//test#1

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Car	= new WrongAnimal();
	const WrongAnimal* imposter = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << Car->getType() << " " << std::endl;
	std::cout << imposter->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	Car->makeSound();
	imposter->makeSound();
	meta->makeSound();
	return 0;
}
////test#2

//int main ( void )
//{
//	return (0);
//}

////test#3

//int main ( void )
//{
//	return (0);
//}