#include <stdio.h>

int main() {
    int numero[2], diferenca;

    printf("Digite dois numeros inteiros:\n");

    for (int i = 0; i < 2; i++){
        scanf("%d", &numero[i]);
    }

    if (numero[0] < numero[1]){
        diferenca = numero[1] - numero[0];
        while (numero[0] != numero[1]){
            numero[0]++;
        }
        printf("Para serem iguais: %d + %d = %d\n", numero[0] - diferenca, diferenca, numero[1]);
    }
    else if (numero[0] > numero[1]){
        diferenca = numero[0] - numero[1];
        while (numero[0] != numero[1]){
            numero[0]--;
        }
        printf("Para serem iguais: %d - %d = %d\n", numero[0] + diferenca, diferenca, numero[1]);
    }
    else{
        printf("Os numeros ja sao iguais: %d\n", numero[0]);
    }

}