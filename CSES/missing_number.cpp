#include <bits/stdc++.h>

using namespace std;

int missing_number(int number) {
    return number - 1;
}

int main() {

    int n, number;
    cin >> n;
    vector<int> arr(0, n);

    for (int i = 0; i < n-1; i++) {
        cin >> number;
        arr.push_back(number);
    }

    sort(arr.begin(), arr.end());

    for (int i = 1; i < n+1; i++) {
        if (arr[i-1] == i) {
            continue;
        } else {
            cout << i << endl;
            break;
        }
    }

    return 0;
}