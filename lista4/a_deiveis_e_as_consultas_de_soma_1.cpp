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


vector<int> v;
vector<int> psum;

int sum(int l, int r) {
    if(l == 0)
        return psum[r];
    else
        return psum[r] - psum[l-1];
}

int32_t main() {

    sws;
    unsigned int n, pares;
    cin >> n >> pares;
    v.resize(n);

    for (int i = 0; i < pares; i++) {
        cin >> v[i];
    }

    psum.resize(n, v[0]);

    for(int i = 1; i < v.size(); i++) {
        psum[i] = v[i] + psum[i-1];
    }

    return 0;
}
