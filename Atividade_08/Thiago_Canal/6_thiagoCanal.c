#include <stdio.h>

void pares(int vet[], int ns);

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

    pares(inteiro, ns);
}

void pares(int vet[], int ns){
    int pares = 0;

    for(int i = 0; i < ns; i++){
        if((vet[i] % 2) == 0){
            pares++;
        }
    }
    
    int osPares[pares];
    int indx = 0;

    for(int i = 0; i < ns; i++){
        if((vet[i] % 2) == 0){
            osPares[indx] = vet[i];
            indx++;
        }
    }

    for(int i = 0; i < indx; i++){
        if(i == indx - 1){
            printf("%d.", osPares[i]);
        }else{
            printf("%d, ", osPares[i]);
        }
    }
}