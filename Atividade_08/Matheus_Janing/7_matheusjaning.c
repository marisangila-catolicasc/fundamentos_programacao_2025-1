#include <stdio.h>

int main() {
    int original[10], invertido[10];

    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &original[i]);
    }

    for (int i = 0; i < 10; i++){
        invertido[i] = original[9 - i];
    }

    printf("\nVetor invertido:\n");
    for (int i = 0; i < 10; i++){
        printf("%d\n", invertido[i]);
    }
}