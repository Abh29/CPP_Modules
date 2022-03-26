#include <iostream>


template <typename T> void iter(T *arr, size_t size, void f(T&))
{
	size_t i = 0;
	while (i < size)
		f(arr[i++]);
}

template <typename T> void printelm(T &elm)
{
	std::cout << elm;
}

template <typename T> void printelmnl(T &elm)
{
	std::cout << elm << std::endl;
}

void	pairity(int &i)
{
	std::cout << i << (i % 2 == 0 ? "  even" : "  odd") << std::endl;
}

void	toUpper(char &c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
}


int main( void ) {

	std::string strings[] = {"hello world", "string 1", "string 2", "string 3"};
	int			ints[] = {-12, 3, 5, 6, 7, -9, -7, 1, 4, 0};
	char		chars[] = "abcdefghijklmnopqrstuvwxyz";

	iter(ints, 10, pairity);
	std::cout << std::endl;
	iter(chars, 26, toUpper);
	iter(chars, 26, printelm);
	std::cout << std::endl;
	std::cout << std::endl;
	iter(strings, 4, printelmnl);
	std::cout << std::endl;
}
