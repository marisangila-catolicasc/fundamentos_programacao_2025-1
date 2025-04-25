#include <stdio.h>

int main() {
    int numero, pares = 0, impar = 0;
    for(int i = 0; i < 10; i++) {
        
        printf("Digite algum número: ");
        scanf("%d", &numero);


        
        if(numero % 2 == 0) {
            pares = pares + 1;
        } else {
            impar = impar + 1;
        }
    }

    printf("Pares: %d\n", pares);
    printf("Ímpares: %d\n", impar);

    return 0;
}
