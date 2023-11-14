#include <bits/stdc++.h>

using namespace std;



int main() {

    unsigned int n;
    char seq[3], aux[1];
    string abc = "abc";

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> seq;

        if (seq == abc) {
            cout << "YES" << "\n";
        } else {
            if(seq[0] == 'a' && seq[1] != 'b') {
                aux[0] = seq[1];
                seq[1] = seq[2];
                seq[2] = aux[0];

                if(seq == abc) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else if(seq[1] == 'b' && seq[0] != 'a') {
                aux[0] = seq[0];
                seq[0] = seq[2];
                seq[2] = aux[0];

                if(seq == abc) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else if(seq[2] == 'c' && seq[0] != 'a') {
                aux[0] = seq[0];
                seq[0] = seq[2];
                seq[2] = aux[0];

                if(seq == abc) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}