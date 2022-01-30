#include <iostream>;
#include "Calculator.h";

using namespace std;

int main(void) {
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	cout << "계산기" << endl << endl;
	cout << "a+b\na-b\na/b\na*b" << endl;

	Calculator c;
	while (true) {
		cin >> x >> oper >> y;
		result = c.Calculate(x, oper, y);
		cout << "Result : " << result << endl;
	}
	return 0;
}