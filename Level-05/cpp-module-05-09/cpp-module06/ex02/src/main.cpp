#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

#include <cstdlib>
#include <cstdio>


static Base *generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break;
	case 2:
		return (new C());
		break;
	default:
		perror("Something went wrong with the random generator");
		return (NULL);
	}
}


static void identify(Base *Test)
{
	if (dynamic_cast<A *>(Test))
		std::cout << "A is the identified type" << std::endl;
	else if (dynamic_cast<B *>(Test))
		std::cout << "B is the identified type" << std::endl;
	else if (dynamic_cast<C *>(Test))
		std::cout << "C is the identified type" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}

static void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A is the identified type" << std::endl;
		return;
	}
	catch (std::exception &e) {}

	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B is the identified type" << std::endl;
		return;
	}
	catch (std::exception &e) {}

	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C is the identified type" << std::endl;
		return;
	}
	catch (std::exception &e) {}

	std::cout << "unknown type" << std::endl;
}

int main()
{
	srand(time(NULL)); // enables the randomness of the generate function
	for (int j = 0; j < 5; j++)
	{
		Base *Test = generate();
		Base *Test2 = new Base;
		if (Test == NULL)
			return (1);
		else
		{
			identify(Test);
			identify(Test2);
			std::cout << "------------------------" <<std::endl;
			identify(*Test);
			identify(*Test2);
			delete (Test);
			delete (Test2);

			std::cout << std::endl;
		}
	}
	return (0);
}
