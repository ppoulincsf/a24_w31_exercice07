#include "stdafx.h"
#include "GameHelper.h"

GameHelper::GameHelper()
{
}

GameHelper::~GameHelper()
{
}

void GameHelper::displayHeroStatus(Hero hero)
{
	cout << hero.toString() << endl;
	for (int i = 0; i < Hero::NB_ENEMIES; i++)
	{
		cout << hero.getEnemies()[i].toString() << endl;
	}
}