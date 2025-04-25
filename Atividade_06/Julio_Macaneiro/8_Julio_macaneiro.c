#include <stdio.h>

int main() {
int num, maior;
int i;

    
    printf("Digite o 1º número: ");
    scanf("%d", &num);
    maior = num;

   
    for(i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        
        if(num > maior) {
            maior = num;
        }
    }

   
    printf("O maior número  é: %d\n", maior);

    return 0;
}
