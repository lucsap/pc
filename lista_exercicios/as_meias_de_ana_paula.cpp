#include <bits/stdc++.h>
using namespace std;

int main() {

    unsigned int meias,  dias, total=0, cont=0;

    cin >> meias >> dias;

    while(meias > 0) {
        total++;
        cont++;
        if(cont == dias) {
            meias++;
            cont = 0;
        }
        meias--;
    }

    cout << total << "\n";

    return 0;
}