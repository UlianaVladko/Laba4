#include "Header.h"

Weapon::Weapon(string name, float damage, float weight) : name(name), damage(damage), weight(weight) {}

Weapon::Weapon() :Weapon("AWP", 115, 5) {}


Weapon::~Weapon() {
	cout << "Destructor called for Weapon " << name << endl;
}

bool Weapon::raise(float maxweight) {
	return maxweight >= this->weight;
}

float Weapon::sumweight(float loadweight) {
	return this->weight + loadweight;
}

float Weapon::sumweight(Weapon& Weapon) {
	return sumweight(Weapon.weight);
}