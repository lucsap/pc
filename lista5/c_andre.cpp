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

    ll t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        ll k = n;

        while(k > 0) {
            k = n - 1;
            if ((n & k) == 0) {
                break;
            }
            n = n & (n-1);
        }

        cout << k << endl;

    }

    return 0;
}
