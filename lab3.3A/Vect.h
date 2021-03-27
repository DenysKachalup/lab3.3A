///////////////////////////////////////////////////////////////////
///////////////////////////////
//Vect
#pragma once
#include "Vector2D.h"

class Vect :private Vector2D
{

public:
	Vect();
	Vect(double x, double y);
	Vect(const Vect&);

	operator string () const;

	friend	double operator *(Vect g, Vect f);
	friend Vect operator *(Vect g, double l);

	double Modul();

	friend bool operator <(Vect g, Vect f);
	friend bool operator > (Vect g, Vect f);
	friend bool operator ==(Vect g, Vect f);

	friend istream& operator >> (istream& in, Vect& a);
	friend ostream& operator << (ostream& in, Vect& a);

	Vect& operator ++();
	Vect& operator --();
	Vect operator ++(int);
	Vect operator --(int);

};


