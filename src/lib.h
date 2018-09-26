/*! \lib.h
*ici calcul aditions etc... 
*multimplication et division
*Adrien Heffer
*version 1.0
*/
#pragma once

/*! \class calcul
*voilà la classe de calcul
*/
class calcul
{
public :
/*! \brief
*\nombre 1
*\nombre 2
*\return nombre 1 + 2
*/
int somme(int nombre_1, int nombre_2);
/*! \brief
*\nombre 3
*\nombre 4
*\return nombre 3 * 4
*/
int mult(int nombre_3, int nombre_4);
/*! \brief
*\nombre 5
*\nombre 6
*\return nombre  5 / 6
*/
int div(int nombre_5, int nombre_6);
/*! \brief
*\nombre 7
*\nombre 8
*\return nombre 7 - 8
*/
int sous(int nombre_7, int nombre_8);
};
