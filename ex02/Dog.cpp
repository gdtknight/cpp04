/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:25:40 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

Dog::Dog(void) : AAnimal("Dog") {
  std::cout << "Dog default constructor called" << std::endl;

  brain = new Brain();
}

Dog::Dog(Dog const &other) : AAnimal(other) {
  std::cout << "Dog copy constructor called" << std::endl;

  brain = new Brain(*(other.brain));
}

Dog::~Dog(void) {
  std::cout << "Dog destructor called" << std::endl;

  delete brain;
}

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog assignation operator called" << std::endl;

  if (this != &other) {
    AAnimal::operator=(other);
    (*brain) = *(other.brain); // Brain의 operator= 사용
  }

  return (*this);
}

void Dog::makeSound(void) const { std::cout << "Woof!" << std::endl; }
