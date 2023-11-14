#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int n, rico=0, total=0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > rico) {
            rico = a[i];
        }
    }

    for(int i = 0; i < n; i++) {
        total += (rico - a[i]);
    }

    cout << total << "\n";

    return 0;
}
