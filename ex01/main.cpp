#include <iostream>
#include "Iter.hpp"

int main()
{
	int arrayInt[6] = {10, 8, 5, 6, 43, 42};
	float arrayFloat[6] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
	char arrayChar[6] = {'K', 'I', 'L', 'L', 'M', 'E'};

	std::string strTab[3];
	strTab[0] = "Hello";
	strTab[1] = "From";
	strTab[2] = "Hell";

	std::cout << "INT array:" << std::endl;
	iter(arrayInt, 6, printValues);
	std::cout << std::endl << std::endl;

	std::cout << "FLOAT array:" << std::endl;
	iter(arrayFloat, 6, printValues);
	std::cout << std::endl << std::endl;

	std::cout << "CHAR array:" << std::endl;
	iter(arrayChar, 6, printValues);
	std::cout << std::endl << std::endl;

	std::cout << "STRING array:" << std::endl;
	iter(strTab, 3, printValues);
	std::cout << std::endl;

	return 0;
}
