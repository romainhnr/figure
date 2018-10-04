/*! \file rectangle.h
 * \brief fichier .h de rectangle
 * \author Romain Henry
 * \version 1.0
*/

#pragma once
#include "figure.h"

/*! \class rectangle
 * \brief la classe fille rectangle hérite de la classe mère figure
 * cela calcule le périmètre et la surface d'un rectangle
 * grâce à deux formules : calculPerimetre() et calculSurface()
*/

class rectangle : public figure
{
	public :
/*! \brief classe rectangle
 * \param la	elle a en paramètre la largeur (la) du rectangle qui est en double (nombre décimal)
 * \param lo	elle aussi en paramère la longueur (lo) du rectangle qui est en double également
 * \return les deux formules retourne un double qui est le résultat du calcul effectué
*/ 
		double la,lo;
		double calculPerimetre();
		double calculSurface();
};

