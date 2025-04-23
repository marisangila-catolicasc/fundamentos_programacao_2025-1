#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, par = 0, impar = 0, numerosss;

    printf("Quantos numeros voce quer digitar: ");
    scanf("%d", &numerosss);

    int pares[numerosss];
    int qtd_par = 0;
    int impares[numerosss];
    int qtd_impa = 0;

    for(int i = 0; i < numerosss; i++){
        printf("Digite um numero (%d): ", i + 1);
        scanf("%d", &n);

        if(n % 2 == 0){
            par += 1;
            pares[qtd_par] = n;
            qtd_par++;
        }else {
            impar +=1;
            impares[qtd_impa] = n;
            qtd_impa++;
        }
    }

    system("cls");
    if(par == 0){
        printf("Quantidade de impares: %d\n", impar);
        printf("Impares: \n");
        for(int i = 0; i < qtd_impa; i++){
            printf("%d\n", impares[i]);
        }
    }else if(impar == 0){
        printf("Quantidade de pares: %d\n", par);
        printf("Pares: \n");
        for(int i = 0; i < qtd_par; i++){
            printf("%d\n", pares[i]);
        }
    }else{
        printf("Quantidade de pares: %d\n", par);
        printf("Quantidade de impares: %d\n", impar);
        printf("Pares: \n");
        for(int i = 0; i < qtd_par; i++){
            printf("%d\n", pares[i]);
        }
        printf("Impares: \n");
        for(int i = 0; i < qtd_impa; i++){
            printf("%d\n", impares[i]);
        }
    }
}