#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

class BitcoinExchange {
    private:
        std::map<std::string, double> exchangeRates;

public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);

    void loadData(const std::string& filename);
    void processInput(const std::string& filename);
    
    double getExchangeRate(const std::string& date){};

    class InvalidDateException : public std::exception {
        public:
            const char* what() throw() {
                return "Error: Invalid date format.";
            }
    };
    
    class InvalidValueException : public std::exception {
        public:
            const char* what() throw() {
                return "Error: Invalid value.";
            }
    };

};
#endif