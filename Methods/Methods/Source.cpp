

#include "Header.h"

Weapon::Weapon() :Weapon("AWP", 115, 5) {}

Weapon::Weapon(string name, float damage, float weight) : name(name), damage(damage), weight(weight) {}

Weapon::~Weapon() {
	cout << "Destructor called for Weapon " << name << endl;
}

string Weapon::getName() {
	return this->name;
}

float Weapon::getDamage() {
	return this->damage;
}

float Weapon::getWeight() {
	return this->weight;
}

void Weapon::setDamage(float damage) {
	this->damage = damage;
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
