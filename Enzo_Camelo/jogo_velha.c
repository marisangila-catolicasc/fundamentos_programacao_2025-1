#include <stdio.h>
#include <stdlib.h>

char posicao[3][3];

void inicializarTabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            posicao[i][j] = ' ';
}

void imprimirTabuleiro() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", posicao[i][0], posicao[i][1], posicao[i][2]);
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

int verificarVencedor() {
    for (int i = 0; i < 3; i++) {
        if (posicao[i][0] == posicao[i][1] && posicao[i][1] == posicao[i][2] && posicao[i][0] != ' ') {
            if (posicao[i][0] == 'X') {
                return 1;
            } else {
                return 2;
            }
        }

        if (posicao[0][i] == posicao[1][i] && posicao[1][i] == posicao[2][i] && posicao[0][i] != ' ') {
            if (posicao[0][i] == 'X') {
                return 1;
            } else {
                return 2;
            }
        }
    }

    if (posicao[0][0] == posicao[1][1] && posicao[1][1] == posicao[2][2] && posicao[0][0] != ' ') {
        if (posicao[0][0] == 'X') {
            return 1;
        } else {
            return 2;
        }
    }

    if (posicao[0][2] == posicao[1][1] && posicao[1][1] == posicao[2][0] && posicao[0][2] != ' ') {
        if (posicao[0][2] == 'X') {
            return 1;
        } else {
            return 2;
        }
    }

    int espacosVazios = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (posicao[i][j] == ' ') {
                espacosVazios++;
            }

    if (espacosVazios == 0) {
        return 3;
    }

    return 0;
}

int jogar(int jogador) {
    int linha, coluna;
    char simbolo;

    if (jogador == 1) {
        simbolo = 'X';
    } else {
        simbolo = 'O';    
    }

    do {
        printf("Jogador %d (%c), escolha linha e coluna (0, 1 ou 2).\n", jogador, simbolo);
        printf("Pressione 5 se quiser encerrar o jogo.\n");

        printf("Linha: ");
        scanf("%d", &linha);
        if (linha == 5) {
            return 0;
        }

        printf("Coluna: ");
        scanf("%d", &coluna);
        if (coluna == 5) {
            return 0;
        }

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("\nPosição inválida. Tente novamente.\n");
        } else if (posicao[linha][coluna] != ' ') {
            printf("\nEspaço já ocupado. Tente novamente.\n");
        } else {
            break;
        }
    } while (1);

    posicao[linha][coluna] = simbolo;
    return 1;
}

int main() {
    int resultado = 0;
    int jogadorAtual = 1;

    inicializarTabuleiro();

    while (resultado == 0) {
        system("clear || cls");
        imprimirTabuleiro();

        int continua = jogar(jogadorAtual);
        if (continua == 0) {
            printf("Jogo encerrado.\n");
            return 0;
        }

        resultado = verificarVencedor();

        if (jogadorAtual == 1) {
            jogadorAtual = 2;
        } else {
            jogadorAtual = 1;
        }
    }

    system("clear || cls");
    imprimirTabuleiro();

    if (resultado == 1 || resultado == 2) {
        printf("Parabéns! Jogador %d venceu!\n", resultado);
    } else {
        printf("Empate!\n");
    }

    return 0;
}