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

Cat::Cat(void) : AAnimal("Cat") { brain = new Brain(); }

Cat::Cat(const Cat &other) : AAnimal(other) {
  brain = new Brain(*(other.brain));
}

Cat::~Cat(void) { delete brain; }

Cat &Cat::operator=(const Cat &other) {
  if (this != &other) {
    AAnimal::operator=(other);
    *brain = *(other.brain); // Brain의 operator= 사용
  }
  return (*this);
}

void Cat::makeSound(void) const { std::cout << "Meow-" << std::endl; }
