/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:09:22 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 19:28:21 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"
#include <stdexcept>

Brain::Brain(void) {
  for (int idx = 0; idx < 100; idx++)
    ideas[idx] = "nothing";
}

Brain::Brain(const Brain &other) {
  for (int idx = 0; idx < 100; idx++)
    ideas[idx] = other.ideas[idx];
}

Brain::~Brain(void) {}

Brain &Brain::operator=(const Brain &other) {
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
