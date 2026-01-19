/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:05:28 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:21:38 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void) : type("unknown") {
  std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string const &type) : type(type) {
  std::cout << "AAnimal string constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &other) : type(other.type) {
  std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {
  std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &other) {
  std::cout << "AAnimal assignation operator called" << std::endl;

  if (this != &other)
    type = other.type;

  return (*this);
}

const std::string &AAnimal::getType(void) const { return (type); }
