#include "BitcoinExchange.hpp"


// Constructors

BitcoinExchange::BitcoinExchange()
{
	loadRates();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other)
{
	if (this != &other)
		*this = other;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &other)
{
	if (this != &other)
		_rates = other._rates;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

// Getters
std::map<std::string, double> const &BitcoinExchange::getRates() const
{
	return (_rates);
}

void BitcoinExchange::loadRates()
{
       std::ifstream file("data.csv");
        if (!file.is_open())
            throw CouldNotOpenFile();

        std::string line;

        //// Check if first line is date,exchange_rate
        std::getline(file, line);
        if (line != "date,exchange_rate")
            throw InvalidColumnFormat();

        while (std::getline(file, line))
		{
            std::string date, price;
            std::istringstream ss(line);
            std::getline(ss, date, ',');
            std::getline(ss, price, ',');

            // Parse price using istringstream
            double priceValue;
            std::istringstream priceStream(price);
            if (!(priceStream >> priceValue))
				throw InvalidPriceFormat();
			_rates[date] = priceValue;
        }

        file.close();
}

void BitcoinExchange::processFile(char const *fileName)
{
	std::ifstream file(fileName);
	if (!file.is_open())
		throw CouldNotOpenFile();

	std::string line;

	// Check if first line is date,exchange_rate
	std::getline(file, line);
	if (line != "date | value")
		throw InvalidColumnFormat();

	while (std::getline(file, line))
	{
		std::string date;
		std::string valueStr;
		double priceValue;
		std::istringstream ss(line);
		std::getline(ss, date, '|');
		std::getline(ss, valueStr, '|');

		// Validate date format.
		if (!date.empty())
			date = date.erase(date.length() -1);
		if (isValidDate(date) == false)
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue;
		}

		// Parse price using istringstream
		if(!valueStr.empty())
			valueStr = valueStr.erase(0, 1);
		priceValue = getValue(valueStr);
		if (priceValue != -1)
			printResult(date, priceValue);
		
	}

	file.close();
}

// Validate date format that it contains only numbers and '-'. And the month block is between 01 and 12 and the day block is between 01 and 31.
bool BitcoinExchange::isValidDate(std::string const &date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return (false);
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (isdigit(date[i]) == 0)
			return (false);
	}

	if (date[5] == '0' && date[6] == '0') 
		return (false);
	if ((date[5] == '1' && date[6] > '2') || date[5] > '1')
		return (false);

	if (date[8] == '0' && date[9] == '0')
		return (false);
	if ((date[8] == '3' && date[9] > '1') || date[8] > '3')
		return (false);
	
	return (true);
}

double BitcoinExchange::getValue(std::string const &valueStr)
{
	double priceValue;
	std::istringstream priceStream(valueStr);

	if (!(priceStream >> priceValue))
	{
		std::cout << "Error: bad value input => " << priceValue << std::endl;
		return (-1);
	}

	if (priceValue < 0)
	{
		std::cout << "Error: not a positive number => " << priceValue << std::endl;
		return (-1);
	}
	else if (priceValue > 1000)
	{
		std::cout << "Error: too large number => " << priceValue << std::endl;
		return (-1);
	}
	
	return (priceValue);
}

// printResult multiplies the value by the rate for the date, or by the closest earlier rate.
void BitcoinExchange::printResult(std::string const &date, double value)
{
	std::map<std::string, double>::iterator it = _rates.find(date);
	if (it != _rates.end())
		std::cout << date << " | " << value << " | " << value * it->second << std::endl;
	else
	{
		std::map<std::string, double>::iterator it2 = _rates.lower_bound(date);
		if (it2 == _rates.begin())
			std::cout << date << " | " << value << " | " << value * it2->second << std::endl;
		else
		{
			it2--;
			std::cout << date << " | " << value << " | " << value * it2->second << std::endl;
		}
	}
}
