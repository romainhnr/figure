#pragma once
#include "figure.h"

class triangle : public figure
{
	public :
                double base,hauteur,l1,l2,l3;
		double calculPerimetre();
		double calculSurface();
};

