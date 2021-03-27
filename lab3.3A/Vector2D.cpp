//////////////////////////////////////
/////////////////////
//Vector2D
#include "Vector2D.h"
#include<iostream>
#include <string>
#include <sstream>

using namespace std;
Vector2D::Vector2D()
	: x(0), y(0)
{}

Vector2D::Vector2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector2D::Vector2D(const Vector2D& t)
{
	this->x = t.x;
	this->y = t.y;
}
istream& operator >> (istream& in, Vector2D& a)
{
	cout << "x = "; in >> a.x;
	cout << "y = "; in >> a.y;

	return in;
}
Vector2D::operator string() const
{
	stringstream sout;
	sout << "(" << this->x << "; " << this->y << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, Vector2D& a)
{
	out << string(a) << endl;
	return out;
}