/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:50:13 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/13 13:50:13 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
protected:
  std::string type;

public:
  WrongAnimal();
  WrongAnimal(std::string const &type);
  WrongAnimal(WrongAnimal const &src);
  ~WrongAnimal();

  WrongAnimal &operator=(WrongAnimal const &rhs);

  // virtual 생략되어 있으면 실제 구현이 아닌 Caller 의 타입에
  // 따라 해당 함수가 호출됨

  std::string const &getType() const;
  void makeSound() const;
};

#endif
