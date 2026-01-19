/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:57:42 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/19 15:12:57 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
public:
  Animal(void);
  Animal(std::string const &type);
  Animal(Animal const &other);
  virtual ~Animal(void);

  Animal &operator=(Animal const &other);

  virtual const std::string &getType(void) const;
  virtual void makeSound(void) const;

protected:
  std::string type;

private:
};

#endif
