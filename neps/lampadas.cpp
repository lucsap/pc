#include <iostream>

using namespace std;

int main() {

    int N, it, lampA = 0, lampB = 0;

    cin >> N;

    for (int i=0;i < N;i++) {
        cin >> it;

        if(it == 1 && lampA == 0) {
            lampA = 1;
        } else if(it == 1 && lampA == 1) {
            lampA = 0;
        }
        
        if(it == 2) {
            if(lampA == 0) {
                lampA = 1;
            } else if(lampA == 1) {
                lampA = 0;
            }

            if(lampB == 0) {
                lampB = 1;
            } else if(lampB == 1) {
                lampB = 0;
            }
        }
    }

    cout << lampA << endl;
    cout << lampB << endl;

    return 0;
}