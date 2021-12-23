#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <set>
#include <iostream>
#include <vector>

class Span
{
	private:
		std::multiset<int> span;
		unsigned int len;
		long min;
		long max;
		class SpanIsFullException : public std::exception
		{
			public:
				virtual ~SpanIsFullException() _NOEXCEPT {}
				const char *what() const _NOEXCEPT { return "Span is full"; }
		};

		class SpanIsTooShortException : public std::exception
		{
			public:
				virtual ~SpanIsTooShortException() _NOEXCEPT {}
				const char *what() const _NOEXCEPT { return "Span is too short"; }
		};

	public:
		Span(unsigned int len = 0);
		~Span();
		Span(const Span &ref);
		Span &operator=(const Span &ref);
		void addNumber(int num);
		void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
		long shortestSpan();
		long longestSpan();
};

#endif
