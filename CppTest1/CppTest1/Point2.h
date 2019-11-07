#pragma once
class Point2
{
private:

	//Coordonn�es carth�sienne du point
	float fX;
	float fY;

	//Coordonn�es polaire du point
	float distance;
	float angle;





public:
	//Constructeur
	Point2(float fX, float fY);

	//D�claration des m�thodes membres

	//M�thode de d�placement de point
	void Deplace(float fMove_x, float fMove_y);

	//Accesseurs
	float abscisse();//retourne X
	float ordonnee();//retourne Y

	//Affichage des coordonn�es polaires
	void AfficherPolaire();

	//M�thodes de l'exercice 3
	void Homothetie(float fRapport);
	void Rotation(float fAngle);
	float rho();
	float theta();

	//Destructeur
	~Point2();
};

