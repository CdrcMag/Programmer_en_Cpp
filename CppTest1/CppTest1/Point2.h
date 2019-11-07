#pragma once
class Point2
{
private:

	//Coordonnées carthésienne du point
	float fX;
	float fY;

	//Coordonnées polaire du point
	float distance;
	float angle;





public:
	//Constructeur
	Point2(float fX, float fY);

	//Déclaration des méthodes membres

	//Méthode de déplacement de point
	void Deplace(float fMove_x, float fMove_y);

	//Accesseurs
	float abscisse();//retourne X
	float ordonnee();//retourne Y

	//Affichage des coordonnées polaires
	void AfficherPolaire();

	//Méthodes de l'exercice 3
	void Homothetie(float fRapport);
	void Rotation(float fAngle);
	float rho();
	float theta();

	//Destructeur
	~Point2();
};

