# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/29 23:00:09 by shrimech          #+#    #+#              #
#    Updated: 2025/12/30 00:25:35 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: Fixed

Fixed: Fixed.o main.o
	c++ -Wall -Wextra -Werror -std=c++98 -o Fixed Fixed.o main.o

Fixed.o main.o: Fixed.cpp main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c Fixed.cpp -o Fixed.o
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o

clean:
	rm -f Fixed.o main.o

fclean: clean
	rm -f Fixed

re: fclean all

.PHONY: all clean fclean re