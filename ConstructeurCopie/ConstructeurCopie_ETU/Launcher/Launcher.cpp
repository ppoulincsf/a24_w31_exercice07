#include "pch.h"
#include <iostream>
#include "Ennemy.h"
#include "Hero.h"
#include "GameHelper.h"
using namespace std;
int main()
{
	GameHelper gameHelper;
	Hero hero("LuckyLuke");
	cout << "premier affichage :" << endl;
	cout << "-----------------" << endl;
	gameHelper.displayHeroStatus(hero);
	cout << endl << endl;

	cout << "deuxieme affichage :" << endl;
	cout << "-----------------" << endl;
	gameHelper.displayHeroStatus(hero);
	cout << endl << endl;
	
system("pause");

}
