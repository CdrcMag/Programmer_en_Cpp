#include <iostream>
#include <cmath>

//Fichier d'en-tête déclarant les membres de la classe Point et Point2
#include "Point.h"
#include "Point2.h"

using namespace std;


int main()
{
	/* Exercice 1 */

	//Déclaration d'un point aux coordonées x : 0 et y : 0
	Point pt_un(0, 0);

	//L'affiche une fois
	pt_un.Afficher();

	//Le déplace en ajoutant les valeurs ci dessous
	pt_un.Deplace(-3.14, 12);

	//Re-affiche les coordonnées du point
	pt_un.Afficher();

	//Valide que ce sont bien les coordonées du point qui changent
	pt_un.Deplace(10, -2);

	//Affichage de validation final
	pt_un.Afficher();

	/* Exercice 2 */

	//Déclaration d'un Point2
	Point2 pt_deux(44.6, 0.08);

	//Test des accesseurs abscisse et ordonnée
	cout << "Abscisse : " << pt_deux.abscisse() << endl;
	cout << "Ordonnee : " << pt_deux.ordonnee() << endl;


	/* Exercice 3 */






	system("PAUSE");

	return 0;
}
