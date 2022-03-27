#include <iostream>
#include "span.hpp"

int main ()
{
    Span span = Span(6);
    span.addNumber(-2);
    span.addNumber(13);
    span.addNumber(7);
    span.addNumber(-9);
    span.addNumber(11);
	span.addNumber(6);

    std::cout << "shortestSpan: " << span.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << span.longestSpan() << std::endl;
	
	try
	{
		span.addNumber(13);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

    Span span2 = Span(100000);
    for(int i = 0; i < 100000; i++)
	{
		span2.addNumber(std::rand() % 1000);
	}

	std::cout << "shortestSpan: " << span2.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << span2.longestSpan() << std::endl;

    try
    {
        Span s(-1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	
    try
    {
        Span s(2);
        s.addNumber(4);
        std::cout << s.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	
	return 0;
}

