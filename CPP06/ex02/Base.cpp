#include "Base.hpp"

Base *generate(void)
{
    // Create a random device to seed the random number generator


    // Define the range for the random number (inclusive)
    int min = 1;
    int max = 3;

    // Generate the random number in the range [min, max]
    int randomValue = min + std::rand() % (max - min + 1);

    // Output the result
//    std::cout << "Random value: " << randomValue << std::endl;
    switch (randomValue % 3) {
        case 0:
//            std::cout << 1 << std::endl;
            return (new A);
//            break;
        case 1:
//            std::cout << 2 << std::endl;
            return (new B);
//            break;
        case 2:
//            std::cout << 3 << std::endl;
            return (new C);
//            break;
    }
    std::cout << "Error" << std::endl;
    return NULL;
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Error" << std::endl;
}

void identify(Base &p)
{
    try {
        A &a = dynamic_cast<A&>(p);
        (void) a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
        try {
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch (std::exception &e)
        {
            try{
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch(std::exception &e)
            {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

