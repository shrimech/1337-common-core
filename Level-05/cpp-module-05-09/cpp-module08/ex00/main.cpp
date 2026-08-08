#include "easyfind.h"

int main() { 
    std::vector<int> vec; 
    vec.push_back(1); 
    vec.push_back(2); 
    vec.push_back(8); 
    vec.push_back(3); 
    vec.push_back(5); 
    std::vector<std::string> strVec;
    strVec.push_back("hello"); 
    strVec.push_back("world"); 
    strVec.push_back("foo");
    strVec.push_back("bar");
    
    
    try {
        std::vector<int>::iterator it = easyfind(vec, 3); 
        std::cout << "Found value: " << *it << std::endl; 
    } catch (const std::runtime_error &e) { 
        std::cerr << e.what() << std::endl; 
    } 
    try { 
        std::vector<int>::iterator it = easyfind(vec, 6); 
        std::cout << "Found value: " << *it << std::endl; 
    } catch (const std::runtime_error &e) { 
        std::cerr << e.what() << std::endl; 
    }
    
    
    try { 
        std::vector<std::string>::iterator it = easyfind(strVec, "foo"); 
        std::cout << "Found value: " << *it << std::endl; 
    } catch (const std::runtime_error &e) { 
        std::cerr << e.what() << std::endl; 
    }
    try { 
        std::vector<std::string>::iterator it = easyfind(strVec, "baz"); 
        std::cout << "Found value: " << *it << std::endl; 
    } catch (const std::runtime_error &e) { 
        std::cerr << e.what() << std::endl; 
    }
    return 0; 
}