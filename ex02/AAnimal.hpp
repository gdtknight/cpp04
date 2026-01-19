/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:57:42 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/18 21:21:51 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal {
public:
  AAnimal(void);
  AAnimal(std::string const &type);
  AAnimal(AAnimal const &other);
  virtual ~AAnimal(void);

  AAnimal &operator=(AAnimal const &other);

  const std::string &getType(void) const;
  virtual void makeSound(void) const = 0;

protected:
  std::string type;

private:
};

#endif
