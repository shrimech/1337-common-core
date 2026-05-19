# MAKEFLAGS = -s

all: phonebook

phonebook: PhoneBook.o SetGet.o
	c++ -Wall -Wextra -Werror -std=c++98 -o phonebook PhoneBook.o SetGet.o

PhoneBook.o: PhoneBook.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c PhoneBook.cpp -o PhoneBook.o
SetGet.o: SetGet.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c SetGet.cpp -o SetGet.o
clean:
	rm -f PhoneBook.o SetGet.o

fclean: clean
	rm -f phonebook

re: fclean all

.PHONY: all clean fclean re