#include <iostream>
#include "Vector2D.h"
#include "Vect.h"

using namespace std;

int main()
{
	Vector2D q(2.0, 4.0);
	cout << q;

	Vect A(1, 1);
	cout << "A  " << endl; cin >> A;
	cout << "A = " << A << endl;

	Vect B;
	cout << "B  " << endl; cin >> B;
	cout << "B = " << B << endl;

	double scal = A * B;
	cout << "ScalVect = " << scal << endl;

	Vect C = A * scal;
	cout << "C = " << C;

	Vect D = B * scal;
	cout << "D = " << D;

	cout << "|A| = " << A.Modul() << endl;
	cout << "|B| = " << B.Modul() << endl;
	cout << "|C| = " << C.Modul() << endl;
	cout << "|D| = " << D.Modul() << endl << endl;

	bool t = A < B;
	cout << "A < B  = " << t << endl;
	t = A > B;
	cout << "A > B  = " << t << endl;
	t = A == B;
	cout << "A == B = " << t << endl<<endl;

	++A;
	--A;
	B++;
	B--;
	cout << "A = " << A;
	cout << "B = " << B<<endl<<endl<<endl;
	///////////////////////////////////
	/////////////////////////////////////
	////////////////////////////////////////////////

	Vect a(1, 1);
	cout << "A  " << endl; cin >> a;
	cout << "A = " << a << endl;

	Vect b;
	cout << "B  " << endl; cin >> b;
	cout << "B = " << b << endl;

	scal = a * b;
	cout << "ScalVect = " << scal << endl;

	Vect c = a * scal;
	cout << "C = " << c;

	Vect d = b * scal;
	cout << "D = " << d;

	cout << "|A| = " << a.Modul() << endl;
	cout << "|B| = " << b.Modul() << endl;
	cout << "|C| = " << c.Modul() << endl;
	cout << "|D| = " << d.Modul() << endl << endl;

    t = a < b;
	cout << "A < B  = " << t << endl;
	t = a > b;
	cout << "A > B  = " << t << endl;
	t = a == b;
	cout << "A == B = " << t << endl << endl;

	++a;
	--a;
	b++;
	b--;
	cout << "A = " << a;
	cout << "B = " << b;

	return 0;
}

