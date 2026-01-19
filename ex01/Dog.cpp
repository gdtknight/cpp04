/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:11:12 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") {
  std::cout << "Dog constructor called" << std::endl;
  brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
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
    Animal::operator=(other);
    Brain *newBrain = new Brain(*(other.brain));
    if (brain)
      delete brain;
    brain = newBrain;
  }
  return (*this);
}

void Dog::makeSound(void) const { std::cout << "Woof!" << std::endl; }

Brain *Dog::getBrain() const { return this->brain; }
