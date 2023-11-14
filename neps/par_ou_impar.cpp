#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned int bino, cino;
    cin >> bino;
    cin >> cino;

    if(((bino + cino) % 2) == 0){
        cout << "Bino" << endl;
    } else {
        cout << "Cino" << endl;
    }
}