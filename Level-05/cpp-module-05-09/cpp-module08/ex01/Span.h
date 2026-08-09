#ifndef SPAN_H
#define SPAN_H


#include <algorithm>
#include <iterator>
#include <iostream>
#include <limits>
#include <vector>

class Span {
    private:
        unsigned int _n;
        std::vector<int> _vec;
    public:
        Span() ;
        Span(const Span &other) ;
        ~Span() ;

        Span(unsigned int n) ;

        Span &operator=(const Span &other) ;

        void addNumber(int number) ;
        unsigned int shortestSpan() ;
        unsigned int longestSpan() ;

        template <typename InputIterator>
        void addNumber(InputIterator begin, InputIterator end) {
            for (InputIterator it = begin; it != end; ++it) {
                addNumber(*it);
            }
        }
        






};

#endif