#pragma once

class Weapon;

class Characteristic {
private:
	float power;

public:
	Characteristic(float);

	float getDamage(Weapon&);
};
