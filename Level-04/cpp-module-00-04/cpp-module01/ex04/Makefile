# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/04 08:10:45 by shrimech          #+#    #+#              #
#    Updated: 2025/12/10 14:43:53 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: ex04

ex04: main.o
	c++ -Wall -Wextra -Werror -std=c++98 main.o -o ex04

main.o: main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o


clean:
	rm -f main.o

fclean: clean
	rm -f ex04

re: fclean all

.PHONY: all clean fclean re