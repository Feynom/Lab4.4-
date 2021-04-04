#include "Linear.h"

Linear::Linear() { Root::SetA(0), Root::SetB(0); }
Linear::Linear(int a = 0, int b = 0) { Root::SetA(a), Root::SetB(b); }

void Linear::Result() {
	Root::SetX1((-1 * Root::GetB()) / (Root::GetA() * 1.));
}
void Linear::Print() {
	cout << Root::GetA() << "x" << "+" << Root::GetB() << "= 0 " << endl;
	cout << "X = " << Root::GetX1() << endl;
}