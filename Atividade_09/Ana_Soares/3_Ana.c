#include <stdio.h>

int main() {
    int matriz[4][4];
    int x, z;
    int somaLinha2 = 0, somaLinhasPares = 0;
    int maior, menor;
    int PosicaoMaiorI, PosicaoMaiorX, PosicaoMenorI, PosicaoMenorX;

    printf("digite os valores na matriz 4x4:\n");
    for(x = 0; x < 4; x++) {
        for(z = 0; z < 4; z++) {
            scanf("%d", &matriz[x][z]);

            if(x == 0 && z == 0) {
                maior = menor = matriz[x][z];
                PosicaoMaiorI = PosicaoMenorI = 0;
                PosicaoMaiorX = PosicaoMenorX = 0;
            }

            if(matriz[x][z] > maior) {
                maior = matriz[x][z];
                PosicaoMaiorI = x;
                PosicaoMaiorX = z;
            }

            if(matriz[x][z] < menor) {
                menor = matriz[x][z];
                PosicaoMenorI = x;
                PosicaoMenorX = z;
            }

            if(x == 1) {
                somaLinha2 += matriz[x][z];
            }

            if(x % 2 == 0) {
                somaLinhasPares += matriz[x][z];
            }
        }
    }

    printf("\nvalor do primeiro elemento da matriz: %d\n", matriz[0][0]);
    printf("valor do ultimo elemento da matriz: %d\n", matriz[3][3]);
    printf("soma da linha 2: %d\n", somaLinha2);

    printf("soma das linhas pares: %d\n", somaLinhasPares);

    printf("elementos da diagonal principal:\n");
    for(x = 0; x < 4; x++) {
        printf("%d\n", matriz[x][x]);
    }

    printf("\no maior valor: %d (posição [%d][%d])\n", maior, PosicaoMaiorI, PosicaoMaiorX);
    printf("o menor valor: %d (posição [%d][%d])\n", menor, PosicaoMenorI, PosicaoMenorX);

    return 0;
}
