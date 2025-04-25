#include <stdio.h>

int main() {
    int n, m;

    printf("Digite o 1º número: ");
    scanf("%d", &n);
    m = n;  

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &n);

        
        if (n > m) {
            m = n;  
        }
    }

    printf("O maior número informado é: %d\n", m);

    return 0;
}
