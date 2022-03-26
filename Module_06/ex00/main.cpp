#include "StringWorker.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "wrong number of arguments !" << std::endl;
		return 1;
	}

	try
	{
		std::string input = std::string(argv[1]);
		StringWorker s(input);
		std::cout << s << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
