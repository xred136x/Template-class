#include "Calculator.h"

int main() {
	Calculator<int, double> a;
	a.setNum1(10, 5.2);
	a.getNum1();
	a.getNum2();
	a.getNum3();
	a.getNum4();
	return 0;
}