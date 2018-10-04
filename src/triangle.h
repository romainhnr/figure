/*! \file triangle.h
 * \brief fichier .h de triangle
 * \author Romain Henry
 * \version 1.0
*/

#pragma once
#include "figure.h"

/*! \class triangle
 * \brief la classe fille triangle hérite de la classe mère figure
 * cela calcule le périmètre et la surface d'un triangle
 * grâce à deux formules : calculPerimetre() et calculSurface()
*/

class triangle : public figure
{
	public :
/*! \brief classe triangle
 * \param base	elle a en paramètre la base du triangle qui est en double (nombre décimal)
 * \param hauteur	elle a en paramètre la hauteur du triangle qui est en double
 * \param l1	elle a en paramètre la longueur du premier côté (l1) du triangle qui est en double
 * \param l2	elle a en paramètre la longueur du deuxième côté (l2) du triangle qui est en double
 * \param l3	elle a en paramètre la longueur du troisième côté (l3) du triangle qui est en double
 * \return les deux formules retourne un double qui est le résulat du calcul effectué
*/
                double base,hauteur,l1,l2,l3;
		double calculPerimetre();
		double calculSurface();
};

