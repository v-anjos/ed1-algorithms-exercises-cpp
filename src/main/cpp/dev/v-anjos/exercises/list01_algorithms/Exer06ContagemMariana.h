#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int total = 0;

    for (int i = 1; i <= X; i++) {
        total += i + 1;
    }

    cout << total << endl;

    return 0;
}
