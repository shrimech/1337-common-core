C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98
INFILES = 	main.cpp\
			BitcoinExchange.cpp\

OBJFILES = $(INFILES:.cpp=.o)

NAME = btc

all: $(NAME) install

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

install:
	wget https://cdn.intra.42.fr/document/document/52890/cpp_09.tgz
	tar -xzf cpp_09.tgz
	cp cpp_09/data.csv ./data.csv
	rm -rf cpp_09 cpp_09.tgz
	echo "date | value\n2011-01-03 | 3\n2011-01-03 | 2\n2011-01-03 | 1\n2011-01-03 | 1.2\n2011-01-09 | 1\n2012-01-11 | -1\n2001-42-42\n2012-01-11 | 1\n2012-01-11 | 2147483648" > input.txt

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

clear: fclean
	rm -f input.txt data.csv

re: fclean all

.PHONY: all clean fclean re