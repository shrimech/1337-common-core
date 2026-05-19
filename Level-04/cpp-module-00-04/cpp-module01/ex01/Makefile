# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/01 03:10:22 by shrimech          #+#    #+#              #
#    Updated: 2025/12/01 03:10:44 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# MAKEFLAGS = -s

all: Zombie

Zombie: Zombie.o main.o
	c++ -Wall -Wextra -Werror -std=c++98 -o Zombie Zombie.o main.o

main.o: main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o
Zombie.o: Zombie.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c Zombie.cpp -o Zombie.o

clean:
	rm -f Zombie.o main.o

fclean: clean
	rm -f Zombie

re: fclean all

.PHONY: all clean fclean re