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
    // sws;
    int N, Q;

    cin >> N >> Q;

    string s;
    for(int i=0;i<N;i++) {
        s += (char)('A' + i);
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N - 1; j++) {
            cout << "? " << s[j] << s[j + 1] << endl;
            fflush(stdout);
            char ans;
            cin >> ans;
            if(ans == '>') {
                swap(s[j+1], s[j + 2]);
            } else if(ans == '<') {
                swap(s[j+2], s[j + 1]);
            }
        }
    }

    cout << "! " << s.c_str() << endl;
    fflush(stdout);
    return 0;
}
