/*! \file disque.h
 * \brief fichier .h de disque
 * \author Romain Henry
 * \version 1.0
*/


#pragma once
#include "figure.h"

/*! \class disque
 * \brief la classe fille disque hérite de la classe mère figure
 * cela calcule le périmètre et la surface d'un disque
 * grâce à deux formules : calculPerimetre() et calculSurface() 
*/

class disque : public figure
{
	public :
/*! \brief classe disque
 * \param r	elle a en paramètre le rayon (r) du disque qui est en double (nombre décimal)
 * \return les deux formules retourne un double qui est le résulat du calcul effectué
*/		double r;
		double calculPerimetre();
		double calculSurface();
};

