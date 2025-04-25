#include <stdio.h>

int main() {

    int numero1;
    int numero2;

    printf("Digite um Numero: ");
    scanf("%d", &numero1);
    printf("Digite um Numero para incremento: ");
    scanf("%d", &numero2);


    for(int i = 0; i <= numero1; i++) {

        if(i % numero2 == 0){
            printf("%d \n", i);
        }

    }


    return 0;
}