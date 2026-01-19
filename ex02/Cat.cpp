/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:24:05 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat(void) : AAnimal("Cat") {
  std::cout << "Cat default constructor called" << std::endl;

  brain = new Brain();
}

Cat::Cat(Cat const &other) : AAnimal(other) {
  std::cout << "Cat copy constructor called" << std::endl;

  brain = new Brain(*(other.brain));
}

Cat::~Cat(void) {
  std::cout << "Cat destructor called" << std::endl;

  delete brain;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat assignation operator called" << std::endl;

  if (this != &other) {
    AAnimal::operator=(other);
    *brain = *(other.brain); // Brain의 operator= 사용
  }
  return (*this);
}

void Cat::makeSound(void) const { std::cout << "Meow-" << std::endl; }
