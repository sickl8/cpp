#include "span.hpp"
#include <vector>

Span &Span::operator=(const Span &ref)
{
	len = ref.len;
	min = ref.min;
	max = ref.max;
	span = ref.span;
	return *this;
}

Span::Span(const Span &ref)
{
	*this = ref;
}

Span::~Span()
{
}

Span::Span(unsigned int _len)
{
	len = _len;
	max = LONG_MIN;
	min = LONG_MAX;
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator itr = start; itr != end; itr++)
	{
		if (span.size() < len)
			span.insert(*itr);
		else
			throw Span::SpanIsFullException();
	}
}

void Span::addNumber(int num)
{
	if (span.size() < len)
	{
		if (num > max)
			max = num;
		if (num < min)
			min = num;
		span.insert(num);
	}
	else
	{
		throw Span::SpanIsFullException();
	}
}

long Span::shortestSpan()
{
	if (span.size() < 2)
	{
		throw Span::SpanIsTooShortException();
	}
	long ret = LONG_MAX;
	for (std::multiset<int>::iterator first = span.begin(), second = ++span.begin(); second != span.end(); first++, second++)
	{
		if (*second - *first < ret)
			ret = *second - *first;
	}
	return ret;
}

long Span::longestSpan()
{
	if (span.size() < 2)
	{
		throw Span::SpanIsTooShortException();
	}
	return (max - min);
}