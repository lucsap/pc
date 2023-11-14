#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int n, garfos, facas, colheres, total=0, count=0;
    cin >> n >> garfos >> facas >> colheres;
    total = colheres;

    while((total < n) && (garfos > 0) && (facas > 0)) {
        garfos--;
        facas--;
        total++;
    }

    if(total > n) {
        total = n;
        cout << total << "\n";
    } else {
        cout << total << "\n";
    }

    return 0;
}