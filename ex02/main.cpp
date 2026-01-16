/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:44:52 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 19:19:50 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  // AAnimal 은 가상함수 makeSound 를 가지고 있음.
  // makeSound 의 구현이 존재하지 않으므로 인스턴스화가 불가능.
  // const AAnimal *aa = new AAnimal();
  const AAnimal *j = new Dog();
  const AAnimal *i = new Cat();

  delete j; // should not create a leak
  delete i;

  return 0;
}
