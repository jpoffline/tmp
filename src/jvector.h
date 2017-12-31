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
