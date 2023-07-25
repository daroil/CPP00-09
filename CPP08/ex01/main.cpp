#include "Span.hpp"


void    subject_test(void)
{

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

}

void    myTest(void)
{
    Span sp = Span(5);
    Span sp2 = Span(5);
    try{
        for(int i = 0; i < 6; i++)
        {
            sp.addNumber(2+i);
            std::cout << "added" << std::endl;
        }
    }
    catch (std::exception &e) {}
    sp.displaySpan();
    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    std::cout << sp2.shortestSpan() << std::endl;

}

int main(void)
{
    subject_test();
    myTest();
    return 0;
}