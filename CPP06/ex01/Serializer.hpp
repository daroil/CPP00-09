#pragma once

#include <iostream>
#include <iomanip> // std::fixed, std::setprecision()
#include <cstring>
#include <cstdlib> // std::strtol std::strtod
#include <cctype> // isprint()
#include <limits> // std::numeric_limits
#include <math.h> // isnan(), isinf()

struct Data{
    int num;
    std::string myStr;
};

class Serializer
{
private:

    Serializer();
    ~Serializer();
    Serializer(Serializer const &Serializer);
    Serializer &operator=( Serializer const &copy);

public:
    static uintptr_t serialize(Data *ptr);
    static Data *deserialize(uintptr_t raw);
};
