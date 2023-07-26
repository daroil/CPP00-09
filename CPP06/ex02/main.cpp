#include "Base.hpp"

int main(void) {
    std::srand(std::time(0));
    for (int i = 0; i < 10; i++)
    {
        Base *A = generate();
        identify(A);
        identify(*A);
    }
    return 0;
}