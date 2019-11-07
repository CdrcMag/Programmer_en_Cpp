#include "Point2.h"


#include <iostream>
#include <math.h>

using namespace std;

//Constructeur avec arguments x et y du point
Point2::Point2(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;


	this->distance = sqrt((pow(this->fX, 2)) + (pow(this->fY, 2)));
	this->angle = (atan(this->fY / this->fX)) * 180 / 3.141592653589;


}

//Affichage des coordonnées polaires du point (distance et angle)
void Point2::AfficherPolaire()
{
	cout << "Coordonees polaire : " << this->distance << "(Distance) " << this->angle << "(Angle)" << endl;
}





//Fonction de deplacement en rajoutant x et y aux coordonnées
void Point2::Deplace(float fMove_x, float fMove_y)
{
	this->fX += fMove_x;
	this->fY += fMove_y;
}

//Méthode d'homothétie du point
void Point2::Homothetie(float fRapport)
{
	this->fX = this->fX * fRapport;
	this->fY = this->fY * fRapport;
}

//Méthode de rotation d'un point en fonction d'un angle, par rapport à l'origine du plan
void Point2::Rotation(float fAngle)
{
	//Transformation de l'angle
	fAngle *= 3.141592653589 / 180;
	this->fX = this->fX * cos(fAngle) + this->fY * sin(fAngle);
	this->fY = -this->fY * sin(fAngle) + this->fY * cos(fAngle);

	//retourne les nouvelles coordonnées du point
	cout << "X apres rotation : " << round(this->fX) << endl;
	cout << "Y apres rotation : " << round(this->fY) << endl;

}

//Calcul de la distance 
float Point2::rho()
{
	float distance = sqrt( (pow(fX, 2)) + (pow(fY, 2)) );


	return distance;
}

//Calcul de l'angle
float Point2::theta()
{
	float angle = atan(this->fY / this->fX);

	return angle * 180 / 3.141592653589;

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