#include "MutantStack.hpp"

void    subjectTest(void)
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

void    listTest(void)
{
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

}

void    TestStack()
{
    std::cout << std::endl << "\033[33m****** TEST WITH RANDOM UPPERCASE CHARS WITH CONST ITERATOR *******\033[0m" << std::endl;
    {
        MutantStack<char> char_stack;
        srand(time(NULL));
        char	c;

        for (int i = 0; i < 10; i++) {
            c = (rand() % 26) + 'A';
            char_stack.push(c);
        }

        MutantStack<char>::const_iterator	it = char_stack.begin();
        MutantStack<char>::const_iterator	ite = char_stack.end();
        while (it != ite) {
            std::cout << *it << std::endl;
//            *it = 'A'; not executable, because of const iterator
            it++;
        }
    }

    std::cout << std::endl << "\033[33m****** TEST WITH RANDOM UPPERCASE CHARS WITH CONST ITERATOR *******\033[0m" << std::endl;
    {
        std::list<char> my_list;

        my_list.push_front('A');
        my_list.push_back('B');
        my_list.push_back('C');

        std::list<char>::const_iterator	it = my_list.begin();
        std::list<char>::const_iterator	ite = my_list.end();
        while (it != ite) {
            std::cout << *it << std::endl;
            it++;
        }
    }
}

void StackTest2()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "size: " << mstack.size() << std::endl;
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    std::cout << "top: " << mstack.top() << std::endl;

    std::cout << "---" << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(42);
    mstack.push(4242);
    mstack.push(24);
    mstack.push(2424);
    mstack.push(0);

    {
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;

        std::cout << "mstack content (bottom to top): " << std::endl;
        while(it != ite)
        {
            std::cout << *it;
            if (++it == ite)
                std::cout << std::endl;
            else
                std::cout << ", ";
        }
    }

    {
        MutantStack<int>::const_iterator it = mstack.begin();
        MutantStack<int>::const_iterator ite = mstack.end();

        ++it;
        --it;

        std::cout << "mstack content (bottom to top): " << std::endl;
        while(it != ite)
        {
            std::cout << *it;
            if (++it == ite)
                std::cout << std::endl;
            else
                std::cout << ", ";
        }
    }

    {
        MutantStack<int>::reverse_iterator it = mstack.rbegin();
        MutantStack<int>::reverse_iterator ite = mstack.rend();

        ++it;
        --it;

        std::cout << "mstack content (top to bottom): " << std::endl;
        while(it != ite)
        {
            std::cout << *it;
            if (++it == ite)
                std::cout << std::endl;
            else
                std::cout << ", ";
        }
    }

    {
        MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
        MutantStack<int>::const_reverse_iterator ite = mstack.rend();

        ++it;
        --it;

        std::cout << "mstack content (top to bottom): " << std::endl;
        while(it != ite)
        {
            std::cout << *it;
            if (++it == ite)
                std::cout << std::endl;
            else
                std::cout << ", ";
        }
    }

    std::cout << "--- last part" << std::endl;

    {
        std::stack<int> s(mstack);
        MutantStack<int> st = mstack;

        std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
        std::cout << "top: " << st.top() << " (" << mstack.top() << ")" << std::endl;
        st.pop();
        std::cout << "size: " << st.size() << " (" << mstack.size() << ")" << std::endl;
        std::cout << "top: " << st.top() << " (" << mstack.top() << ")" << std::endl;
    }
}

int main(void)
{
    subjectTest();
    listTest();
    TestStack();
    StackTest2();
    return 0;
}