#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int tam, centenas=0;
    int bits[10000];

    cin >> tam;
    for(int i = 0; i < tam; i++) {
        cin >> bits[i];
    }
    for (int i = 0; i < tam;i++) {
        if((i-1 >= 0) && (i+1 <= tam-1) && (bits[i-1] == 1) && (bits[i] == 0) && (bits[i+1] == 0)) {
            centenas++;
        }
    }

    cout << centenas << "\n";

    return 0;
}