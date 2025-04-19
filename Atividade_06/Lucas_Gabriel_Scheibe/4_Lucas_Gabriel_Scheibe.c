#include <stdio.h>

int num, impar = 0, par = 0;

int main(int argc, char const *argv[]) {

    for (int i = 1; i < 11; i++) {
        printf("Fale o %dº número: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            par = par + 1;
        } else {
            impar = impar + 1;
        }
    }

    printf("total de  pares: %d\n", par);
    printf("total de  ímpares: %d\n", impar);

    return 0;
}