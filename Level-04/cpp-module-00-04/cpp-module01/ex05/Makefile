# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 16:50:37 by shrimech          #+#    #+#              #
#    Updated: 2025/12/10 17:00:28 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: ex05

ex05: Harl.o
	c++ -Wall -Wextra -Werror -std=c++98 Harl.o -o ex05

Harl.o: Harl.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c Harl.cpp -o Harl.o


clean:
	rm -f Harl.o

fclean: clean
	rm -f ex05

re: fclean all

.PHONY: all clean fclean re