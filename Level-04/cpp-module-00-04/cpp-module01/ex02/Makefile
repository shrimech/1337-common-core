# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 02:07:06 by shrimech          #+#    #+#              #
#    Updated: 2025/12/04 02:23:00 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# MAKEFLAGS = -s

all: ex02

ex02: main.o
	c++ -Wall -Wextra -Werror -std=c++98 main.o -o ex02

main.o: main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o


clean:
	rm -f main.o

fclean: clean
	rm -f ex02

re: fclean all

.PHONY: all clean fclean re