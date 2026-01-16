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

Dog::Dog(void) : AAnimal("Dog") { brain = new Brain(); }

Dog::Dog(const Dog &other) : AAnimal(other) {
  brain = new Brain(*(other.brain));
}

Dog::~Dog(void) { delete brain; }

Dog &Dog::operator=(const Dog &other) {
  if (this != &other) {
    AAnimal::operator=(other);
    *brain = *(other.brain); // Brain의 operator= 사용
  }
  return (*this);
}

void Dog::makeSound(void) const { std::cout << "Woof!" << std::endl; }
