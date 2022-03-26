#pragma once
#ifndef __STRINGWROKER_HPP__
#define __STRINGWORKER_HPP__

#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <math.h>

class StringWorker
{
private:
	std::string	input;
	char		c;
	int 		i;
	float		f;
	double		d;
	bool		nan;
	char		*end;

	void	convert();
	bool	isNumber();

public:
	StringWorker(std::string &str);
	StringWorker(const StringWorker &s);
	StringWorker& operator= (const StringWorker &);
	~StringWorker();
	
	std::string	getStr() const;
	int			getInt() const;
	char		getChar() const;
	float		getFloat() const;
	double		getDouble() const;
	bool		isNan() const;
	char		getEnd() const;
};

std::ostream& operator <<(std::ostream &os, StringWorker const &s);

#endif