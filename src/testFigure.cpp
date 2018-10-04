#include <iostream>
#include "triangle.h"
#include "rectangle.h"
#include "disque.h"

using namespace std;

int main() {
triangle t;
t.base=7.7;
t.hauteur=4;
t.l1=2.5;
t.l2=4.7;
t.l3=5.9;
rectangle r;
r.lo=4.2;
r.la=2.4;
disque d;
d.r=2.8;

	cout << endl << "Triangle" << endl;
	cout << "Calcul Perimetre : " << t.calculPerimetre() << endl;
	cout << "Calcul Surface : " << t.calculSurface() << endl << endl;

	cout << "Rectangle" << endl;
	cout << "Calcul Perimetre : " << r.calculPerimetre() << endl;
	cout << "Calcul Surface : " << r.calculSurface() << endl << endl;

	cout << "Disque" << endl;
	cout << "Calcul Perimetre : " << d.calculPerimetre() << endl;
	cout << "Calcul Surface : " << d.calculSurface() << endl << endl;

return 0;
}
