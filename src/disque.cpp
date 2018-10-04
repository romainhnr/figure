#include "disque.h"
#include <iostream>
#include <math.h>

	double disque::calculPerimetre() {
	return(2*M_PI*r);
}
	double disque::calculSurface() {
	return((M_PI*(r*r)));
}	
