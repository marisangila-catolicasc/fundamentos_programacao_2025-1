#include <stdio.h>
int main() {
    int numeros[15];
    int i, soma = 0;
    for (i = 0; i < 15; i++) {
        printf("Digite um numero para lista: ");
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 15; i++) {
        if (i % 2 != 0){
            soma += numeros[i];
            printf("%d\n", soma);
        }else{
            continue;
        }
    }
    printf("A soma dos numeros em casas impares e: %d\n", soma);
   

    return 0;
}