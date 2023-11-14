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

    char c;
    int n, x, maior = 0;
    stack<pii> presentes;
    pii topo;

    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> c >> x;
        if(c == 'A') {
            if(x > maior) {
                maior = x;
            }
            presentes.push(mp(x, maior));
        } else if(c == 'V') {
            if(!presentes.empty()) {
                topo = presentes.top();
                cout << topo.ss << endl;
            } else {
                cout << 0 << endl;
            }
        } else if(c == 'R') {
            presentes.pop();
        }
    }

    return 0;
}