#include "Megaphone.hpp"

// constructor
Megaphone::Megaphone(std::string default_param)
{
    setDefaultParam(default_param);
}

Megaphone::~Megaphone(){}

// member functions
void Megaphone::shoutNoArgs(void)
{
	shout(default_param);
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

void Megaphone::setDefaultParam(std::string default_param)
{
	this->default_param = default_param;
}