////////////////////////////////////////////////////
///////////////////////////
//Vector
#pragma once
#include "Vector2D.h"

class Vector:public Vector2D
{

public:
	Vector();
	Vector(double x, double y);
	Vector(const Vector&);
	
	friend	double operator *(Vector g, Vector f);
	friend Vector operator *(Vector g, double l);

	double Modul();

	friend bool operator <(Vector g, Vector f);
	friend bool operator > (Vector g, Vector f);
	friend bool operator ==(Vector g, Vector f);

	Vector& operator ++();
	Vector& operator --();
	Vector operator ++(int);
	Vector operator --(int);

};

