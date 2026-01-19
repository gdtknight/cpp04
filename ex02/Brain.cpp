/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:09:22 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:23:08 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>
#include <stdexcept>

Brain::Brain(void) {
  std::cout << "Brain default constructor called" << std::endl;

  for (int idx = 0; idx < 100; idx++)
    ideas[idx] = "nothing";
}

Brain::Brain(Brain const &other) {
  std::cout << "Brain copy constructor called" << std::endl;

  for (int idx = 0; idx < 100; idx++)
    ideas[idx] = other.ideas[idx];
}
Brain::~Brain(void) { std::cout << "Brain destructor called" << std::endl; }

Brain &Brain::operator=(Brain const &other) {
  std::cout << "Brain assignation operator called" << std::endl;

  if (this != &other) {
    for (int idx = 0; idx < 100; idx++)
      ideas[idx] = other.ideas[idx];
  }

  return (*this);
}

const std::string &Brain::getIdeaAt(int idx) const {

  if (idx < 0 || idx >= 100)
    throw std::out_of_range("Brain index");

  return (ideas[idx]);
}

void Brain::setIdeaAt(int idx, const std::string &idea) {
  if (idx < 0 || idx >= 100)
    throw std::out_of_range("Brain index");
  ideas[idx] = idea;
}
