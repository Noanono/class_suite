#include <iostream>
using namespace std;

#include "Suite.h"

int main() {

    /* Utilisation des methodes de la classe suite */

    Suite s1(3);
    int k = 0;

    cout << "Quelle n-ieme terme de la suite voulez vous calculer ?" << endl;
    cin >> k;

    s1.afficher_terme(k);

    return 0;
}
