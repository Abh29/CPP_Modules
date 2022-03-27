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


int main2(){

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

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

	std::cout << "done !" << std::endl;
    delete [] mirror;//
    return 0;
}
