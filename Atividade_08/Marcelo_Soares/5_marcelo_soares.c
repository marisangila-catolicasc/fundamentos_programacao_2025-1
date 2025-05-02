#include <stdio.h>

//5. Faça um programa que leia um leia 5 numeros em um vetor A, mais 5 numeros em outro vetor B. Armazene a soma dos elementos dos vetores A e B em um terceiro vetor C. Ex.: vetorC[1] = vetorA[1] + vetorB[1]. Mostre as somas armazenadas no vetor C ao final.

int main(){
    int vetor_A [5], vetor_B [5], vetor_C [5];
    int i;

    printf("Digite cinco numeros inteiros p/ o 1° vetor:\n");
    for(i=0; i < 5; i++){
        scanf("%d", &vetor_A[i]);
    }
    printf("Digite cinco numeros inteiros p/ o 2° vetor:\n");{
    for(i=0; i < 5; i++)
        scanf("%d", &vetor_B[i]);
    }

    printf("A soma de A e B eh: \n");
    for(i=0; i < 5; i++){
        vetor_C[i] = vetor_A [i] + vetor_B[i];
        printf("%d\n", vetor_C[i]); 
    }
return 0;
}
