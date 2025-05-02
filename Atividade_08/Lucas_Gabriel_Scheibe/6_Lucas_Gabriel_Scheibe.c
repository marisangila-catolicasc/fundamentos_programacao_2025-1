#include <stdio.h>

int main() {
    int list[20], i, par = 0;

    printf("digite 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        printf("elemento %d: ", i + 1);
        scanf("%d", &list[i]);
    }

    for (i = 0; i < 20; i++) {
        if (list[i] % 2 == 0) {
            par++;
        }
    }

    printf("total de pares achados: %d\n", par);

    return 0;
}