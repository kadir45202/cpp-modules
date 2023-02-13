#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>
# include <numeric>

class   Span
{
private:
    unsigned int        N;
    std::vector<int>    v; 

public:
    Span();
    Span(unsigned int N);
    Span(const Span& orig);
    Span& operator=(const Span& orig);
    ~Span();
    void    addNumber(int n);

    template <typename Iter>
    void    addNumber(Iter begin, Iter end)
    {
        if (N < v.size() + end - begin) 
            throw (NoSpaceException());
        v.insert(v.end(), begin, end);
    }

    unsigned int    shortestSpan();
    unsigned int    longestSpan();

    class   NoSpanException : public std::exception {
        const char* what() const throw();
    };
    class   NoSpaceException : public std::exception {
        const char* what() const throw();
    };
};

#endif