#include "Span.h"


Span::~Span() {}
Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}


Span::Span(const Span &other) : _n(other._n), _vec(other._vec) {}


unsigned int Span::longestSpan() {
    if (_vec.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    std::vector<int> sortedVec = _vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    return sortedVec.back() - sortedVec.front();
}


unsigned int Span::shortestSpan() {
    if (_vec.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    std::vector<int> sortedVec = _vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    unsigned int minSpan = std::numeric_limits<unsigned int>::max();
    for (size_t i = 1; i < sortedVec.size(); ++i) {
        unsigned int span = sortedVec[i] - sortedVec[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

void Span::addNumber(int number) {
    if (_vec.size() >= _n)
        throw std::runtime_error("Span is full");
    _vec.push_back(number);
}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _n = other._n;
        _vec = other._vec;
    }
    return *this;
}

