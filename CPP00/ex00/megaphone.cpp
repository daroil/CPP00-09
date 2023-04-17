#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char **argv) 
{
	char    ch;
	int     i;
	size_t	j;

	i = 1;
	// Print attribute values
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;;
	else if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (j < std::strlen(argv[i]))
			{
				std::cout << (ch = toupper(argv[i][j]));
				j++;
			}
			if (argv[i + 1])
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
    }
	return 0;
}