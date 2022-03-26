#include "StringWorker.hpp"

StringWorker::StringWorker(std::string &str): input(str) {
	nan = false;
	convert();
}
StringWorker::StringWorker( const StringWorker &s) : input(s.getStr()) { 
	c = s.c;
	i = s.i;
	f = s.f;
	d = s.d;
	nan = s.nan;
}
StringWorker& StringWorker::operator= (const StringWorker &s){
	if (this != &s)
	{
		input = s.getStr();
		c = s.c;
		i = s.i;
		f = s.f;
		d = s.d;
		nan = s.nan;
	}
	return (*this);
}

StringWorker::~StringWorker(){}

bool	StringWorker::isNumber()
{
    strtod(input.c_str(), &end);
    return (*end == 0 || (*end == 'f' && *(end + 1) == 0));
}

void	StringWorker::convert(){
	
	if (input.length() == 1 && std::isdigit(input[0]) == 0)
    {
		nan = false;
        c = input[0];
        d = static_cast<double>(c);
        f = static_cast<float>(d);
        i = static_cast<int>(d);
    }
	else if (input == "-inf" || input == "+inf" || input == "nan" )
	{
		nan = true;
		f = 0;
		d = 1;
	}
	else if( input == "-inff" || input == "+inff" || input == "nanf")
	{
		nan = true;
		f = 1;
		d = 0;
	} else if (isNumber()) {
		char	*end;
		nan = false;
		d = std::strtod(input.c_str(), &end);
		f = static_cast<float>(d);
		i = static_cast<int>(d);
		if (i >= 0 && i <= 127)
		{
			if (std::isprint(i))
				c = static_cast<char>(i);
			else
				c = -1;
		}
		else
			c = -2;
	}
	else
		throw std::invalid_argument( "invalid argument !" );
}

std::string	StringWorker::getStr() const {return input; }
int			StringWorker::getInt() const {return i;}
char		StringWorker::getChar() const {return c;}
float		StringWorker::getFloat() const {return f;}
double		StringWorker::getDouble() const {return d;}
bool		StringWorker::isNan() const {return nan;}
char		StringWorker::getEnd() const {return *end;}


std::ostream& operator <<(std::ostream &os, StringWorker const &s) {
	if (s.isNan())
	{
		os << "char: imposible" << std::endl;
		os << "int: imposible" << std::endl;
		if (s.getFloat() == 1)
		{
			os << "float: " << s.getStr() << std::endl;
			os << "doubl: " << s.getStr().substr(0, s.getStr().length() - 1) << std::endl;

		} else {
			os << "float: " << s.getStr() << "f" << std::endl;
			os << "double: " << s.getStr() << std::endl;
		}
	}
	else
	{
		if (s.getChar() == -2)
			os << "char: imposible" << std::endl;
		else if (s.getChar() == -1)
			os << "char: Non displayable" << std::endl;
		else
			os << "char: '" << s.getChar() << "'" << std::endl;
		os << "int: " << s.getInt() << std::endl;
		if (fabsl(s.getInt() - s.getDouble()) < 1e-6)
		{
			os << std::fixed << std::setprecision(1) << "float: " << s.getFloat() << "f" << std::endl;
			os << std::fixed << std::setprecision(1) << "double: " << s.getDouble() << std::endl;
		} else if (s.getEnd() == 'f')
		{
			os << "float: " << s.getStr() << std::endl;
			os << "double: " << s.getStr().substr(0, s.getStr().length() - 1) << std::endl;
		}
		else
		{
			os << "float: " << s.getStr() << "f" << std::endl;
			os << "double: " << s.getStr() << std::endl;
		}
	}
	return os;
}
