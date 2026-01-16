/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:57:42 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/11 18:10:23 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal {
public:
  AAnimal(void);
  AAnimal(const std::string &type);
  AAnimal(const AAnimal &other);
  virtual ~AAnimal(void);

  AAnimal &operator=(const AAnimal &other);

  const std::string &getType(void) const;
  virtual void makeSound(void) const = 0;

protected:
  std::string type;

private:
};

#endif
