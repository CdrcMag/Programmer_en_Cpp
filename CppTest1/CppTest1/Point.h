#pragma once

class Point
{
private:

	//Coordonnées du point
	float fX;
	float fY;
	
public:
	//Constructeur
	Point(float fX, float fY);

	//Déclaration des méthodes membres
	void Deplace(float fMove_x, float fMove_y);
	void Afficher();

	//Destructeur
	~Point();
};

