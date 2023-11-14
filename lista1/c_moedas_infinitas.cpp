#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int N, A;
    cin >> N >> A;

    if((N % 500) != 0 && ((N%500) < A)) {
        cout << "Sim" << "\n";
    } else {
        cout << "Nao" << "\n";
    }

    return 0;
}