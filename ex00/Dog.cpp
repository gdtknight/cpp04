/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 18:44:00 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
  : Animal("Dog") {}

Dog::Dog(const Dog &other)
  : Animal(other) {}

Dog::~Dog(void) {}

Dog &Dog::operator=(const Dog &other) {
  if (this != &other)
    Animal::operator=(other);
  return (*this);
}

void Dog::makeSound(void) const { std::cout << "Woof!" << std::endl; }
