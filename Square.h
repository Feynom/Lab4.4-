#pragma once
#include "Root.h"
class Square : public Root   
{
private:
	int c;
	double x2;
public:
	Square();
	Square(int, int, int);

	void SetC(int);
	void SetX2(double);
	
	int GetC() const;
	double GetX2() const;

	void Result();
	void Print();
};

