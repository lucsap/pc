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
 
    unsigned int n, f, p, car, total=0;
    queue<int> fila;
 
    cin >> n >> f >> p;
 
    for (int i = 0; i < n; i++) {
        cin >> car;
        fila.push(car);
    }
 
    unsigned int carroFrente = 0, i=0;
 
    while(!fila.empty()) {
        carroFrente = fila.front();
        if(i % f == 0) {
            if(carroFrente>p) {
                total += 10;
                fila.push(carroFrente-2);
            } else {
                total += 5;
            }
            fila.pop();
        } else {
            total++;
            fila.pop();
        }
        i++;
    }
 
    cout << total << endl;
 
    return 0;
}