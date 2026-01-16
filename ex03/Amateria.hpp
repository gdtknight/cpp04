/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:12:02 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/16 14:23:19 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria {
public:
  AMateria(void);
  AMateria(std::string const &type);
  AMateria(AMateria const &src);
  virtual ~AMateria();

  AMateria &operator=(AMateria const &rhs);

  std::string const &getType() const;

  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);

protected:
  std::string type;
};

#endif
