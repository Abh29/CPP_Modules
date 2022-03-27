#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <cstddef>

template <typename T>
typename T::iterator easyfind( T& container, int n ) {
	for (typename T::iterator i = container.begin(); i != container.end(); i++)
		if (*i == n)
			return (i);
	return container.end();
}

#endif