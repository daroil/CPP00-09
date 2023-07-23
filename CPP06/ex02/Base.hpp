#pragma once

#include <iostream>
#include <iomanip> // std::fixed, std::setprecision()
#include <cstring>
#include <cstdlib> // std::strtol std::strtod
#include <cctype> // isprint()
#include <limits> // std::numeric_limits
#include <math.h> // isnan(), isinf()
#include <random>

class Base
{
    public:
        virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);