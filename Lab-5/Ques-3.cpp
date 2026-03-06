#include <iostream>
using namespace std;

// Base Class
class Weapons {
public:
    void WeaponsDescription() {
        cout << "Weapons are used for attack or defense." << endl;
    }
};

// Level 2
class HotWeapons : public Weapons {
public:
    void HotWeaponsDescription() {
        cout << "Hot weapons use gunpowder or heat to damage." << endl;
    }
};

// Level 3
class Bombs : public HotWeapons {
public:
    void BombsDescription() {
        cout << "Bombs explode and cause destruction." << endl;
    }
};

// Level 4
class NuclearBombs : public Bombs {
public:
    void NuclearBombsDescription() {
        cout << "Nuclear bombs explode using nuclear fission and fusion." << endl;
    }
};

int main() {

    NuclearBombs nb;

    // Calling all descriptions
    nb.WeaponsDescription();
    nb.HotWeaponsDescription();
    nb.BombsDescription();
    nb.NuclearBombsDescription();

    return 0;
}
