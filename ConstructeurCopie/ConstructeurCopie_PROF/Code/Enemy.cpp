#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::Enemy(string _name, int _damage) : name(_name), damage(_damage)
{
	
}
	
Enemy::~Enemy()
{
}


string Enemy::toString()
{
	return this->name + ", " + to_string(this->damage) + " points de dommage";
}
