/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:34:32 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/12 16:34:45 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "Amateria.hpp"

class Ice : public AMateria {
public:
  Ice();
  Ice(Ice const &src);
  virtual ~Ice();

  Ice &operator=(Ice const &rhs);

  virtual AMateria *clone() const;
  virtual void use(ICharacter &target);
};

#endif
