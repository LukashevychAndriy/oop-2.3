#include "Complex.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

Complex::Complex()
{
	first = 0;
	second = 0;
}

Complex::Complex(double x = 0, double y = 0)
{
	SetX(x);
	SetY(y);
}

Complex::Complex(const Complex& r)
{
	SetX(r.GetX());
	SetY(r.GetY());
}

void Complex::SetX(double x) {
	first = x;
}

void Complex::SetY(double y) {
	second = y;
}

Complex::operator string () const
{
	stringstream ss;

	ss << " x = " << GetX() << endl;
	ss << " y = " << GetY() << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Complex& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Complex& f)
{
	cout << "Input coordinates:" << endl;
	cout << " x = "; in >> f.first;
	cout << " y = "; in >> f.second;
	return in;
}

Complex& Complex::operator = (const Complex& r)
{
	first = r.first;
	first = r.first;
	return *this;
}

Complex Complex::operator ++()
{
	first++;
	return *this;
}

Complex Complex::operator --()
{
	first--;
	return *this;
}

Complex Complex::operator ++(int)
{
	Complex t(*this);
	second++;
	return t;
}

Complex Complex::operator --(int)
{
	Complex t(*this);
	second--;
	return t;
}

Complex operator - (const Complex& first, const Complex& second)
{
	double newComplexX = first.GetX() - second.GetX();
	double newComplexY = first.GetY() - second.GetY();

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}

Complex operator / (const Complex& first, const Complex& second)
{
	double firstX = first.GetX();
	double firstY = first.GetY();
	double secondX = second.GetX();
	double secondY = second.GetY();

	double newComplexX = (firstX * secondX + firstY * secondY) / (secondX * secondX + secondY * secondY);
	double newComplexY = (secondX * firstY - firstX * secondY) / (secondX * secondX + secondY * secondY);

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}

Complex conj(Complex c)
{
	double newComplexX = c.GetX();
	double newComplexY = -c.GetY();

	Complex newComplex(newComplexX, newComplexY);

	return newComplex;
}
