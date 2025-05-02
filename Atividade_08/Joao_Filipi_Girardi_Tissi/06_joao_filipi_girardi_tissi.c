#include <stdio.h>
int main() {
    int numeros[20];
    int i, par = 0;
    for (i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0){
            par++;
        }
    }
    printf("Quantidade de numeros pares: %d\n", par);
    return 0;
}