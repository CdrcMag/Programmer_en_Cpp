#pragma once
class Point2
{
private:

	//Coordonnées du point
	float fX;
	float fY;

public:
	//Constructeur
	Point2(float fX, float fY);

	//Déclaration des méthodes membres
	void Deplace(float fMove_x, float fMove_y);
	float abscisse();//retourne X
	float ordonnee();//retourne Y

	//Destructeur
	~Point2();
};

