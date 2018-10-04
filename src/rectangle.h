#pragma once
#include "figure.h"

class rectangle : public figure
{
	public :
		double la,lo;
		double calculPerimetre();
		double calculSurface();
};

