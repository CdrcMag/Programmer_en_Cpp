#pragma once

class CPoint
{

private:

	//Donn�es membres
	int nX;
	int nY;

	int *pnX;


public:

	//Mutateurs
	int getX();
	int getY();

	//Accesseurs
	void setX(int x);
	void setY(int y);

	//m�thodes
	void init(int nX, int nY);

	//Constructeurs
	CPoint();

	CPoint(int nX, int nY);

	//Destructeur
	~CPoint();

};

