#include <stdio.h>

int main() {
int matriz[4][4];
int i, j;
int SomaP = 0, soma = 0;
int maior, menor, Mal, mac, mel, mec;

    for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
    printf("\nDigite o valor da posição [%d][%d]:\n", i, j);
    scanf("%d", &matriz[i][j]);
        }
    }

    maior = menor = matriz[0][0];
    Mal = mel = 0;
    mac = mec = 0;

    for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {

        if (i % 2 == 0) {
            SomaP += matriz[i][j];
        }

        if (i == 1) {
            soma += matriz[i][j];
        }

        if (matriz[i][j] > maior) {
            maior = matriz[i][j];
            Mal = i;
            mac = j;
        }
        if (matriz[i][j] < menor) {
            menor = matriz[i][j];
            mel = i;
            mec = j;
        }
    }
}

    printf("\nSoma dos elementos das linhas pares: %d\n", SomaP);
    printf("\n");
    printf("Primeiro elemento da matriz: %d\n", matriz[0][0]);
    printf("\n");
    printf("Último elemento da matriz: %d\n", matriz[3][3]);
    printf("\n");
    printf("Soma dos elementos da linha 2: %d\n", soma);
    printf("\n");
    printf("Elementos da diagonal principal:\n");
    for (i = 0; i < 4; i++) {
    printf("%d\n", matriz[i][i]);
    }
    printf("\n");
    printf("O maior valor é: %d\n (posição [%d][%d])\n", maior, Mal, mac);
    printf("\n");
    printf("O menor valor é: %d\n (posição [%d][%d])", menor, mel, mec);
    printf("\n");

    return 0;
}