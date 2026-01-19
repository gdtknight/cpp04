/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:48:48 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:15:53 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice") {
  std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src) {
  std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() { std::cout << "Ice destructor called" << std::endl; }

Ice &Ice::operator=(Ice const &rhs) {
  std::cout << "Ice assignation operator called" << std::endl;

  if (this != &rhs)
    AMateria::operator=(rhs);

  return (*this);
}

AMateria *Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter &target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}
