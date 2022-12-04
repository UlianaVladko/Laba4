

#include <iostream>
#include "Header.h"
#include "MyMath.h"
#include "Characteristic.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    Weapon awp("AWP", 115, 5);

    cout << "Name of weapon\t" << awp.getName() << endl;
    cout << "Weapon damage inflicted\t" << awp.getDamage() << endl;
    cout << "Weight of weapon\t" << awp.getWeight() << endl<<endl;

    Characteristic awpCharacteristic(36);
    cout << "Characteristic of AWP\t" << awpCharacteristic.getDamage(awp) << endl<<endl;

    cout << "Add\t45.4 + 12485.2\t= " << MyMath::Add(45.4, 12485.2) << endl;
    cout << "Sub\t2 - 45.654\t= " << MyMath::Sub(2, 45.654) << endl;
    cout << "Mult\t79 * 13.1\t= " << MyMath::Mult(79, 13.1) << endl;
    cout << "Div\t4598 / 675.3\t= " << MyMath::Div(4598, 675.3) << endl<<endl;

    cout << "Number of MyMath method calls\t" << MyMath::count << endl<<endl;
}
