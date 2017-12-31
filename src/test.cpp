//============================================================================
// Name        : test.cpp
// Author      : jp
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "jvector.h"
#include "jmatrix.h"



int main2() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	auto v = JP::GVECTOR<double>();
	v.push_back(21.3);
	v.print_size();

	std::vector<std::vector<double>> m1{{1,1,1},{1,1,1}};
	std::vector<std::vector<double>> m2{{1,1},{1,1}, {1,1}};
	auto m3 = JP::MATH::MATRIX::multiply(m1, m2);
	JP::MATH::MATRIX::print(m3);



	return 0;
}

int main() {
	main2();
	return 0;
}
