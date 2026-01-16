/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:01:51 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 19:13:47 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
  Cat(void);
  Cat(const Cat &other);
  virtual ~Cat(void);

  Cat &operator=(const Cat &other);

  void makeSound(void) const;
  Brain *getBrain() const;

protected:
private:
  Brain *brain;
};

#endif
