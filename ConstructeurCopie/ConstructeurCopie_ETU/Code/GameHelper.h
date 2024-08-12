#pragma once
using namespace std;
#include <iostream>
#include "Hero.h"
#include "Enemy.h"
class GameHelper
{
	public:
		GameHelper();
		~GameHelper();
		void displayHeroStatus(Hero hero);
		static const int NB_ENEMIES = 3;
};

