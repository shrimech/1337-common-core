#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <climits>
#include <cstdlib>
#include <deque>
#include <exception>
#include <iostream>
#include <sstream>
#include <sys/time.h>
#include <utility>
#include <vector>

class PmergeMe
{
private:
    std::vector<int> _vectorData;
    std::deque<int> _dequeData;

    double _vectorTime;
    double _dequeTime;

    std::vector<int> generateJacobsthal(int n);

    std::vector<int> sortVector(std::vector<int> &vec);
    std::deque<int> sortDeque(std::deque<int> &deq);

public:
    PmergeMe();
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);

    void processInput(int argc, char **argv);
    void sortData();
    void printResults(char **argv, int argc) const;

    ~PmergeMe();
};

#endif