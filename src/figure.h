/*! \file figure.h
 * \brief fichier .h de figure
 * \author Romain Henry
 * \version 1.0
*/

#pragma once

/*! \class figure
 * \brief la classe figure est la classe mère dont triangle, rectangle et disque hérite
 * cela calcule le périmètre et la surface d'une figure, ici : triangle, rectangle et disque
 * grâce à deux formules : calculPerimetre() et calculSurface()
*/

class figure
{
	public :
/*! \brief La classe mère figure dispose d'aucun paramètre et retourne 0
 * Les formules sont surchargées dans les classes filles
*/
		double calculPerimetre();
		double calculSurface();
};

