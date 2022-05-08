#include "Complex.h"
#include <iostream>
using namespace std;
int main()
{
	Complex a;
	Complex b(5, 2);
	Complex c(b);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	a = b;
	cout << a << endl;

	cin >> a;
	cout << a << endl;

	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << --a << endl;
	cout << a << endl;
	cout << a-- << endl;
	cout << a << endl;

	cout << a / c << endl;
	cout << a - c << endl;
	cout << conj(a) << endl;

	return 0;
}
