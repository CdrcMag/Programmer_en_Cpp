#pragma once
class Point2
{
private:

	//Coordonn�es du point
	float fX;
	float fY;

public:
	//Constructeur
	Point2(float fX, float fY);

	//D�claration des m�thodes membres
	void Deplace(float fMove_x, float fMove_y);
	float abscisse();//retourne X
	float ordonnee();//retourne Y
	void Homothetie(float fRapport);
	void Rotation(float fAngle);
	float rho();
	float theta();

	//Destructeur
	~Point2();
};

