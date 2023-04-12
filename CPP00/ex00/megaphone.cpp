#include <iostream>
#include <cstring>
#include <cctype>

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    std::string myString;  // Attribute (string variable)
};

int main(int argc, char **argv) 
{
    MyClass myObj;  // Create an object of MyClass
    char    ch;
    int     i;
    size_t     j;
    // Access attributes and set values
     myObj.myNum = 15; 
    myObj.myString = "Some text";

    i = 1;
    // Print attribute values
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (argc > 1)
    {
        while (i < argc)
        {
            j = 0;
            while (j < std::strlen(argv[i]))
            {
                // if (std::isalpha(argv[i][j]))
                std::cout << (ch = toupper(argv[i][j]));
                // else
                //     std::cout << (argv[i][j]);
                j++;
            }
            if (argv[i + 1])
                std::cout << " ";
            i++;
        }
    }
    std::cout << "\n";
    // std::cout << myObj.myNum << "\n";
    // std::cout << myObj.myString << "\n";
    return 0;
}