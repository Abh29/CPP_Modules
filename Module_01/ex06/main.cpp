#include "Harl.hpp"


long	simpleHash(std::string str);

int main(int argc, char **argv){
	Harl k = Harl();
	long cmd = 0;

	if (argc == 2)
		cmd = simpleHash(argv[1]);

	switch (cmd)
	{
	case 13323810:
		std::cout << "[ DEBUG ]" << std::endl;
		k.complain("DEBUG");
	case 606516:
		std::cout << "[ INFO ]" << std::endl;
		k.complain("INFO");
	case 14835960080:
		std::cout << "[ WARNING ]" << std::endl;
		k.complain("WARNING");
	case 14019945:
		std::cout << "[ ERROR ]" << std::endl;
		k.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	
}

long	simpleHash(std::string str)
{
	long out = 1;

	for (int i = 0; i < (int)str.length(); i++)
	{
		out = out * 26 + str[i] - 'A'; 
	}
	return (out);
}
