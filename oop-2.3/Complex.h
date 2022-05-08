#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double first, second;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	void SetX(double);
	void SetY(double);
	double GetX() const { return first; };
	double GetY() const { return second; };

	// Operators

	operator string() const;
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);

	friend Complex operator - (const Complex&, const Complex&);
	friend Complex operator / (const Complex&, const Complex&);
	friend Complex conj(Complex);

	Complex& operator = (const Complex&);

	Complex operator ++();
	Complex operator --();
	Complex operator ++(int);
	Complex operator --(int);
};

