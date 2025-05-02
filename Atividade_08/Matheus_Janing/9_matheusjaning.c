#include <stdio.h>

int main() {
    int vetor_a[5], vetor_b[5], vetor_c[10];

    printf("Insira 5 numeros para o vetor A:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetor_a[i]);
    }

    printf("Insira 5 numeros para o vetor B:\n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetor_b[i]);
    }

    for (int i = 0, j = 0; i < 5; i++){
        vetor_c[j++] = vetor_a[i];
        vetor_c[j++] = vetor_b[i];
    }

    printf("Numeros intercalados:\n");
    for (int i = 0; i < 10; i++){
        printf("%d\n", vetor_c[i]);
    }
}