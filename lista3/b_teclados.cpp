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
    // sws;

    // unsigned int n, tamMap;
    // map<char, char> t1;

    // t1["a", "s", "d", "f", "g"] = "z", "x", "c", "v", "b";
    // cout << t1["a", "d"] << endl;
    // tamMap = t1.size();
    // // for(int i = 0; i < 26; i++) {

    // // }

    string t1, t2, word;
    map<char, char> mapping;

    cin >> t1;
    cin >> t2;

    for (int i = 0; i < t1.size(); i++) {
        mapping[t1[i]] = t2[i];
    }

    // for (auto &p : mapping) {
    //     cout << p.ff << ":" << p.ss << endl;
    // }

    unsigned int n; cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            cout << mapping.at(s[j]);
        }
        cout << endl;
    }

    return 0;
}
