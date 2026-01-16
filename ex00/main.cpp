/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 18:44:52 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/06 18:50:29 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main() {
  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  const WrongAnimal *wa = new WrongAnimal();
  const WrongAnimal *wcat = new WrongCat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  delete meta;
  delete j;
  delete i;

  std::cout << "\n====== WrongAnimal & WrongCat ======\n" << std::endl;
  std::cout << wa->getType() << " " << std::endl;
  std::cout << wcat->getType() << " " << std::endl;
  wcat->makeSound();
  wa->makeSound();
  delete wa;
  delete wcat;
  return 0;
}
