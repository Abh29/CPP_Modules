#include "span.hpp"

Span::Span(int N) {
	if (N <= 0)
		std::__throw_runtime_error("size can't be non positive !");
	this->N = N;
}

Span::Span(const Span &s) : N(s.N), data(s.data) {}

Span& Span::operator= (Span &s){
	if (this != &s)
	{
		this->N = s.N;
		data = s.data;
	}
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int number){
	if (data.size() == N)
		std::__throw_range_error("you cant add an element, the span is full !");
	data.push_back(number);
}

int		Span::shortestSpan() const {
	if (data.size() < 2)
		std::__throw_range_error("not enough elements in the span!");
	std::vector<int> copy(data);
	std::sort(copy.begin(), copy.end());
	int out = copy.back() - copy.front();
	for (size_t i = 1; i < copy.size(); i++)
		if (copy[i] - copy[i - 1] < out)
			out = copy[i] - copy[i - 1];
	return out;
}

int		Span::longestSpan() const {
	if (data.size() < 2)
		std::__throw_range_error("not enough elements in the span!");
	std::vector<int> copy(data);
	std::sort(copy.begin(), copy.end());
	return (copy.back() - copy.front());
}

