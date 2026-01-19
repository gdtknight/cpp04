/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:01:51 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:21:27 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
  Dog(void);
  Dog(Dog const &other);
  virtual ~Dog(void);

  Dog &operator=(Dog const &other);

  void makeSound(void) const;
  Brain *getBrain() const;

protected:
private:
  Brain *brain;
};

#endif
