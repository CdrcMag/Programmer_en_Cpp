#include "Point2.h"


#include <iostream>

using namespace std;

//Constructeur avec arguments x et y du point
Point2::Point2(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
}

//Fonction de deplacement en rajoutant x et y aux coordonnées
void Point2::Deplace(float fMove_x, float fMove_y)
{
	this->fX += fMove_x;
	this->fY += fMove_y;
}

//Accesseurs
float Point2::abscisse()
{
	return this->fX;
}
float Point2::ordonnee()
{
	return this->fY;
}

//Destructeur
Point2::~Point2()
{

}