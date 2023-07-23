#include "Base.hpp"

int main(void) {
    for (int i = 0; i < 10; i++)
    {
        Base *A = generate();
        identify(A);
        identify(*A);
    }
    return 0;
}