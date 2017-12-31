/*
 * jmatrix.h
 *
 *  Created on: 31 Dec 2017
 *      Author: jap
 */

#ifndef JMATRIX_H_
#define JMATRIX_H_

#include <vector>
#include <iostream>
namespace JP
{
namespace MATH
{
namespace MATRIX
{

template<typename T>
void print(const std::vector<std::vector<T>>& m)
{
	std::cout << "n rows: " << m.size() << std::endl;
	std::cout << "n cols: " << m[0].size() << std::endl;
	for (auto v : m)
	{
		for (auto vv : v)
		{
			std::cout << vv << " ";
		}
		std::cout << std::endl;
	}
}

template<typename T>
std::vector<std::vector<T>> multiply(const std::vector<std::vector<T>>& m1,
		const double value)
{

	auto nr1 = m1.size();
	auto nc1 = m1[0].size();

	std::vector<std::vector<T>> result(nr1, std::vector<T>(nc1));

	for (int i = 0; i < nr1; i++)
	{
		for (int j = 0; j < nc1; j++)
		{
			result[i][j] = value * m1[i][j];
		}
	}
	return result;
}

template<typename T>
std::vector<std::vector<T>> multiply(const double value,
		const std::vector<std::vector<T>>& m1)
{
	return multiply(m1, value);
}

template<typename T>
std::vector<std::vector<T>> multiply(const std::vector<std::vector<T>>& m1,
		const std::vector<std::vector<T>>& m2)
{

	auto nr1 = m1.size();
	auto nc1 = m1[0].size();
	auto nr2 = m2.size();
	auto nc2 = m2[0].size();

	auto check1 = nr1 == nc2;

	std::vector<std::vector<T>> result(nr1, std::vector<T>(nc2));

	for (int i = 0; i < nr1; i++)
	{
		for (int j = 0; j < nc2; j++)
		{
			for (int k = 0; k < nr2; k++)
			{
				result[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
	return result;
}

}
}
}

#endif /* JMATRIX_H_ */
