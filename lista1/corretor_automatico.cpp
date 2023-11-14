#include <bits/stdc++.h>

using namespace std;

// long long = 10¹8

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    char escolha, resposta;
    float nota, acertos;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> escolha >> resposta;
        if(escolha == resposta) {
            acertos++;
        }
    }

    nota = (acertos / n) * 10;

    cout << fixed << setprecision(2) <<"Nota: " << nota << "\n";

    return 0;
}