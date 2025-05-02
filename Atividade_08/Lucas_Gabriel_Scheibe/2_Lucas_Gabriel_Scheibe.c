#include <stdio.h>

int main() {
    int size, i;
    float ma, me;

    printf("Informe quantos valores deseja inserir:\n");
    scanf("%d", &size);

    float lista[size];

    for (i = 0; i < size; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &lista[i]);
    }

    ma = lista[0];
    me = lista[0];

    for (i = 1; i < size; i++) {
        if (lista[i] > ma) {
            ma = lista[i];
        }
        if (lista[i] < me) {
            me = lista[i];
        }
    }

    printf("Maior número: %.2f\n", ma);
    printf("Menor número: %.2f\n", me);

    return 0;
}