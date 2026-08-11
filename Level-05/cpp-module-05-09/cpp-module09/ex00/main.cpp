#include "BitcoinExchange.h"



int main(int ac, char* argv[]) {
    if (ac != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    BitcoinExchange bitcoinExchange;

    try {
        bitcoinExchange.loadData("data.csv");
        bitcoinExchange.processInput(argv[1]);
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}