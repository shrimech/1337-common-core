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
            std::getline(ss, price);

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
		std::getline(ss, valueStr);

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

bool BitcoinExchange::isValidDate(std::string const &date)
{
    if (date.size() != 10)
        return false;

    if (date[4] != '-' || date[7] != '-')
        return false;

    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
            continue;

        if (!std::isdigit(date[i]))
            return false;
    }

    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if (month < 1 || month > 12)
        return false;

    int maxDay;

    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            maxDay = 29;
        else
            maxDay = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        maxDay = 30;
    else
      maxDay = 31;

    if (day < 1 || day > maxDay)
        return false;


    std::time_t t = std::time(NULL);
    std::tm *today = std::localtime(&t);

    int todayYear = today->tm_year + 1900;
    int todayMonth = today->tm_mon + 1;
    int todayDay = today->tm_mday;

    if (year > todayYear)
        return false;

    if (year == todayYear && month > todayMonth)
        return false;

    if (year == todayYear && month == todayMonth && day > todayDay)
        return false;

    return true;
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
