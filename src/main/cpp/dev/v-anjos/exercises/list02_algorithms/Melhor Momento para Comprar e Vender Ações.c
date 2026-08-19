#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int min_preco;
    int max_lucro = 0;

    for (int i = 0; i < n; i++) {
        int preco;
        scanf("%d", &preco);

        if (i == 0) {
            min_preco = preco;
        } else {
            if (preco < min_preco) {
                min_preco = preco;
            } else if (preco - min_preco > max_lucro) {
                max_lucro = preco - min_preco;
            }
        }
    }

    printf("%d\n", max_lucro);
    return 0;
}
