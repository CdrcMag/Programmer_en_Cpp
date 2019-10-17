#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;//si retir�, les d�pendances comme cout et endl ne marcheront plus, il faudra rajouter std:: devant chacune.

//Exemple de programme en C ++




int main()
{
	
	//Variable locale qui ne changera pas
	const int NFOIS = 5;

	//Variable(s)
	int i = 0;
	float x = 0.0;
	float racx = 0.0;


	//Affiche combien de fois une racine sera calcul�e
	std::cout << "Je vais vous calculer " << NFOIS << " racines carrees\n";

	//Calcul NFOIS les racines carr�es
	for (i = 0; i < NFOIS; i++) 
	{

		std::cout << "Donnez un nombre : ";

		//r�cup�re l'input utilisateur
		std::cin >> x;


		if (x < 0.0)
		{
			std::cout << "Le nombre " << x << " ne possede pas de racine carree\n";
		}

			
		else
		{
			//sqrtf(x) calcule la racine carr�e d'un float
			racx = sqrtf(x);
			std::cout << "Le nombre " << x << " a pour racine carree " << racx << std::endl;
		}
	}

	std::cout << "Travail Termine" << std::endl;
	


	return 0;
}


