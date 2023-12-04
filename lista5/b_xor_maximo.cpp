#include <bits/stdc++.h>
using namespace std;
#define sws std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

const ll MOD = 1e9+7;
const ll MAX = 2e5+2;
const ll INF = INT64_MAX;

int32_t main() {
    sws;

    ll n, result = 1;
    cin >> n;
    while(result <= n) {
        result *= 2;
    }

    cout << n << " " << ((result-1) ^ n) << endl;

    return 0;
}
