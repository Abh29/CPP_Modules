#pragma once
#ifndef __SPAN_HPP__
#define __SPAN_HPP__


#include <exception>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int			N;
	std::vector<int>		data;
	

public:
	Span(int N);
	Span(const Span &s);
	Span& operator= (Span &s);
	~Span();

	void	addNumber(int number);
	int		shortestSpan() const;
	int		longestSpan() const;

};

#endif
