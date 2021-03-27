//////////////////////////////////////////////////////////////////////
////////////////////////////////////////////
//Vect
#include "Vect.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;
Vect::Vect()
	: Vector2D() {}

Vect::Vect(double a, double b)
	: Vector2D(a, b) {}

Vect::Vect(const Vect& t)
	: Vector2D(t) {}

Vect::operator string() const
{
	stringstream sout;
	sout << "(" << getX() << "; " << getY() << ")";
	return sout.str();
}

double operator * (Vect g, Vect f)
{
	double t = g.getX() * f.getX() + g.getY() * f.getY();
	return t;
}

Vect operator * (Vect g, double l)
{
	Vect tmp(0.0, 0.0);
	double a = g.getX() * l;
	tmp.setX(a);
	a = g.getX() * l;
	tmp.setY(a);
	return tmp;
}

double Vect::Modul()
{
	double mod = sqrt((getX() * getX()) + (getY() * getY()));
	return mod;

}

bool operator > (Vect a, Vect b)
{
	return (a.Modul() > b.Modul());
}

bool operator < (Vect a, Vect b)
{
	return (a.Modul() < b.Modul());
}

bool operator ==(Vect a, Vect b)
{
	return (a.Modul() == b.Modul());
}

istream& operator >> (istream& in, Vect& a)
{
	double x, y;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	a.setX(x), a.setY(y);

	return in;
}
ostream& operator << (ostream& out, Vect& a)
{
	out << string(a) << endl;
	return out;
}

Vect& Vect::operator ++()
{
	setX(getX() + 1);
	return *this;
}

Vect& Vect::operator --()
{
	setY(getY() + 1);
	return *this;
}

Vect Vect::operator ++(int)
{
	Vect tmp = *this;
	setX(getX() + 1);
	return tmp;
}

Vect Vect::operator --(int)
{
	Vect tmp = *this;
	setY(getY() + 1);
	return tmp;
}