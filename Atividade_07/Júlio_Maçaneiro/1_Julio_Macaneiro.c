#include <stdio.h>

int main() {
    int x, y, passos = 0;

    printf("Informe dois números inteiros:");
    scanf("%d %d", &x, &y);

    if (x == y) {
        printf("Ambos os valores sao iguais: %d\n", x);
    } 
    else {
        int inicio = x;
        if (x < y) {
        while (x < y) {
        x++;
        passos++;

            
            }
            printf("Foram feitos %d incrementos: %d + %d = %d\n", passos, inicio, passos, y);
        } else {
            while (x > y) {
                x--;
                passos++;
            }
            printf("Foram feitos %d decrementos: %d - %d = %d\n", passos, inicio, passos, y);
        }
    }

    return 0;
}
