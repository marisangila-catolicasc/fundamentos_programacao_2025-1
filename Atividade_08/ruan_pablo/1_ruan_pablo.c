#include <stdio.h>

int main() {
    float v[5], soma = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%f", &v[i]);
        soma += v[i];
    }
    printf("Media: %.2f\n", soma / 5);
    return 0;
}
