#include "stdafx.h"
#include "Hero.h"

Hero::Hero(string _name) : name(_name)
{
	this->life = INITIAL_LIFE;
	Enemy ennemi1("Joe", 500);
	Enemy ennemi2("Jack", 300);
	Enemy ennemi3("William", 200);
	Enemy ennemi4("Avrael");

	//rappel : ennemis est un tableau dynamique !
	enemies = new Enemy[NB_ENEMIES]{ennemi1, ennemi2, ennemi3, ennemi4};
}

Hero::~Hero()
{
	delete[] enemies;
}

Enemy* Hero::getEnemies() const
{
	return this->enemies;
}

string Hero::toString()
{
	return name + ", " + to_string(life) + " de vie restante";
}
























