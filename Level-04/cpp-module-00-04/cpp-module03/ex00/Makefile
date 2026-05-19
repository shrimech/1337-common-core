# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/31 05:43:57 by shrimech          #+#    #+#              #
#    Updated: 2025/12/31 21:18:00 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: ClapTrap

ClapTrap: ClapTrap.o main.o
	c++ -Wall -Wextra -Werror -std=c++98 -o ClapTrap ClapTrap.o main.o

ClapTrap.o main.o: ClapTrap.cpp main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp -o ClapTrap.o
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o

clean:
	rm -f ClapTrap.o main.o

fclean: clean
	rm -f ClapTrap

re: fclean all

.PHONY: all clean fclean re