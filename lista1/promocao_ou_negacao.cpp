#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned int n, m;
    float r, p, total_regular, total_promocional;

    cin >> n >> r;
    cin >> m >> p;

    total_regular = r / n;
    total_promocional = p / m;

    if(total_promocional < total_regular) {
        cout << "Promocao" << "\n";
    } else {
        cout << "Enganacao" << "\n";
    }

    return 0;
}