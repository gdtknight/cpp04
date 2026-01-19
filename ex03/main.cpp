/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:50:19 by yoshin            #+#    #+#             */
/*   Updated: 2026/01/19 13:50:19 by yoshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

void print_header(const std::string& title)
{
	std::cout << "\n\n--- " << title << " ---\n" << std::endl;
}

int main()
{
	// 기본 기능 테스트
	print_header("Basic Functionality Test (from PDF)");
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		std::cout << "me uses ice and cure on bob:" << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	// 깊은 복사 테스트
	print_header("Deep Copy Test");
	{
		// 복사 생성자
		std::cout << "* Copy Constructor *" << std::endl;
		Character* original = new Character("original");
		original->equip(new Ice());

		Character* copy = new Character(*original);
		std::cout << "Copied " << copy->getName() << " from " << original->getName() << std::endl;
		
		std::cout << "-> Deleting original..." << std::endl;
		delete original; // 원본을 삭제해도 복사본은 영향을 받지 않아야 함

		std::cout << "-> Copy uses its materia:" << std::endl;
		Character target("target");
		copy->use(0, target); // 여기서 충돌 없이 실행되면 깊은 복사 성공
		delete copy;

		std::cout << "\n* Copy Assignment Operator *" << std::endl;
		Character* c1 = new Character("c1");
		c1->equip(new Cure());
		Character* c2 = new Character("c2");
		
		*c2 = *c1; // 대입
		std::cout << "Assigned c1 to c2. c2's name is now: " << c2->getName() << std::endl;

		std::cout << "-> Deleting c1..." << std::endl;
		delete c1;

		std::cout << "-> c2 uses its materia:" << std::endl;
		c2->use(0, target);
		delete c2;
	}

	// unequip 및 메모리 관리 테스트
	print_header("Unequip and Memory Management Test");
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		ICharacter* player = new Character("player");
		
		AMateria* ice_to_equip = src->createMateria("ice");
		player->equip(ice_to_equip);
		player->use(0, *player);

		std::cout << "-> Unequipping ice..." << std::endl;
		player->unequip(0); // 포인터만 제거, Materia 자체는 삭제되지 않음

		std::cout << "-> Trying to use slot 0 after unequip:" << std::endl;
		player->use(0, *player); // 아무 일도 일어나지 않아야 함

		std::cout << "-> Manually deleting the unequipped materia..." << std::endl;
		delete ice_to_equip; // 여기서 삭제해주지 않으면 메모리 누수 발생

		delete player;
		delete src;
	}

	// 예외/경계 조건 테스트
	print_header("Edge Case Test");
	{
		ICharacter* hero = new Character("hero");
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Cure());

		// 1. 인벤토리 채우기
		std::cout << "-> Filling inventory..." << std::endl;
		hero->equip(src->createMateria("cure"));
		hero->equip(src->createMateria("cure"));
		hero->equip(src->createMateria("cure"));
		hero->equip(src->createMateria("cure"));
		
		// 2. 꽉 찬 인벤토리에 추가 장착 시도
		std::cout << "\n-> Trying to equip to a full inventory..." << std::endl;
		AMateria* extra = src->createMateria("cure");
		hero->equip(extra); // 장착되지 않아야 함
		std::cout << "Extra materia was not equipped. Manually deleting it." << std::endl;
		delete extra; // 따라서 직접 삭제해야 함

		// 3. 유효하지 않은 슬롯 사용 시도
		std::cout << "\n-> Trying to use invalid slots..." << std::endl;
		hero->use(4, *hero);
		hero->use(-1, *hero);

		// 4. 알 수 없는 Materia 생성 시도
		std::cout << "\n-> Trying to create an unknown materia..." << std::endl;
		AMateria* unknown = src->createMateria("fire");
		if (unknown == NULL)
			std::cout << "Correctly returned NULL for unknown type." << std::endl;
		
		delete hero;
		delete src;
	}

	// system("leaks magic_world");
	return 0;
}
