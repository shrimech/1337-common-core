#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <iostream>


template <typename T>
class MutantStack : public std::stack<T> {
    public:

        // Define iterator types
       typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        // Begin and end functions for iteration
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
        const_iterator begin() const { return this->c.begin(); }
        const_iterator end() const { return this->c.end(); }
};


#endif