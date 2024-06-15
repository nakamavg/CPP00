#include <iostream>
int main(int argc, char *argv[])
{
	if(argc >=2)
	{
		for(int i = 1; i < argc; i++)
		{
			std::string str = argv[i];
			for(int j = 0; j < (int)str.length(); j++)
			{
				std::cout << (char)toupper(str[j]);
			}
			if(i < argc - 1)
				std::cout << " ";
			else
				std::cout << std::endl;
		}
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	}
}