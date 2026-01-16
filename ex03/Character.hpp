/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:15:01 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/16 14:15:59 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Amateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
public:
  Character(void);
  Character(const std::string &name);
  Character(const Character &src);
  ~Character(void);

  Character &operator=(const Character &rhs);

  virtual std::string const &getName() const;
  virtual void equip(AMateria *m);
  virtual void unequip(int idx);
  virtual void use(int idx, ICharacter &target);

private:
  std::string name;
  AMateria *inventory[4];
};

#endif
