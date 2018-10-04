/* \file disque.h
 * \brief
 * \author Romain Henry
 * \version 1
 */


#pragma once
#include "figure.h"

/* \class disque
 * \brief la classe fille disque hérite de la classe mère figure
 * elle a en attribut le rayon (r) qui est en double (nombre décimal)
 * elle a aussi deux formules : le calcul du périmètre et de la surface d'un disque 
 * les deux formules retourne un double (un nombre décimal)
*/

class disque : public figure
{
	public :
/* \brief
 * \param
*/		double r;
		double calculPerimetre();
		double calculSurface();
};

