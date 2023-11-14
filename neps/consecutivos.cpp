#include <iostream>

using namespace std;

int main() {

    int N, value, max_seq=0, seq=0, last_value;

    cin >> N;

    for(int i = 0; i < N;i++) {
        cin >> value;

        if(i == 0) {
            last_value = value;
            seq++;
        } else if(value == last_value) {
            seq++;
        } else if(value != last_value) {
            seq = 0;
            last_value = value;
            seq++;
        }
        
        if(seq > max_seq) {
            max_seq = seq;
        }
    }

    cout << max_seq << endl;

    return 0;
}
