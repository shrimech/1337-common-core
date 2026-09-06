#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <climits>
#include <deque>
#include <exception>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <sys/time.h>
#include <vector>

class PmergeMe
{
private:
    std::vector<int> _vector;
    std::deque<int> _deque;

    double timev;
    double timed;

    std::vector<int> generateSequence(int n);

    std::vector<int> sortV(std::vector<int> &vec);
    std::deque<int> sortD(std::deque<int> &deq);

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