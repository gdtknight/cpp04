/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:47:01 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 20:39:13 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"

#include <iostream>

Character::Character(void) : name("unknown") {
  std::cout << "Character default constructor called." << std::endl;

  for (int i = 0; i < 4; i++)
    (this->inventory)[i] = NULL;
}

Character::Character(const std::string &name) : name(name) {
  std::cout << "Character string constructor called." << std::endl;

  for (int i = 0; i < 4; i++)
    (this->inventory)[i] = NULL;
}

Character::Character(const Character &src) : name(src.name) {
  std::cout << "Character copy constructor called." << std::endl;

  for (int i = 0; i < 4; i++) {
    if (src.inventory[i])
      (this->inventory)[i] = src.inventory[i]->clone();
    else
      (this->inventory)[i] = NULL;
  }
}

Character::~Character(void) {
  std::cout << "Character destructor called." << std::endl;

  for (int i = 0; i < 4; i++) {
    if ((this->inventory)[i])
      delete (this->inventory)[i];
  }
}

Character &Character::operator=(const Character &rhs) {
  std::cout << "Character assignation operator called." << std::endl;

  if (this != &rhs) {
    this->name = rhs.name;
    for (int i = 0; i < 4; i++) {
      if ((this->inventory)[i])
        delete (this->inventory)[i];
      if ((rhs.inventory)[i])
        (this->inventory)[i] = (rhs.inventory)[i]->clone();
      else
        (this->inventory)[i] = NULL;
    }
  }

  return (*this);
}

std::string const &Character::getName() const { return (this->name); }

void Character::equip(AMateria *m) {
  if (!m)
    return;
  for (int i = 0; i < 4; i++) {
    if (!((this->inventory)[i])) {
      (this->inventory)[i] = m;
      return;
    }
  }
}

void Character::unequip(int idx) {
  if (idx < 0 || idx > 3)
    return;
  (this->inventory)[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
  if (idx < 0 || idx > 3 || !(this->inventory)[idx])
    return;
  (this->inventory)[idx]->use(target);
}
