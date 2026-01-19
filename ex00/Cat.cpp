/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:17:55 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) : Animal("Cat") {
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other) {
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void) { std::cout << "Cat destructor called" << std::endl; }

Cat &Cat::operator=(Cat const &other) {
  std::cout << "Cat assignation operator called" << std::endl;

  if (this != &other)
    Animal::operator=(other);
  return (*this);
}

void Cat::makeSound(void) const { std::cout << "Meow-" << std::endl; }
