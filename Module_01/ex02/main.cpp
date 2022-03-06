#include <iostream>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPtr = &str;
	std::string &stringRef = str;

	std::cout << &str << std::endl;
	std::cout << stringPtr << std::endl;
	std::cout << &stringRef << std::endl;

	std::cout << str << std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;

	return (0);
}
