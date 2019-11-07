#pragma once

class Point
{
private:

	//Coordonn�es du point
	float fX;
	float fY;
	
public:
	//Constructeur
	Point(float fX, float fY);

	//D�claration des m�thodes membres
	void Deplace(float fMove_x, float fMove_y);
	void Afficher();

	//Destructeur
	~Point();
};

