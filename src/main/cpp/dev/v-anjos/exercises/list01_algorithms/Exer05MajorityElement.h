#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> nums(N);

    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    int candidato = 0;
    int contador = 0;

    for (int num : nums) {
        if (contador == 0) {
            candidato = num;
        }

        if (num == candidato) {
            contador++;
        } else {
            contador--;
        }
    }

    cout << candidato << endl;

    return 0;
}
