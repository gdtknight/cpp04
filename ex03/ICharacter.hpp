/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:12:41 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/12 16:33:25 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter {
public:
  virtual ~ICharacter() {}
  virtual std::string const &getName() const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
};

#endif
