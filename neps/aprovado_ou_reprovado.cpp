#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double n1, n2, media_final;
    cin >> n1 >> n2;
    media_final = (n1 + n2) / 2;

    if(media_final >= 7) {
        cout << "Aprovado" << endl;
    } else if(media_final >= 4 && media_final < 7) {
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return 0;
}