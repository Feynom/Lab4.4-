#include "Square.h"

Square::Square() { Root::SetA(0); Root::SetB(0); SetC(0); }
Square::Square(int a = 0, int b = 0, int c = 0) { Root::SetA(a); Root::SetB(b); SetC(c); }

void Square::SetC(int c = 0) { this->c = c; }
void Square::SetX2(double x2 = 0) { this->x2 = x2; }

int Square::GetC() const { return c; }
double Square::GetX2() const { return x2; }

void Square::Result() {
	double discriminant = Root::GetB() * Root::GetB() - 4 * Root::GetA() * GetC();
	if (discriminant < 0)
		SetX1(999999);
	else {
		SetX1((-1 * Root::GetB() - sqrt(discriminant)) / 2 * Root::GetA());
		SetX2((-1 * Root::GetB() + sqrt(discriminant)) / 2 * Root::GetA());
	}
}
void Square::Print() {
	cout << Root::GetA() << "X^2" << "+" << Root::GetB() << "x" << "+" << GetC() << "= 0 " << endl;
	if (Root::GetX1() != 999999) {
		cout << "X1 = " << GetX1() << endl;
		cout << "X2 = " << GetX2() << endl;
	}
	else
		cout << "No Roots(D < 0)!" << endl;
}