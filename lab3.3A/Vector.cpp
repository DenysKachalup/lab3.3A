/////////////////////////////////////////////
//////////////////////////
//vector
#include "Vector.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;

Vector::Vector()
	: Vector2D() {}

Vector::Vector(double a, double b)
	:Vector2D(a, b) {}

Vector::Vector(const Vector& t)
	: Vector2D(t) {}

double operator * (Vector g, Vector f)
{
	double t = g.getX() * f.getX() + g.getY() * f.getY();
	return t;
}

Vector operator * (Vector g, double l)
{
	Vector tmp(0.0,0.0);
	double a = g.getX() * l;
	tmp.setX(a);
	a = g.getX() * l;
	tmp.setY(a);
	return tmp;
}

double Vector::Modul()
{
	double mod = sqrt((getX() * getX()) + (getY() * getY()));
	return mod;

}

bool operator > (Vector a, Vector b)
{
	return (a.Modul() > b.Modul());
}

bool operator < (Vector a, Vector b)
{
	return (a.Modul() < b.Modul());
}

bool operator ==(Vector a, Vector b)
{
	return (a.Modul() == b.Modul());
}

Vector& Vector::operator ++()
{
	setX(getX() + 1);
	return *this;
}

Vector& Vector::operator --()
{
	setY(getY() - 1);
	return *this;
}

Vector Vector::operator ++(int)
{
	Vector tmp = *this;
	setX(getX() + 1);
	return tmp;
}

Vector Vector::operator --(int)
{
	Vector tmp = *this;
	setY(getY() - 1);
	return tmp;
}
