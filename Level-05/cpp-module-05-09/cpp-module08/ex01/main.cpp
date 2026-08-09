#include "Span.h"
#include <vector>
int main() {
    Span sp(1);
    // try {
    //     sp.addNumber(0);
    //     sp.addNumber(6);
    //     sp.addNumber(3);
    //     sp.addNumber(17);
    //     sp.addNumber(9);
    //     sp.addNumber(11);
    //     sp.addNumber(991);
    //     sp.addNumber(99);
    //     sp.addNumber(56);
    //     sp.addNumber(561);
    //     sp.addNumber(745);
    //     sp.addNumber(7);
    //     sp.addNumber(7102);
    //     sp.addNumber(710);
    //     sp.addNumber(7078);
    //     sp.addNumber(707);
    //     sp.addNumber(70);
    //     sp.addNumber(237);
    //     sp.addNumber(2543);
    //     sp.addNumber(254);
    //     sp.addNumber(25);
    //     sp.addNumber(2);
    //     sp.addNumber(892);
    //     sp.addNumber(0);
    //     sp.addNumber(2474);
    //     sp.addNumber(2473);
    //     sp.addNumber(2473);
    //     sp.addNumber(29);
    // } catch (const std::exception &e) {
    //     std::cerr << "Error: " << e.what() << std::endl;
    // }

    std::vector<int> numbers;
    for (int i = 1; i <= 50000; ++i)
        numbers.push_back(i);
    try {
        sp.addNumber(numbers.begin(), numbers.end());
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    try{
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try{
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}