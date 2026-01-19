/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:18:18 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other) {
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void) { std::cout << "Dog destructor called" << std::endl; }

Dog &Dog::operator=(Dog const &other) {
  std::cout << "Dog assignation operator called" << std::endl;

  if (this != &other)
    Animal::operator=(other);
  return (*this);
}

void Dog::makeSound(void) const { std::cout << "Woof!" << std::endl; }
