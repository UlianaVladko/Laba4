

#include "Header.h"
#include "Characteristic.h"

Characteristic::Characteristic(float power) :power(power) {}

float Characteristic::getDamage(Weapon& Weapon) {
	return this->power + Weapon.damage;
}