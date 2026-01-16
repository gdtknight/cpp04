/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:34:18 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/15 12:14:49 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
  MateriaSource();
  MateriaSource(const MateriaSource &src);
  virtual ~MateriaSource();

  MateriaSource &operator=(MateriaSource const &rhs);

  virtual void learnMateria(AMateria *);
  virtual AMateria *createMateria(const std::string &type);

private:
  AMateria *templates[4];
};

#endif
