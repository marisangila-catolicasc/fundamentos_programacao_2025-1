#include <stdio.h>

int main() {
    int numeros[1][2];
    int resultadoFinal = 0;

    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("Informe o número na posição [%d][%d]: ", linha, coluna);
            scanf("%d", &numeros[linha][coluna]);
            resultadoFinal += numeros[linha][coluna];
        }    
    }
    printf("A soma final dos números é: %d\n", resultadoFinal);
    return 0;
}