/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:48:34 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/15 11:08:33 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const &src) : AMateria(src) {}

Cure::~Cure() {}

Cure &Cure::operator=(Cure const &rhs) {
  if (this != &rhs)
    AMateria::operator=(rhs);
  return (*this);
}

AMateria *Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter &target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
