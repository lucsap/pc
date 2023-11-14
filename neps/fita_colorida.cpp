#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, quantidade = 0;
    int fita[10000];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> fita[i];
    }

    for(int i = 0; i < n; i++) {
        if(fita[i] == 0) {
            cout << "Quant: " << quantidade << "\n";
            quantidade = 0;
        } else {
            quantidade++;
        }
    }

    cout << "\n";

    return 0;
}