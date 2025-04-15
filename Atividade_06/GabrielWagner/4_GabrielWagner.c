#include <stdio.h>

int main() {
    int num, par = 0, impar = 0;

    for(int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
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
