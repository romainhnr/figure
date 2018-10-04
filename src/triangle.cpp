#include "triangle.h"
#include <iostream>

	double triangle::calculPerimetre() {
	return(l1+l2+l3);
}
	double triangle::calculSurface() {
	return((base*hauteur)/2);
}
