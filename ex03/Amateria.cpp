/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:48:10 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/16 11:18:21 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(void) : type("unknown") {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(AMateria const &src) : type(src.type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(AMateria const &rhs) {
  if (this != &rhs)
    type = rhs.type;
  return (*this);
}

std::string const &AMateria::getType() const { return (type); }

void AMateria::use(ICharacter &target) {
  (void)target;
  std::cout << "* generic materia used on " << "a character("
            << target.getName() << ")" << " *" << std::endl;
}
