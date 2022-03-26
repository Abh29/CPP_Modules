#include <iostream>
#include "Array.hpp"
#include <stdlib.h>


template <typename T> void iter(Array<T> &arr, void f(T&))
{
	int i = 0;
	while (i < arr.size())
		f(arr[i++]);
}


template <typename T> void printelm(T &elm)
{
	std::cout << elm << " ";
}


int main(){

	Array<int>		intsArray(10);
	Array<double>	doublesArray(13);

	unsigned int seed = 100;

	for (int i = 0; i < intsArray.size(); ++i)
		intsArray[i] = rand() % 100;

	for (int i = 0; i < doublesArray.size(); i++)
		doublesArray[i] = rand_r(&seed) / rand_r(&seed);


	iter(intsArray, printelm);
	std::cout << std::endl;
	iter(doublesArray, printelm);
	std::cout << std::endl;

	try
	{
		Array<char> charsArray(-5);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		Array<char> charsArray(5);
		std::cout << charsArray[charsArray.size()];
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return 0;

}