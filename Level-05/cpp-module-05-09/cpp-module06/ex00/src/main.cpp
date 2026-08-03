#include "../include/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	try
	{
		ScalarConverter::convert(argv[1]);
	}
	catch(const ScalarConverter::ErrorException &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}