/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:05:28 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/11 18:10:33 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("unknown") {}

AAnimal::AAnimal(const std::string &type) : type(type) {}

AAnimal::AAnimal(const AAnimal &other) : type(other.type) {}

AAnimal::~AAnimal(void) {}

AAnimal &AAnimal::operator=(const AAnimal &other) {
  if (this != &other)
    type = other.type;
  return (*this);
}

const std::string &AAnimal::getType(void) const { return (type); }
