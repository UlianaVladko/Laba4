

#include <iostream>
using namespace std;

class Weapon {
public:
    string name;
    float damage;
    float weight;

    Weapon() {
        name = "AWP";
        damage = 115;
        weight = 6;
    };    
    
    Weapon(string name, float damage, float weight) {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
    }
};

int main()
{
    setlocale(LC_ALL, "");

   Weapon awp;
   cout << "Name " << awp.name << "\t" << "Damage " << awp.damage << "\t" << "Weight " << awp.weight << endl;

   Weapon* pawp = &awp;
   pawp->name = "AK-47";
   pawp->damage = 36;
   pawp->weight = 4.79;
   cout << "Name " << pawp->name << "\t" << "Damage " << pawp->damage << "\t" << "Weight " << pawp->weight << endl;
}

