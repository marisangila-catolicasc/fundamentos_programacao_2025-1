#include <stdio.h>

//6. Faça um programa que leia um vetor de 20 numeros inteiros e exiba quantos desses numeros são pares.

int main(){
    int vetor [20];
    int i, par = 0;

    printf("Digite 20 numeros inteiros:\n");
    
    for(i=0; i < 20; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            par++;
        }
            }
    printf("A quantidade de numeros pares são: %d\n", par);

return 0;
}
