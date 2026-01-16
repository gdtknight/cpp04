#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

void print_header(const std::string &title) {
  std::cout << "\n--- " << title << " ---\n" << std::endl;
}

int main() {
  // 1. 과제 PDF에서 요구한 배열 테스트
  print_header("Array Test");
  const int animal_count = 4;
  Animal *animals[animal_count];

  for (int i = 0; i < animal_count; i++) {
    if (i < animal_count / 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
    std::cout << "Created " << animals[i]->getType() << std::endl;
  }

  std::cout << std::endl;

  for (int i = 0; i < animal_count; i++) {
    delete animals[i];
  }

  // 2. 깊은 복사 테스트
  print_header("Deep Copy Test");

  // 복사 생성자 테스트
  std::cout << "* Copy Constructor Test *" << std::endl;
  Dog *original_dog = new Dog();
  original_dog->getBrain()->setIdeaAt(
      0,
      "Original Idea"); // Brain에 접근하기 위해 getBrain() 함수가 필요합니다.

  Dog *copied_dog = new Dog(*original_dog);

  std::cout << "Original Dog's Idea: " << original_dog->getBrain()->getIdeaAt(0)
            << std::endl;
  std::cout << "Copied Dog's Idea: " << copied_dog->getBrain()->getIdeaAt(0)
            << std::endl;

  std::cout << "\n-> Modifying original dog's brain...\n" << std::endl;
  original_dog->getBrain()->setIdeaAt(0, "New Idea!");

  std::cout << "Original Dog's Idea: " << original_dog->getBrain()->getIdeaAt(0)
            << std::endl;
  std::cout << "Copied Dog's Idea: " << copied_dog->getBrain()->getIdeaAt(0)
            << " (Should be 'Original Idea')" << std::endl;

  delete original_dog;
  delete copied_dog;

  std::cout << std::endl;

  // 복사 대입 연산자 테스트
  std::cout << "* Copy Assignment Operator Test *" << std::endl;
  Cat *cat1 = new Cat();
  cat1->getBrain()->setIdeaAt(0, "Cat 1 Idea");

  Cat *cat2 = new Cat();
  cat2->getBrain()->setIdeaAt(0, "Cat 2 Idea");

  std::cout << "Before assignment, Cat2's idea: "
            << cat2->getBrain()->getIdeaAt(0) << std::endl;
  *cat2 = *cat1; // 대입 연산자 호출
  std::cout << "After assignment, Cat2's idea: "
            << cat2->getBrain()->getIdeaAt(0) << std::endl;

  std::cout << "\n-> Modifying cat1's brain...\n" << std::endl;
  cat1->getBrain()->setIdeaAt(0, "New Cat 1 Idea!");

  std::cout << "Cat1's Idea: " << cat1->getBrain()->getIdeaAt(0) << std::endl;
  std::cout << "Cat2's Idea: " << cat2->getBrain()->getIdeaAt(0)
            << " (Should be 'Cat 1 Idea')" << std::endl;

  delete cat1;
  delete cat2;

  print_header("Test Complete");

  // 시스템 누수 확인 (macOS)
  // system("leaks animal");

  return 0;
}
