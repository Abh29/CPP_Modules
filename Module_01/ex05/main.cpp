#include "Harl.hpp"

int main(){
	Harl k = Harl();

	std::string cmd;
	std::cout << "put Harl do : ";
	std::cin >> cmd; 
	k.complain(cmd);
}
