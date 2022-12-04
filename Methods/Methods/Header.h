#pragma once

#include <string>
#include <iostream>
using namespace std;

class Weapon {
public:
	string name;
	float damage;
	float weight;

	Weapon();

	Weapon(string, float, float);

	~Weapon();

	bool raise(float);

	float sumweight(float);

	float sumweight(Weapon&);

	friend class Characteristic;

	string getName();
	float getDamage();
	float getWeight();

	void setDamage(float);
};
