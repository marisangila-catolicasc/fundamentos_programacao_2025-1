#include <stdio.h>

int main() {
    int i, num, par = 0, impar = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite numero %d: ", i + 1);
        scanf("%d", &num);

        if(num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    printf("Pares: %d\n", par);
    printf("Impares: %d\n", impar);
    return 0;
}