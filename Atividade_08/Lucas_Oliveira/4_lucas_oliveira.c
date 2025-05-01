#include <stdio.h>
int main() {
    int numeros[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    for (i = 9; 0 <= i; i--) {
        printf("%d ", numeros[i]);
    }
    return 0;
}