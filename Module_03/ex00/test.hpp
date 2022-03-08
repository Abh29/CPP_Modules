#pragma once 

#include <iostream>

class A 
{
private:
	int x;
public:
	A(int x);
	~A();
	A& operator= (const A& a);

	bool operator==(const A& a);

	int	getX();
};


class B
{
private:
	int y;
public:
	B(int y);
	~B();
	B& operator= (const B& b);
	bool operator== (const B& b);

	int getY();
};


class C : public A, public B
{
private:
	int z;
public:
	C(int z);
	~C();
};

