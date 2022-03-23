#include <iostream>
#include "ArtificialPet.h"
#include "Furby.h"

using namespace std;

int main(void) {
    ArtificialPet* bao;

    bao = new Furby();

    cout << bao->getFullness() << endl;
    cout << bao->isHungry() << endl;
    
    bao->feed();
    cout << bao->getFullness() << endl;

    bao->feed();
    cout << bao->getFullness() << endl;

    bao->dance(3);
    cout << "dance" << endl;
    cout << bao->getFullness() << endl;
    cout << bao->isHungry() << endl;

    bao->play(1);
    cout << "play" << endl;
    cout << bao->getFullness() << endl;
    cout << bao->isHungry() << endl;
}