#include <stdint.h>
#include <iostream>

typedef struct s_Data
{
	int 		x;
	std::string str;
} Data;

uintptr_t serealize(Data * data) {
	return (reinterpret_cast<uintptr_t>(data));
}

Data * deserealize(uintptr_t ptr) {
	return (reinterpret_cast<Data *>(ptr));
}

int main ()
{
	Data * data = new Data();
	data->x = 5;
	data->str = std::string("hello world !");
	Data 		*data2;
	uintptr_t 	ptr;

	std::cout << "data : " << data << std::endl;
	std::cout << "x : " << data->x << std::endl;
	std::cout << "str: " << data->str << std::endl;

	ptr = serealize(data);
	data2 = deserealize(ptr);
	std::cout << "serealized data pointer : " << ptr << std::endl;
	std::cout << "deserealized  uintptr_t  :" << data2 << std::endl;
	std::cout << "x : " << data2->x << std::endl;
	std::cout << "str: " << data2->str << std::endl;

	delete data;
	return (0);
}



