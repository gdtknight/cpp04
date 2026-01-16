/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:37:34 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/15 11:01:46 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "Amateria.hpp"

class Cure : public AMateria {
public:
  Cure();
  Cure(Cure const &src);
  virtual ~Cure();

  Cure &operator=(Cure const &rhs);

  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};

#endif
