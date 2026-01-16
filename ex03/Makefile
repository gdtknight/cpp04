# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/14 21:01:58 by yoshin            #+#    #+#              #
#    Updated: 2026/01/16 14:22:54 by yoshin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = magic_world
SRCS = main.cpp Amateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp
HEADERS = Amateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp
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
