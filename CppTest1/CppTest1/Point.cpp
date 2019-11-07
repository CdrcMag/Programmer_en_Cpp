#include "Point.h"
#include <iostream>

using namespace std;

//Constructeur avec arguments x et y du point
Point::Point(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
}

//Fonction de deplacement en rajoutant x et y aux coordonnées
void Point::Deplace(float fMove_x, float fMove_y)
{
	this->fX += fMove_x;
	this->fY += fMove_y;
}

//Méthode d'affichage
void Point::Afficher()
{
	cout << "X : " << this->fX << endl;
	cout << "Y : " << this->fY << endl;
}


//Destructeur
Point::~Point()
{

}
