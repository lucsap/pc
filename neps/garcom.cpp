#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned int bandejas, latas, copos, c_quebrados = 0, n = 0;
    cin >> bandejas;

    while(n < bandejas) {
        cin >> latas >> copos;

        if(latas > copos) {
            c_quebrados = c_quebrados + copos;
        }

        n = n + 1;
    }

    cout << c_quebrados << endl;

    return 0;
}