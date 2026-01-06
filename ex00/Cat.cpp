/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 18:43:40 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
  : Animal("Cat") {}

Cat::Cat(const Cat &other)
  : Animal(other) {}

Cat::~Cat(void) {}

Cat &Cat::operator=(const Cat &other) {
  if (this != &other)
    Animal::operator=(other);
  return (*this);
}

void Cat::makeSound(void) const { std::cout << "Meow-" << std::endl; }
