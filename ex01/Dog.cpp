/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 19:35:57 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog") { brain = new Brain(); }

Dog::Dog(const Dog &other) : Animal(other) {
  brain = new Brain(*(other.brain));
}

Dog::~Dog(void) { delete brain; }

Dog &Dog::operator=(const Dog &other) {
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
