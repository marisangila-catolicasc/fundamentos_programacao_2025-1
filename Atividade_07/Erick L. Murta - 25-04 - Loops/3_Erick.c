#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main(void){
    int numero, numero_gerado;

    printf("Digite um número qualquer entre 1 e 1000000:\n ");
    scanf("%d", &numero);

    srand(time(NULL));

    numero_gerado = (rand() % 1000000) + 1;

    while (numero_gerado != numero)
    {
        numero_gerado = (rand() % 1000000) + 1;
        printf("%d\n", numero_gerado);
    }
    


}