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

    unsigned int queries, type, number;
    set<int> items;
    cin >> queries;

    for(int i = 0; i < queries; i++){
        cin >> type >> number;
        if(type == 1) {
            items.insert(number);
        } else if(type == 2) {
            if(items.count(number)) {
                cout << "Sim" << endl;
            } else {
                cout << "Nao" << endl;
            }
        }

    }

    return 0;
}
