#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP


#include <ctime>
#include <cstdlib>
# include <iostream>
# include <fstream>
# include <sstream>
# include <map>
# include <exception>
# include <string>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_rates;
		void loadRates();
		bool isValidDate(std::string const &date);
		double getValue(std::string const &value);
		void printResult(std::string const &date, double value);
	
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &other);
		BitcoinExchange &operator=(BitcoinExchange const &other);
		~BitcoinExchange();

		std::map<std::string, double> const &getRates() const;
		void processFile(char const *fileName);


		class CouldNotOpenFile : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Could not open file");
				}
		};

		class InvalidColumnFormat : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Invalid column format. Expected 'date,exchange_rate'");
				}
		};


		class InvalidPriceFormat : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Invalid price format. Expected a number between 0.0 and 1000.0");
				}
		};
};

#endif
