#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int soma = 0;
    for (int i = 0; i < n; i++) {
        int atual;
        scanf("%d", &atual);
        soma += atual;
        
        if (i == 0) {
            printf("%d", soma);
        } else {
            printf(" %d", soma);
        }
    }
    printf("\n");

    return 0;
}
