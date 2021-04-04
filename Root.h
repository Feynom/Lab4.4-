#pragma once
#include <iostream>

using namespace std;

class Root
{
private:
	int a, b;
	double x1;
public:
	void SetA(int);
	void SetB(int);
	void SetX1(double);

	int GetA() const;
	int GetB() const;
	double GetX1() const;

	virtual void Result() = 0;
	virtual void Print() = 0;
};

