#include <bits/stdc++.h>
using namespace std;

int main() {

    int new_cpf[11] = {0, 4, 2, 7, 1, 6, 4, 1, 1};             // Coloque um número aleatório de 9 digitos que o último número seja o digito '1', separado por ,
    int j = 10, d1 = 0, d2 = 0;

    for(int i = 0; i < 9; i++) {                                // Calcula o penúltimo digito do cpf
        d1 += (new_cpf[i]*j);
        j--;
    }

    d1 = (d1 * 10) % 11;
    new_cpf[9] = d1;
    j = 11;

    for(int i = 0; i < 10; i++) {                               // Calcula o último digito do cpf
        d2 += (new_cpf[i] * j);
        j--;
    }

    d2 = (d2 * 10) % 11;
    new_cpf[10] = d2;

    for(int i = 0; i < 11; i++) {                               // Imprime o novo cpf falso
        cout << new_cpf[i];
    }

    cout << "\n";

    return 0;
}