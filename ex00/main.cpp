#include <iostream>
#include "Whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;
	int k = 2;

	std::cout << "===INT===" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;

	::swap( a, b );
	std::cout << "Swap" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << std::endl;

	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl;
	std::cout << "b = " << b << " (" << &b << ")" << std::endl;
	std::cout << "k = " << k << " (" << &k << ")" << std::endl;
	std::cout << "min( k, b ) = " << &::min( k, b ) << std::endl;
	std::cout << "max( k, b ) = " << &::max( k, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << std::endl;
	std::cout << "===STRING===" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "Swap" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << std::endl;

	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	float f = 21.42f;
	float g = 42.21f;

	std::cout << std::endl;
	std::cout << "===FLOAT===" << std::endl;
	std::cout << "f = " << f << ", g = " << g << std::endl;

	::swap( f, g );
	std::cout << "Swap" << std::endl;
	std::cout << "f = " << f << ", g = " << g << std::endl;
	std::cout << std::endl;

	std::cout << "min( f, g ) = " << ::min( f, g ) << std::endl;
	std::cout << "max( f, g ) = " << ::max( f, g ) << std::endl;

	return 0;
}
