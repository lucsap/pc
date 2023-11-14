#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int n;
    vector<string> amigos;
    vector<int> matricula;

    cin >> n;

    for(int i = 0; i < n; i++) {
        char input[25];
        cin >> input;
        amigos.push_back(input);
        matricula.push_back(i);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < amigos[i].length(); j++) {
            cout << amigos[i][j] << "\n";            
        }
        // cout << matricula[i] << "\n";
    }

        return 0;
}
