#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{

public:
	MutantStack();
	MutantStack(const MutantStack & c);
	MutantStack & operator=(const MutantStack<T> & c);
	virtual ~MutantStack();


	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin();
	iterator end();
};

template<typename T>
MutantStack<T>::MutantStack(){};

template<typename T>
MutantStack<T>::MutantStack( const MutantStack& c) : std::stack<T>(c) {};

template<typename T>
MutantStack<T>&  MutantStack<T>::operator=(const MutantStack<T> & c)
{
	this->c = c.c;
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {return this->c.begin();}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return this->c.end();}

#endif