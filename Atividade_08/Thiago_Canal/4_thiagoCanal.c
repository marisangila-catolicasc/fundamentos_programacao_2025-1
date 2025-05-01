#include <stdio.h>
#include <stdlib.h>

void ordem(int inteiros[], int ns);
void desordem(int inteiros[], int ns);

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

    ordem(inteiro, ns);
    desordem(inteiro, ns);

}

void ordem(int inteiros[], int ns){
    system("cls");
    printf("Ordem de entrada:\n");
    for(int i = 0; i < ns; i++){
        if(i == ns - 1){
            printf("%d.", inteiros[i]);
        }else{
            printf("%d, ", inteiros[i]);
        }
    }
}

void desordem(int inteiros[], int ns){
    printf("\nOrdem inversa:\n");
    for(int i = ns - 1; i >= 0; i--){
        if(i == 0){
            printf("%d.", inteiros[i]);
        }else{
            printf("%d, ", inteiros[i]);
        }
    }
}