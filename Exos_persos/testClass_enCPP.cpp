#include <iostream>
using namespace std;


int main()
{
    Personnage perso1, perso2;
    perso1.attack(perso2);
    perso2.attack(perso1);
    perso1.heal(15);
    perso2.heal(20);

    perso2.switchWeapon("Coup de bite", 69);
    perso2.attack(perso1);
    return 0;
}
