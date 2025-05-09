#include <stdio.h>

int main() {

    int matriz[4][4];
    int x, z;
    int somaLinha2 = 0;
    int maior, menor;
    int posMaiorI, posMaiorJ, posMenorI, posMenorJ;

    printf("Digite os valores na matriz 4x4:\n");
    for(x = 0; x < 4; x++) {
        for(z = 0; z < 4; z++) {
            scanf("%d", &matriz[x][x]);

            if(x == 0 && z == 0) {
                maior = menor = matriz[x][x];
                posMaiorI = posMenorI = 0;
                posMaiorJ = posMenorJ = 0;
            }

            if(matriz[x][z] > maior) {
                maior = matriz[x][z];
                posMaiorI = x;
                posMaiorJ = z;
            }

            if(matriz[x][z] < menor) {
                menor = matriz[x][z];
                posMenorI = x;
                posMenorJ = z;
            }

            if(x == 1) {
                somaLinha2 += matriz[x][x];}
        }
    }
    printf("Primeiro elemento: %d\n", matriz[0][0]);
    printf("Último elemento: %d\n", matriz[3][3]);
    printf("Soma da linha 2: %d\n", somaLinha2);
    printf("Diagonal principal:\n");

    for(x = 0; x < 4; x++) {
        printf("%d\n", matriz[x][x]); }

    printf("\nMaior valor: %d (posição [%d][%d])", maior, posMaiorI, posMaiorJ);
    printf("\nMenor valor: %d (posição [%d][%d])\n", menor, posMenorI, posMenorJ);

    return 0;
}