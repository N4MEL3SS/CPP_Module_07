#include "Array.hpp"

class TestClass
{
public:
	TestClass() : _number(42) {}

	int getNumber() const
	{
		return this->_number;
	}

private:
	int _number;
};

int main()
{
	Array<TestClass>	arrayClass(5);
	Array<int>			arrayInt(3);
	Array<std::string>	arrayString(10);
	Array<int>			empty;

	std::cout << " -- Testing operator [] --" << std::endl;
	arrayInt[2] = 2022;
	arrayString[9] = "Testing some string";
	std::cout << arrayInt[2] << std::endl;
	std::cout << arrayString[9] << std::endl;
	std::cout << arrayClass[4].getNumber() << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << std::endl;

	std::cout << " -- Testing array size --" << std::endl;
	std::cout << empty.size() << std::endl;
	std::cout << arrayInt.size() << std::endl;
	std::cout << arrayString.size() << std::endl;
	std::cout << arrayClass.size() << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << std::endl;

	std::cout << " -- Testing operator = --" << std::endl;
	std::cout << "Empty size before: " << empty.size() << std::endl;
	std::cout << "Assigning arrayInt to empty" << std::endl;
	empty = arrayInt;
	std::cout << "Empty size after: " << empty.size() << std::endl;
	std::cout << std::endl;

	std::cout << "Values of empty[2] and arrayInt[2]:" << std::endl;
	std::cout << empty[2] << " and " << arrayInt[2] << std::endl;
	std::cout << "Changing value of empty[2]" << std::endl;
	empty[2] = 999;
	std::cout << "Values of empty[2] and arrayInt[2]:" << std::endl;
	std::cout << empty[2] << " and " << arrayInt[2] << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << std::endl;

	std::cout << " -- Testing exceptions --" << std::endl;
	try
	{
		std::cout << arrayInt[10] << "This should not be printed ;)" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		std::cout << arrayClass[-1].getNumber() << "This should not be printed ;)" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}
