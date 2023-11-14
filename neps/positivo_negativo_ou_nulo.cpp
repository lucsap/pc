#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;

    if(num > 0) {
        cout << "positivo" << endl;
    } else if(num < 0) {
        cout << "negativo" << endl;
    } else {
        cout << "nulo" << endl;
    }

    return 0;
}