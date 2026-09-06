C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = 	main.cpp\
			BitcoinExchange.cpp\

OBJCT = $(SRCS:.cpp=.o)

NAME = btc

all: install $(NAME)
$(NAME):$(OBJCT)
	$(C++) $(C++_FLAGS) $(OBJCT) -o $(NAME) 

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

install: data.csv input.txt

data.csv:
	wget https://cdn.intra.42.fr/document/document/56838/cpp_09.tgz
	@tar -xzf cpp_09.tgz
	@cp cpp_09/data.csv $@
	@rm -rf cpp_09 cpp_09.tgz

input.txt:
	@echo "date | value\n2011-01-03 | 3\n2011-01-03 | 2\n2011-01-03 | 1\n2011-01-03 | 1.2\n2011-01-09 | 1\n2012-01-11 | -1\n2001-42-42\n2012-01-11 | 1\n2012-01-11 | 2147483648" > input.txt

clean:
	rm -f $(OBJCT)

fclean: clean
	rm -f $(NAME)

clear: fclean
	rm -f input.txt data.csv

re: fclean all

.PHONY: all clean fclean re