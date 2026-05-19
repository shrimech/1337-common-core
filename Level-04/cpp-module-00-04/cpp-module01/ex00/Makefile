# MAKEFLAGS = -s

all: Zombie

Zombie: Zombie.o main.o
	c++ -Wall -Wextra -Werror -std=c++98 Zombie.o main.o -o Zombie

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