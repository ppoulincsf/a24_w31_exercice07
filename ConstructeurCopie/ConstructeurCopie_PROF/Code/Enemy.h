using namespace std;
#include <string>

#pragma once
class Enemy
{
	public:
		Enemy();
		Enemy(string _name, int _damage = 100);
		~Enemy();
		string toString();

	private:
		string name;
		int damage;
};

