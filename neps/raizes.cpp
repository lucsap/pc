#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << fixed << setprecision(4) << sqrt(x) << endl;
    }

    return 0;
}