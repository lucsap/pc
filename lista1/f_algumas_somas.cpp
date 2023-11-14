#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned int n, a, b, soma=0;
    cin >> n >> a >> b;

    for(int i = 1; i <= n; i++) {
        char charNum;
        charNum = static_cast<char>(i);
        
        if ((i >= a) && (i <= b))
        {
            soma += i;
        }
        if ()
        {
        }
    }

    cout << soma << "\n";

    return 0;
}