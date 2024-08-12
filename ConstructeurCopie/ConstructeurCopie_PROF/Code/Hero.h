using namespace std;
#include <string>
#include "Enemy.h"

#pragma once

class Hero
{
	public:
		Hero(string _name);
		//constructeur de copie
		Hero(const Hero& hero);
		~Hero();
		string toString();
		Enemy* getEnemies() const;
		static const int NB_ENEMIES = 4;
		const int INITIAL_LIFE = 1000;
	
	private:
		string name;
		int life;
		Enemy* enemies;
	
};

