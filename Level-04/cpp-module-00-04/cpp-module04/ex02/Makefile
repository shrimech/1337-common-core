# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/03 00:18:36 by shrimech          #+#    #+#              #
#    Updated: 2026/01/08 18:51:19 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

srcs = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
objs = $(srcs:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
NAME = animals
all: $(NAME)

$(NAME): $(objs)
	$(CXX) $(CXXFLAGS) -o $@ $^
clean:
	rm -f $(objs)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re