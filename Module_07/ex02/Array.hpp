#pragma once
#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <exception>
#include <cstddef>

template <typename T> class Array
{
private:
	int		_size;
	T		*elms;

public:
	Array();
	Array(int n);
	Array(Array &a);
	Array& operator= (Array &a);
	virtual ~Array();

	int		size(void) const;
	T	&operator[] (const int idx);
};



template<typename T>
Array<T>::Array(){
	elms = NULL;
	_size = -1;
}

template<typename T>
Array<T>::Array(int n)
{
	if (n < 0)
		throw std::runtime_error("size of array can NOT be negative !");
	_size = n;
	elms = new	T[n];
}

template<typename T>
Array<T>::Array(Array &a){
	_size = a.size();
	elms = new T[_size];
	for (int i = 0; i < _size; i++)
		elms[i] = a[i];
}

template<typename T>
Array<T>&	Array<T>::operator= (Array<T> &a){
	if (this != a)
	{
		if (elms)
			delete[] elms;
		this->_size = a.size();
		elms = new T[_size];
		for (int i = 0; i < _size; i++)
			elms[i] = a[i];
	}
	return (*this);
}

template<typename T>
Array<T>::~Array(){
	if (elms)
		delete[] elms;
}

template<typename T>
int		Array<T>::size(void) const {
	return (this->_size);
}

template<typename T>
T&		Array<T>::operator[] (const int idx){
	if (idx < 0 || idx >= this->_size)
		throw std::runtime_error("Error: out of bount index ");
	return (elms[idx]);
}


#endif