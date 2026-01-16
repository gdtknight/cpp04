/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:45:07 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/15 12:16:39 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
  for (int i = 0; i < 4; i++)
    (this->templates)[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
  for (int i = 0; i < 4; i++) {
    if (src.templates[i])
      (this->templates)[i] = src.templates[i]->clone();
    else
      (this->templates)[i] = NULL;
  }
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; i++) {
    if ((this->templates)[i])
      delete (this->templates)[i];
  }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
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
