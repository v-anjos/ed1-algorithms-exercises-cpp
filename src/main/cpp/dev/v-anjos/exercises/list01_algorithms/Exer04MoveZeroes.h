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

    int posicao = 0;

    for (int i = 0; i < N; i++) {

        if (nums[i] != 0) {
            nums[posicao] = nums[i];
            posicao++;
        }
    }

    while (posicao < N) {
        nums[posicao] = 0;
        posicao++;
    }

    for (int i = 0; i < N; i++) {
        cout << nums[i];

        if (i < N - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
