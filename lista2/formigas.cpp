#include <bits/stdc++.h>
#include <string>
using namespace std;
#define sws std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define endl "\n"
#define ff first
#define ss second

const ll MOD = 1e9+7;
const ll MAX = 2e5+2;
const ll INF = INT64_MAX;

int32_t main() {
    sws;

    unsigned int total=0, lastRa=0;
    bool ra = false;
    string animal;

    cin >> animal;

    for (int i = 0; i < animal.length(); i++) {
        if (animal[i] == 'r') {
            ra = true;
            total += lastRa;
            lastRa = 0;
        }
        if(animal[i] == '.' && ra == true) {
            lastRa++;
        }
        if (animal[i] == 's' && ra == true) {
            total = total - lastRa;
            ra = false;
            // subtrair a quantidade de F que lasRa comeu
        }
    }

    total += lastRa;

    cout << total << endl;
    
    return 0;
}