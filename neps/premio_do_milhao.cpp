#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long dias, acessos, total_acessos = 0, n = 0, tot_dias = 0;
    cin >> dias;

    while (n < dias) {
        cin >> acessos;
        total_acessos += acessos;
        n++;

        if(total_acessos >= 1000000 && tot_dias == 0) {
            tot_dias = n;
        }

    }

    cout << tot_dias << endl;

    return 0;
}