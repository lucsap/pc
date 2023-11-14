#include <bits/stdc++.h>
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

    unsigned int n, m, vel, prod, tempo=0;
    cin >> n >> m;
    

    for (int i = 0; i < n; i++) {
        cin >> vel;
    }

    for (int j = 0; j < m; j++) {
        cin >> prod;
        tempo += prod * vel;
    }
    cout << tempo << endl;
    
    return 0;
}
