# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/14 21:01:58 by yoshin            #+#    #+#              #
#    Updated: 2026/01/06 18:45:27 by yoshin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
HEADERS = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(patsubst %.cpp, %.o, $(SRCS))

fclean: clean
	rm -f $(NAME)

re: fclean all

dev:
	$(CXX) $(CXXFLAGS) -g -DDEBUG $(SRCS) -o $(NAME)

.PHONY: all clean fclean re dev
