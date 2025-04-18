#include <stdio.h>

int main() {
    int num, inc;

    printf("Diga um número limite inteiro:\n ");
scanf("%d", &num);
    
    printf("Diga um valor de incremento inteiro:\n ");
scanf("%d", &inc);

    if(inc == 0) {
        printf("Erro: O incremento não pode ser z!\n");
        return 1;
    }
    
    printf("Contagem de 0 até %d com incremento de %d:\n", num, inc);
    
    if(inc > 0) {
        for(int i = 0; i <= num; i += inc) {
            printf("%d ", i);
        }
    }

    else {
        for(int i = 0; i >= num; i += inc) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}