#include <stdio.h>

void segundo_vetor(int prime[], int ns);

int main(void){
    int ns;

    printf("Numero de elementos: ");
    scanf("%d", &ns);

    int inteiro[ns];
    int index = 0;

    int numero;

    for(int i = 0; i < ns; i++){
        printf("Numero(%d): ", i + 1);
        scanf("%d", &numero);

        inteiro[index] = numero;
        index++;
    }

    printf("Ordem de entrada:\n");
    for(int i = 0; i < ns; i++){
        if(i == ns - 1){
            printf("%d.\n", inteiro[i]);
        }else{
            printf("%d, ", inteiro[i]);
        }
    }

    segundo_vetor(inteiro, ns);
}

void segundo_vetor(int prime[], int ns){
    int ns2 = ns;
    int desordem[ns2];
    int index = 0;

    for(int i = ns - 1; i >= 0; i--){
        desordem[index] = prime[i];
        index++;
    }

    printf("Ordem inversa:\n");
    for(int i = 0; i < ns2; i++){
        if(i == ns2 - 1){
            printf("%d.\n", desordem[i]);
        }else{
            printf("%d, ", desordem[i]);
        }
    }
}
