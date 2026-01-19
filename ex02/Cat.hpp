/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:01:51 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:24:18 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
public:
  Cat(void);
  Cat(Cat const &other);
  virtual ~Cat(void);

  Cat &operator=(Cat const &other);

  void makeSound(void) const;

protected:
private:
  Brain *brain;
};

#endif
