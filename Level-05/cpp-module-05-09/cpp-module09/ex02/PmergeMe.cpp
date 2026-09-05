#include "PmergeMe.hpp"

std::vector<int> PmergeMe::generateSequence(int n)
{
    std::vector<int> Sequence;

    Sequence.push_back(1);

    int a = 1, b = 3, c = 1;

    int currentJacob = 0;

    while (b <= n)
    {
        Sequence.push_back(b);

        for (int i = b - 1; i > c; i--)
            Sequence.push_back(i);

        c = b;
        currentJacob = b + 2 * a;
        a = b;
        b = currentJacob;
    }

    for (int i = n; i > c; --i)
        Sequence.push_back(i);

    return Sequence;
}

// int main(){
//     std::vector<int> a = generateSequence(10);
//     for (int i= 0 ; i < a.size() ; i++) 
//         std::cout << a[i] << std::endl;
// }

std::vector<int> PmergeMe::sortVector(std::vector<int> &vec)
{
    if (vec.size() < 2)
        return vec;

    if (vec.size() == 2)
    {
        if (vec[0] > vec[1])
            std::swap(vec[0], vec[1]);
        return vec;
    }

    int oddNumber = -1;
    if (vec.size() % 2 != 0)
    {
        oddNumber = vec.back();
        vec.pop_back();
    }

    std::vector<int> small;
    std::vector<int> big;

    for (size_t i = 0; i < vec.size(); i += 2)
    {
        if (vec[i] > vec[i + 1])
        {
            small.push_back(vec[i + 1]);
            big.push_back(vec[i]);
        }
        else
        {
            small.push_back(vec[i]);
            big.push_back(vec[i + 1]);
        }
    }

    std::vector<int> bigTmp = big;
    std::vector<int> sortedA = PmergeMe::sortVector(bigTmp);

    std::vector<int> sortedB(sortedA.size());
    std::vector<bool> used(big.size(), false);

    for (size_t i = 0; i < sortedA.size(); i++)
    {
        for (size_t j = 0; j < sortedA.size(); j++)
        {
            if (sortedA[i] == big[j]  && !used[j])
            {
                sortedB[i] = small[j];
                used[j] = true;
                break;
            }
        }
    }

    std::vector<int> res;
    res.push_back(sortedB[0]);

    std::vector<int> rest(sortedB.size() - 1);

    for (size_t i = 1; i < sortedB.size(); i++)
        rest[i - 1] = sortedB[i];

    for (size_t i = 0; i < sortedA.size(); i++)
        res.push_back(sortedA[i]);

    if (oddNumber != -1)
        rest.push_back(oddNumber);

    std::vector<int> order = generateSequence(rest.size());

    for (size_t i = 0; i < order.size(); i++)
    {
        size_t idx = order[i] - 1;
        int target = rest[idx];

        std::vector<int>::iterator bound;

        int dec = oddNumber == -1 ? 0 : 1;
        if (idx < rest.size() - dec)
        {
            int pairedWinner = sortedA[idx + 1];
            bound = std::find(res.begin(), res.end(), pairedWinner);
        }
        else
            bound = res.end();

        std::vector<int>::iterator pos = std::lower_bound(res.begin(), bound, target);

        res.insert(pos, target);
    }

    vec = res;
    return vec;
}

std::deque<int> PmergeMe::sortDeque(std::deque<int> &deq)
{
    if (deq.size() < 2)
        return deq;

    if (deq.size() == 2)
    {
        if (deq[0] > deq[1])
            std::swap(deq[0], deq[1]);
        return deq;
    }

    int oddNumber = -1;
    if (deq.size() % 2 != 0)
    {
        oddNumber = deq.back();
        deq.pop_back();
    }

    std::deque<int> small;
    std::deque<int> big;

    for (size_t i = 0; i < deq.size(); i += 2)
    {
        if (deq[i] > deq[i + 1])
        {
            small.push_back(deq[i + 1]);
            big.push_back(deq[i]);
        }
        else
        {
            small.push_back(deq[i]);
            big.push_back(deq[i + 1]);
        }
    }

    std::deque<int> bigTmp = big;
    std::deque<int> sortedA = PmergeMe::sortDeque(bigTmp);

    std::deque<int> sortedB(sortedA.size());
    std::vector<bool> used(big.size(), false);

    for (size_t i = 0; i < sortedA.size(); i++)
    {
        for (size_t j = 0; j < sortedA.size(); j++)
        {
            if (big[j] == sortedA[i] && !used[j])
            {
                sortedB[i] = small[j];
                used[j] = true;
                break;
            }
        }
    }

    std::deque<int> res;
    res.push_back(sortedB[0]);

    std::deque<int> rest(sortedB.size() - 1);

    for (size_t i = 1; i < sortedB.size(); i++)
        rest[i - 1] = sortedB[i];

    for (size_t i = 0; i < sortedA.size(); i++)
        res.push_back(sortedA[i]);

    if (oddNumber != -1)
        rest.push_back(oddNumber);

    std::vector<int> order = generateSequence(rest.size());
    for (size_t i = 0; i < order.size(); i++)
    {
        size_t idx = order[i] - 1;
        int target = rest[idx];

        std::deque<int>::iterator bound;

        int dec = oddNumber == -1 ? 0 : 1;
        if (idx < rest.size() - dec)
        {
            int pairedWinner = sortedA[idx + 1];
            bound = std::find(res.begin(), res.end(), pairedWinner);
        }
        else
            bound = res.end();

        std::deque<int>::iterator pos = std::lower_bound(res.begin(), bound, target);

        res.insert(pos, target);
    }
    deq = res;
    return deq;
}

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    _vectorData = other._vectorData;
    _dequeData = other._dequeData;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        _vectorData = other._vectorData;
        _dequeData = other._dequeData;
    }
    return *this;
}

void PmergeMe::processInput(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i)
    {
        std::string arg = argv[i];
        if (arg.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
            throw std::exception();

        std::stringstream ss(arg);
        std::string num;

        while (ss >> num)
        {
            for (size_t j = 0; j < num.length(); ++j)
            {
                if (j == 0 && num[j] == '+')
                    continue;
                if (!isdigit(num[j]))
                    throw std::exception();
            }

            long value = std::atol(num.c_str());

            if (std::find(_vectorData.begin(), _vectorData.end(), value) != _vectorData.end())
                throw std::exception();

            if (value < 0 || value > INT_MAX)
                throw std::exception();

            _vectorData.push_back(static_cast<int>(value));
            _dequeData.push_back(static_cast<int>(value));
        }
    }

    if (_vectorData.size() < 2 || _dequeData.size() < 2)
        throw std::exception();
}

void PmergeMe::sortData()
{
    struct timeval start, end;

    gettimeofday(&start, NULL);
    sortVector(_vectorData);
    gettimeofday(&end, NULL);
    _vectorTime = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);

    gettimeofday(&start, NULL);
    sortDeque(_dequeData);
    gettimeofday(&end, NULL);
    _dequeTime = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);
}

void PmergeMe::printResults(char **argv, int argc) const
{
    std::cout << "Before: ";
    for (int i = 1; i < argc; ++i)
        std::cout << argv[i] << " ";
    std::cout << std::endl;

    std::cout << "After:  ";
    for (size_t i = 0; i < _vectorData.size(); ++i)
        std::cout << _vectorData[i] << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of " << _vectorData.size()
              << " elements with std::vector : " << _vectorTime << " us" << std::endl;

    std::cout << "Time to process a range of " << _dequeData.size()
              << " elements with std::deque  : " << _dequeTime << " us" << std::endl;
}

PmergeMe::~PmergeMe() {}