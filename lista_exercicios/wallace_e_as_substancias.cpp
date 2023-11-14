#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned int t;
    long long n;
    vector<long long> vetor_b;
    vector<long long> vetor_a;

    cin >> t;

    for(int i = 0; i < t; i++) {
        for(int i = 0; i < 7; i++) {
            cin >> n;
            vetor_b.push_back(n);
        }

        if((vetor_b[0] + vetor_b[1] + vetor_b[2]) == vetor_b[6]) {
            vetor_a = {vetor_b[0], vetor_b[1], vetor_b[2]};
        } else if((vetor_b[0] + vetor_b[1] + vetor_b[3]) == vetor_b[6]) {
            vetor_a = {vetor_b[0], vetor_b[1], vetor_b[3]};
        }

        for(int i = 0; i < 3 ;i++) {
            cout << vetor_a[i] << " ";
        }

        cout << "\n";

        vetor_b = {};
        vetor_a = {};
    }
    
    cout << "\n";

    return 0;
}