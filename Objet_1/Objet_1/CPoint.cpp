#include "CPoint.h"
#include <stdlib.h>

int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}

void CPoint::setX(int nX)
{
	this->nX = nX;
}

void CPoint::setY(int y)
{
	this->nY = nY;
}

void CPoint::init(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

//Constructeur sans paramètre
CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
}

//Constructeur avec paramètre(s)
CPoint::CPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
	this->pnX = new int;
	*pnX = 0;
}

//Destructeur
CPoint::~CPoint()
{
	delete pnX;
}