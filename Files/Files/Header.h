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

	bool raise(float maxweight);

	float sumweight(float loadweight);

	float sumweight(Weapon& Weapon);
};
