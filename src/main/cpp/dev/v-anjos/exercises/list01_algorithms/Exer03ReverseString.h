#include <iostream>
#include <string>

using namespace std;

int main() {

    int N;
    cin >> N;

    string texto;
    cin >> texto;

    int inicio = 0;
    int fim = N - 1;

    while (inicio < fim) {

        char temp = texto[inicio];
        texto[inicio] = texto[fim];
        texto[fim] = temp;

        inicio++;
        fim--;
    }

    cout << texto << endl;

    return 0;
}
