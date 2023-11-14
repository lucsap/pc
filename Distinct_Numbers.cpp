#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned int n, number, distintos;
    vector<int> vetor;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        vetor.push_back(number);
    }
    sort(vetor.begin(), vetor.end());

    for (int i = 1; i <= n; i++) {
        if(vetor[i] != vetor[i-1]) {
            distintos++;
        }
    }

    cout << distintos << "\n";

    return 0;
}