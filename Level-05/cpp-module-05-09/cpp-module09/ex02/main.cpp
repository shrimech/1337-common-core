#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr << "Usage: " << argv[0] << " <numbers...>" << std::endl;
        return 1;
    }

    PmergeMe sorter;

    try
    {
		sorter.processInput(argc, argv);
		sorter.sortData();
		sorter.printResults(argv, argc);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error" << std::endl; 
        return 1;
    }

    return 0;
}