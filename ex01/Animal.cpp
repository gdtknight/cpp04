/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:05:28 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 18:50:46 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
  : type("unknown") {}

Animal::Animal(const std::string &type)
  : type(type) {}

Animal::Animal(const Animal &other)
  : type(other.type) {}

Animal::~Animal(void) {}

Animal &Animal::operator=(const Animal &other) {
  if (this != &other)
    type = other.type;
  return (*this);
}

const std::string &Animal::getType(void) const { return (type); }

void Animal::makeSound(void) const { std::cout << type << std::endl; }
