/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:48:10 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:25:13 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "ICharacter.hpp"

#include <iostream>

AMateria::AMateria(void) : type("unknown") {
  std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
  std::cout << "AMateria string constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) : type(src.type) {
  std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria() {
  std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
  std::cout << "AMateria assignation operator called" << std::endl;

  if (this != &rhs)
    type = rhs.type;

  return (*this);
}

std::string const &AMateria::getType() const { return (type); }

void AMateria::use(ICharacter &target) {
  std::cout << "* generic materia used on " << "a character("
            << target.getName() << ")" << " *" << std::endl;
}
