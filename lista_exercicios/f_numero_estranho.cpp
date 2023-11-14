#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

    unsigned int n;
    int estranhos[3] = {1, 14, 144};

    
    cin >> n;
    string n_string = to_string(n); 

    for(int i = 0; i < n_string.length(); i++) {
        if((n_string.at(i) == estranhos[0]) || (n_string.at(i) == estranhos[1]) || (n_string.at(i) == estranhos[2])) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
