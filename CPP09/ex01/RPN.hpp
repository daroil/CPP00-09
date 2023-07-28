#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stack>

class RPN
{
private:

public:
    RPN();
    ~RPN();
    RPN(std::string database);
    RPN(const RPN &copy);
    RPN &operator=(RPN const &copy);
};