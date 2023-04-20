#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char **argv) 
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		char ch;
		for (int i = 1; i < argc; i++)
		{
			for (size_t j = 0; j < std::strlen(argv[i]); j++)
				std::cout << (ch = toupper(argv[i][j]));
			if (argv[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
    }
	return 0;
}