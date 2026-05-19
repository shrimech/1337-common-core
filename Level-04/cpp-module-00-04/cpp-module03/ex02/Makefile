# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/31 05:43:57 by shrimech          #+#    #+#              #
#    Updated: 2026/01/01 05:14:33 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: FragTrap

FragTrap: ClapTrap.o ScavTrap.o main.o FragTrap.o
	c++ -Wall -Wextra -Werror -std=c++98 -o FragTrap ClapTrap.o main.o ScavTrap.o FragTrap.o

ClapTrap.o ScavTrap.o main.o: ClapTrap.cpp ScavTrap.cpp main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp -o ClapTrap.o
	c++ -Wall -Wextra -Werror -std=c++98 -c ScavTrap.cpp -o ScavTrap.o
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o
	c++ -Wall -Wextra -Werror -std=c++98 -c FragTrap.cpp -o FragTrap.o

clean:
	rm -f ClapTrap.o ScavTrap.o main.o FragTrap.o

fclean: clean
	rm -f FragTrap

re: fclean all

.PHONY: all clean fclean re