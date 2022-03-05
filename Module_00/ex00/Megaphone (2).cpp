#include "Megaphone.hpp"

// constructor
Megaphone::Megaphone(std::string no_param)
{
    setNoParam(no_param);
}

Megaphone::~Megaphone(){}

// member functions
void Megaphone::shoutNoArgs(void)
{
	shout(no_param);
	std::cout << "\n";
}

void Megaphone::shout(std::string str)
{
	std::string::size_type i;

	i = 0;
	while (i < str.size())
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
	std::cout << str;
}

void Megaphone::shoutArgs(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		shout(argv[i++]);
		std::cout << " ";
	}
	std::cout << "\n";
}

void Megaphone::setNoParam(std::string no_param)
{
	this->no_param = no_param;
}