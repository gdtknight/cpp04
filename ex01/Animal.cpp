/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:05:28 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/19 15:21:02 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("unknown") {
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : type(type) {
  std::cout << "Animal string constructor called" << std::endl;
}

Animal::Animal(Animal const &other) : type(other.type) {
  std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void) { std::cout << "Animal destructor called" << std::endl; }

Animal &Animal::operator=(Animal const &other) {
  std::cout << "Animal assignation operator called" << std::endl;

  if (this != &other)
    type = other.type;
  return (*this);
}

const std::string &Animal::getType(void) const { return (type); }

void Animal::makeSound(void) const { std::cout << type << std::endl; }
