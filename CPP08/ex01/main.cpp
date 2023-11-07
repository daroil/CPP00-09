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
    Span sp2 = Span(10);
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
    try {
        sp2.addNumberRange(1, 19);
    }
    catch (std::exception &e) {}
    try {
        sp2.addNumberRange(7, 12);
//        sp2.addNumberRange(7, 12);
        sp2.addNumber(5);
        sp2.addNumber(19);
        sp2.addNumber(19);
    }
    catch (std::exception &e) {
        std::cout << "error" << std::endl;
    }
    sp2.displaySpan();
}

void    SuperLongTest()
{
    Span sp = Span(130);
    try {
//        sp.addNumberRange(1, 10000);
        sp.addNumberRandRange(1000);
//        sp.addNumber(5);
//        sp.addNumber(19);
//        sp.addNumber(27);
    }
    catch (std::exception &e) {
        std::cout << "error" << std::endl;
    }
    sp.displaySpan();
    std::cout << "shortest "<< sp.shortestSpan() << std::endl;
    std::cout << "longest "<< sp.longestSpan() << std::endl;
}

int main(void)
{
    subject_test();
    myTest();
    SuperLongTest();
    return 0;
}