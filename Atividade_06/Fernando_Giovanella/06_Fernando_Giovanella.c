#include <stdio.h>

int main(){

    int numero, incremento;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    printf("Informe um incremento: ");
    scanf("%d", &incremento);

    for (int i = 0; i <= numero; i += incremento){
        printf("%d \n", i);
    }


    return 0;
}