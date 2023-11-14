#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string expressao;
    unsigned int abertos, fechados;

    cin >> expressao;

    for (int i = 0; expressao[i] != "\0"; i++) {
        if(expressao[i] == "(") {
            abertos++;
        }
        if() {
            fechados++;
        }
    }

    if(abertos == fechados) {
        cout << "sim"
             << "\n";
    } else {
        cout << "nao"
             << "\n";
    }

    return 0;
}