#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned int p, r;
    cin >> p >> r;

    if(p == 0) {
        cout << "C" << endl;
    } else {
        if(r == 0) {
            cout << "B" << endl;
        } else {
            cout << "A" << endl;
        }
    }

    return 0;
}