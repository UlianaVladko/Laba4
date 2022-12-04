

#include <iostream>
using namespace std;

class Weapon {
public:
    string name;
    float damage;
    float weight;
    
    
    Weapon(string name, float damage, float weight) : name(name), damage(damage), weight(weight) {}
    Weapon() : Weapon("AWP", 115, 5) {}

    ~Weapon() {
        cout << "Destructor called for Weapon " << name << endl;
    }

    bool raise(float maxweight) {
        return maxweight >= this->weight;
    }

    float sumweight(float loadweight){
        return this->weight + loadweight;
    }

    float sumweight(Weapon& Weapon){       
        return sumweight(Weapon.weight);
    }
};

int main(){
    
    setlocale(LC_ALL, "");
        
    Weapon awp("AWP", 115, 5);
    cout << "Name "<<awp.name << "\t" <<"Damage "<< awp.damage << "\t" <<"Weight "<< awp.weight << endl;

    Weapon* pawp = new Weapon("AK-47", 36, 4.79);
    cout << "Name " << pawp->name << "\t" << "Damage " << pawp->damage << "\t" << "Weight " << pawp->weight << endl;

    cout << "\nCan you lift a 5 kg weapon \"AWP\" if your backpack only holds 6 kg?" << (awp.raise(6) ? "\n - true" : "\n - false") << endl;
    cout << "\nDo you really want to lift a 5 kg weapon \"AWP\" because your backpack is already loaded by 2 kg?\nNow your backpack is loaded by " << awp.sumweight(2) << " kg" << endl;
    cout << "\nYou have picked up a new weapon \"AK-47\" weighing 4.79 kg to the stock of existing weapons \"AWP\" weighing 5 kg.\nNow your backpack is loaded on " << awp.sumweight(*pawp) << " kg" << endl<<endl;
    
    delete pawp;
}