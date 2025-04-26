#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, random;

    printf("Digite um numero:\n");
    scanf("%d", &num);
    srand(time(NULL));
    do {
        random = rand() % (num > 100 ? num+1 : 100);
        printf("Numero gerado: %d\n", random);
        if(random == num){
            printf("Numero encontrado!\n");
        }
    }while(random != num);
    printf("Fim do programa!\n");
    printf("Numero gerado: %d\n", random);
    printf("Numero digitado: %d\n", num);

    return 0; 
}