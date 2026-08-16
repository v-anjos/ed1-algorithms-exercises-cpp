#include <iostream>
using namespace std;

int main() {
    long N, T, i, j;

    cin >> N >> T;

    long Nuns[N];

    for (i = 0; i < N; i++) {
        cin >> Nuns[i];
    }

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (Nuns[i] + Nuns[j] == T) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    return 0;
}
