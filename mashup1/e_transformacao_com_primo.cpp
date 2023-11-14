#include <bits/stdc++.h>
using namespace std;

#define sws std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mp make_pair
#define pii pair<int, int>
#define ii pair<int, int>
#define ll long long
#define pb push_back
#define endl "\n"

const ll MOD = 1e9+7;
const ll MAX = 2e5+2;
const ll INF = INT64_MAX;

void solve() {
    ll x, y; cin >> x >> y;
    ll aux = x - y;

    if(aux >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return;
}

int32_t main() {
    sws;
    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}