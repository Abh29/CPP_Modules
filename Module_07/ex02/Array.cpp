#include "Array.hpp"

template<typename T>
Array<T>::Array(){
	elms = NULL;
	_size = -1;
}

template<typename T>
Array<T>::Array(int n)
{
	if (n < 0)
		throw std::exception("size of array can NOT be negative !");
	_size = n;
	elms = new	T[n];
}

template<typename T>
Array<T>::Array(const Array &a){
	_size = a.size();
	elms = new T[_size];
	for (int i = 0; i < _size; i++)
		elms[i] = a[i];
}

template<typename T>
Array<T>&	Array<T>::operator= (const Array<T> &a){
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
		throw std::exception("out of bount index " + idx);
	return (elms[idx]);
}
