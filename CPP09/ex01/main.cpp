#include "RPN.hpp"

enum TYPE
{
    PLUS, MINUS, MULTIPLY, DIVIDE, ERROR
};

void	errorMessage(std::string message)
{
    std::cout << message << std::endl;
}

bool    isOperand(std::string str)
{
    if ((str == "+" || str == "-" || str == "/" || str == "*") && str.length() == 1)
        return true;
    else
        return false;
}

bool    isOperandChar(char str)
{
    if (str == '+' || str == '-' || str == '/' || str == '*')
        return true;
    else
        return false;
}

bool    isCorrectDigit(std::string str)
{
    if (std::isdigit(str[0]) && str.length() == 1)
        return true;
    else
        return false;
}

int getOperand(char str)
{
    if (str == '+')
        return PLUS;
    else if (str == '-')
        return MINUS;
    else if (str == '*')
        return MULTIPLY;
    else if (str == '/')
        return DIVIDE;
    return ERROR;
}

bool    performOperation(std::string str, int *result, int tmp1, int tmp2)
{
    switch (getOperand(str.front())) {
        case PLUS:
            *result = tmp1 + tmp2;
            return true;
        case MULTIPLY:
            *result = tmp1 * tmp2;
            return true;
        case MINUS:
            *result = tmp1 - tmp2;
            return true;
        case DIVIDE:
            *result = tmp1 / tmp2;
            return true;
        default:
            return false;
    }
}

int main(int argc, char **argv)
{
    if (argc < 2){
        std::cerr << "Error, wrong input" << std::endl;
        return (1);
    }
    else if(argc == 2)
    {
        std::stack<int>     numStack;
        for (size_t i = 0; i < strlen(argv[1]); ++i)
        {
            if (std::isdigit(argv[1][i]))
            {
                numStack.push(std::atoi(&argv[1][i]));
            }
            else if (isOperandChar(argv[1][i]))
            {
                if (!numStack.empty())
                {
                    int tmp1;
                    int tmp2;
                    int result;

                    tmp1 = numStack.top();
                    numStack.pop();
                    if (!numStack.empty())
                    {
                        tmp2 = numStack.top();
                        numStack.pop();
                        if (performOperation(&argv[1][i], &result, tmp2, tmp1))
                        {
                            std::cout << "result: " << result << std::endl;
                            numStack.push(result);
                        }
                        else
                            return (errorMessage("couldn't perform operation"), 1);
                    }
                    else
                        return (errorMessage("couldn't perform operation, not enough operands in stack"), 1);


                }
                else
                    return (errorMessage("couldn't perform operation, stack is empty"), 1);
            }
            else if (std::isspace(argv[1][i]))
                continue ;
            else
            {
                std::cerr << "wrong input" << std::endl;
                return 1;
            }
        }
        std::cout << "success" << std::endl;
    }
    else
    {
        std::stack<int>     numStack;
        for (int i = 1; i < argc; ++i)
        {
            if (isCorrectDigit(argv[i]))
            {
                numStack.push(std::atoi(argv[i]));
            }
            else if (isOperand(argv[i]))
            {

                if (!numStack.empty())
                {
                    int tmp1;
                    int tmp2;
                    int result;

                    tmp1 = numStack.top();
                    numStack.pop();
                    if (!numStack.empty())
                    {
                        tmp2 = numStack.top();
                        numStack.pop();
                        if (performOperation(argv[i], &result, tmp2, tmp1))
                        {
                            std::cout << "result: " << result << std::endl;
                            numStack.push(result);
                        }
                        else
                            return (errorMessage("couldn't perform operation"), 1);
                    }
                    else
                        return (errorMessage("couldn't perform operation, not enough numbers in stack"), 1);

                }
                else
                    return (errorMessage("couldn't perform operation, stack is empty"), 1);
            }
            else
            {
                std::cerr << "wrong input" << std::endl;
                return 1;
            }
        }
        std::cout << "success" << std::endl;
    }
    return 0;
}