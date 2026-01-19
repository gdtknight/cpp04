/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:50:18 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:19:52 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
  std::cout << "WrongCat copy constructor called" << std::endl;
  *this = src;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {

  std::cout << "WrongCat assignation operator called" << std::endl;

  if (this != &rhs) {
    WrongAnimal::operator=(rhs);
  }

  return *this;
}

void WrongCat::makeSound() const { std::cout << "Wrong Meow!" << std::endl; }
