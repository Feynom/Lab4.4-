#include "Root.h"

void Root::SetA(int a = 0) { this->a = a; }
void Root::SetB(int b = 0) { this->b = b; }
void Root::SetX1(double x1 = 0) { this->x1 = x1; }

int Root::GetA() const { return a; }
int Root::GetB() const { return b; }
double Root::GetX1() const { return x1; }

