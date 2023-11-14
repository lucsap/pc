#include <bits/stdc++.h>

using namespace std;

int main() {

    int tam;
    int campo[55];

    cin >> tam;

    for (int i = 0; i < tam; i++) {
        cin >> campo[i];
    }

    for (int i = 0; i < tam; i++) {
        int quantidade = 0;
        quantidade = quantidade + campo[i];

        if(i > 0) {
            quantidade = quantidade + campo[i-1];
        }

        if(i < tam-1) {
            quantidade = quantidade + campo[i+1];
        }

        cout << quantidade << endl;
    }

    return 0;
}