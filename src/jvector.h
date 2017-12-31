/*
 * jvector.h
 *
 *  Created on: 30 Dec 2017
 *      Author: jap
 */

#ifndef JVECTOR_H_
#define JVECTOR_H_
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
		const std::vector<std::vector<T>>& m2)
{

	auto nr1 = m1.size();
	auto nc1 = m1[0].size();
	auto nr2 = m2.size();
	auto nc2 = m2[0].size();

	auto check1 = nc1 == nr2;

	std::vector<std::vector<T>> result(nr2, std::vector<T>(nc2));
	for (int i = 0; i < nr2; i++)
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

template<typename VT>
class GVECTOR
{
	public:
		GVECTOR()
		{
		}
		;
		void push_back(VT value)
		{
			_vec.push_back(value);
		}
		auto size()
		{
			return _vec.size();
		}
		void print_size()
		{
			std::cout << size() << std::endl;
		}

	private:
		std::vector<VT> _vec;
};

/*
 *
 */
class jvector
{
	public:
		jvector();
		virtual ~jvector();

	private:
		GVECTOR<int> _vector;
};

} /* namespace JP */

#endif /* JVECTOR_H_ */
