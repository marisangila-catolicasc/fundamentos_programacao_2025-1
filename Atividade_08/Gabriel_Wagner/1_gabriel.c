#include <stdio.h>
int main() {
    float v[5], soma = 0;
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i);
        scanf("%f", &v[i]);
        soma += v[i];
    }
    printf("Média: %.2f\n", soma / 5);
    return 0;
}