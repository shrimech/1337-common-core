# MAKEFLAGS = -s

all: megaphone

megaphone: megaphone.o
	c++ -Wall -Wextra -Werror -std=c++98 -o megaphone megaphone.o

megaphone.o: megaphone.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c megaphone.cpp -o megaphone.o

clean:
	rm -f megaphone.o

fclean: clean
	rm -f megaphone

re: fclean all

.PHONY: all clean fclean re