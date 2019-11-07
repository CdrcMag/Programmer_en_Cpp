#include "Point.h"
#include <iostream>

using namespace std;

//Déclaration d'un compteur pour retourner le nombre d'objets instanciés
static int nbrIteration;

//Constructeur avec arguments x et y du point
Point::Point(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
	nbrIteration++;
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

int Point::getNbrIteration()
{
	return nbrIteration;
}


//Destructeur
Point::~Point()
{

}
