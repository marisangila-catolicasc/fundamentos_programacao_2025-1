#include <stdio.h>

int main(void){
int n, m;

    printf("Digite um numero: \n");
    scanf("%d", &n);
    m = n;  

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: \n", i);
        scanf("%d", &n);

        
        if (n > m) {
            m = n;  
        }
    }

    printf("O maior número informado é: %d\n", m);

    return 0;
}