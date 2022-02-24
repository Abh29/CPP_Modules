#include "Megaphone.hpp"


int	main(int argc, char **argv)
{
	Megaphone mphone = Megaphone("* LOUD AND UNBEARABLE FEEDBACK NOISE *");

	if (argc < 2)
		mphone.shoutNoArgs();
	else
		mphone.shoutArgs(argc, argv);
}