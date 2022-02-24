#ifndef MEGAPHONE_H
#define MEGAPHONE_H

#include <iostream>
#include <string>

class Megaphone
{
	private:
		std::string	no_param;

	public:
		Megaphone(std::string no_param);
		~Megaphone();

		void shoutNoArgs(void);
		void shoutArgs(int argc, char *argv[]);
		void setNoParam(std::string no_param);

	private:
		void shout(std::string str);
};

#endif