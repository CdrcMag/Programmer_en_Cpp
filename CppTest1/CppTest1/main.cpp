#include <iostream>
#include <cmath>

//Fichier d'en-t�te d�clarant les membres de la classe point
#include "Point.h"

using namespace std;


int main()
{
	//D�claration d'un point aux coordon�es x : 0 et y : 0
	Point pt_un(0, 0);

	//L'affiche une fois
	pt_un.Afficher();

	//Le d�place en ajoutant les valeurs ci dessous
	pt_un.Deplace(-3.14, 12);

	//Re-affiche les coordonn�es du point
	pt_un.Afficher();

	//Valide que ce sont bien les coordon�es du point qui changent
	pt_un.Deplace(10, -2);

	//Affichage de validation final
	pt_un.Afficher();



	system("PAUSE");

	return 0;
}
