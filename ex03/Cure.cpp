/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:48:34 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:15:32 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure") {
  std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src) {
  std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() { std::cout << "Cure destructor called" << std::endl; }

Cure &Cure::operator=(Cure const &rhs) {
  std::cout << "Cure assignation operator called" << std::endl;

  if (this != &rhs)
    AMateria::operator=(rhs);

  return (*this);
}

AMateria *Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
