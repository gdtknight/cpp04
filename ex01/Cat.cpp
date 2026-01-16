/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:13:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 19:36:39 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat") { brain = new Brain(); }

Cat::Cat(const Cat &other) : Animal(other) { (*brain) = (*(other.brain)); }

Cat::~Cat(void) { delete brain; }

Cat &Cat::operator=(const Cat &other) {
  if (this != &other) {
    Animal::operator=(other);
    Brain *newBrain = new Brain(*(other.brain));
    if (brain)
      delete brain;
    brain = newBrain;
  }
  return (*this);
}

void Cat::makeSound(void) const { std::cout << "Meow-" << std::endl; }

Brain *Cat::getBrain() const { return this->brain; }
