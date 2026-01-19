/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:45:07 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:26:26 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>

MateriaSource::MateriaSource() {
  std::cout << "MateriaSource default constructor called" << std::endl;

  for (int i = 0; i < 4; i++)
    (this->templates)[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
  std::cout << "MateriaSource copy constructor called" << std::endl;

  for (int i = 0; i < 4; i++) {
    if (src.templates[i])
      (this->templates)[i] = src.templates[i]->clone();
    else
      (this->templates)[i] = NULL;
  }
}

MateriaSource::~MateriaSource() {
  std::cout << "MateriaSource destructor called" << std::endl;

  for (int i = 0; i < 4; i++) {
    if ((this->templates)[i])
      delete (this->templates)[i];
  }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
  std::cout << "MateriaSource assignation operator called" << std::endl;

  if (this != &rhs) {
    for (int i = 0; i < 4; i++) {
      if ((this->templates)[i])
        delete (this->templates)[i];
      if (rhs.templates[i])
        (this->templates)[i] = rhs.templates[i]->clone();
      else
        (this->templates)[i] = NULL;
    }
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
  if (!m)
    return;
  for (int i = 0; i < 4; i++) {
    if (!(this->templates)[i]) {
      (this->templates)[i] = m;
      return;
    }
  }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  for (int i = 0; i < 4; i++) {
    if (((this->templates))[i] && (this->templates)[i]->getType() == type)
      return (this->templates)[i]->clone();
  }
  return NULL;
}
