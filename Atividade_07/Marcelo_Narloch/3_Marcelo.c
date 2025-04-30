#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num, random;

    printf("Escolha um numero entre 0 e 100: \n");
    scanf("%d", &num);

    srand(time(NULL));

    do{
        random = rand() % 101;
        printf("Numero sorteado: %d \n", random);
        }
    while(random != num);
        printf("Numero encontrado!!!");
return 0;
}