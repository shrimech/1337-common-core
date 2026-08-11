#include "BitcoinExchange.h"


BitcoinExchange::BitcoinExchange() : exchangeRates() {}

BitcoinExchange::~BitcoinExchange() {}


BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : exchangeRates(other.exchangeRates) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        exchangeRates = other.exchangeRates;
    }
    return *this;
}

void BitcoinExchange::loadData(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Error: Could not open data file.");
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date;
        double rate;
        if (!(iss >> date >> rate)) {
            throw InvalidDateException();
        }
        exchangeRates[date] = rate;
    }
}


void BitcoinExchange::processInput(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Error: Could not open input file.");
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date;
        double value;
        if (!(iss >> date >> value)) {
            throw InvalidDateException();
        }
        if (value < 0) {
            throw InvalidValueException();
        }
        double rate = getExchangeRate(date);
        std::cout << date << " => " << value << " = " << value * rate << std::endl;
    }
}

