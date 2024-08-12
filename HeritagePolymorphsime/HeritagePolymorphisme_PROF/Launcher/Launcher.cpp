#include "pch.h"
#include <iostream>
#include "Avion.h"
#include "AvionChasse.h"
#include "AvionCommercial.h"
#include "Transponder.h"
using namespace std;
int main()
{
	Transponder transpond;
  Avion avion("A-123", "John");
	AvionChasse chasse("US-765", "Dan", "Tomahawk", "Oussamen Une Lada");
	AvionCommercial commercial("AC-5434", "Bob", "Toronto", 235);

  cout << transpond.transpond(avion) << endl << endl;
	cout << transpond.transpond(chasse) << endl << endl;
	cout << transpond.transpond(commercial) << endl << endl;

	//chasse.updatePosition(234.7, 222.9);
	chasse.launchMissile();
	//commercial.updatePosition(72.3, 998.3);
	commercial.setAutoPilot(true);

	cout << transpond.transpond(chasse) << endl;
	cout << transpond.transpond(commercial) << endl;

	


	/////////////////////////////////////////////////////////////////
	//Réponses :

	//Question 1) Par héritage, un AvionCommercial EST UN avion, en appelant le transpond, on va afficher les infos d'un Avion et non d'un AvionCommercial spécifiquement
	//Question 2) Un Avion n'EST PAS un AvionCommercial, il n'y a pas de lien d'héritage dans ce sens
	/////////////////////////////////////////////////////////////////




	//Question : Pourquoi ceci marche ?
	//Avion avion = commercial;
	//cout << transpond.transpond(avion) << endl;
	

	//Question : Pourquoi ceci ne marche pas ?	
	//AvionCommercial commercial2 = avion;
	
	
	system("pause");
}
