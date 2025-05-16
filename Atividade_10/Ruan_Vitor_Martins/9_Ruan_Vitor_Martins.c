#include <stdio.h>

int soma_matriz(int matriz[2][3]) {
    int i = 0, j = 0;
    int soma = 0;


    while (i < 2) {
        j = 0;
        while (j < 3) {
            soma = soma + matriz[i][j];
            j++;
        }
        i++;
    }
    return soma;
}


int main() {
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 5}
    };
    int resultado = soma_matriz(matriz);
    printf("soma: %d\n", resultado);
    return 0;
}

