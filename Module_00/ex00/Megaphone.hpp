#ifndef MEGAPHONE_H
#define MEGAPHONE_H

#include <iostream>
#include <string>

class Megaphone
{
	private:
		std::string	default_param;

	public:
		Megaphone(std::string default_param);
		~Megaphone();

		void shoutNoArgs(void);
		void shoutArgs(int argc, char *argv[]);
		void setDefaultParam(std::string default_param);

	private:
		void shout(std::string str);
};

#endif