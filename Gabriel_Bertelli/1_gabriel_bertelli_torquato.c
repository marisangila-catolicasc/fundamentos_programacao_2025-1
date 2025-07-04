#include <stdio.h>
#define TAMANHO 3


void inicializarTabuleiro(char tabuleiro[TAMANHO][TAMANHO]);
void exibirTabuleiro(char tabuleiro[TAMANHO][TAMANHO]);
int validarJogada(char tabuleiro[TAMANHO][TAMANHO], int linha, int coluna);
int verificarGanhador(char tabuleiro[TAMANHO][TAMANHO]);
int verificarEmpate(char tabuleiro[TAMANHO][TAMANHO]);
void jogarJogoDaVelha();


int main() {
    jogarJogoDaVelha();
    return 0;
}


void inicializarTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}


void exibirTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    printf("\n  1   2   3\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d", i + 1);
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAMANHO - 1) printf("|");
        }
        printf("\n");
        if (i < TAMANHO - 1) printf(" ---+---+---\n");
    }
    printf("\n");
}


int validarJogada(char tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
    if (linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO)
        return 0; // posição inválida
    if (tabuleiro[linha][coluna] != ' ')
        return 0; // já ocupada
    return 1;
}


int verificarGanhador(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2] &&
            tabuleiro[i][0] != ' ')
            return 1;

        if (tabuleiro[0][i] == tabuleiro[1][i] &&
            tabuleiro[1][i] == tabuleiro[2][i] &&
            tabuleiro[0][i] != ' ')
            return 1;
    }
    if (tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2] &&
        tabuleiro[0][0] != ' ')
        return 1;

    if (tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0] &&
        tabuleiro[0][2] != ' ')
        return 1;

    return 0;
}


int verificarEmpate(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}


void jogarJogoDaVelha() {
    char tabuleiro[TAMANHO][TAMANHO];
    char jogador = 'X';
    int linha, coluna;

    inicializarTabuleiro(tabuleiro);

    printf("===== Jogo da Velha =====\n");
    printf("Para sair a qualquer momento digite linha 0 e coluna 0.\n");

    while (1) {
        exibirTabuleiro(tabuleiro);
        printf("Vez do jogador %c.\n", jogador);
        printf("Informe a linha e a coluna (1 a 3): ");
        scanf("%d %d", &linha, &coluna);

        if (linha == 0 && coluna == 0) {
            printf("Jogo encerrado pelo jogador.\n");
            break;
        }

        linha--; coluna--;

        if (!validarJogada(tabuleiro, linha, coluna)) {
            printf("Jogada inválida! Tente novamente.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;

        if (verificarGanhador(tabuleiro)) {
            exibirTabuleiro(tabuleiro);
            printf("Parabéns! Jogador %c venceu!\n", jogador);
            break;
        }

        if (verificarEmpate(tabuleiro)) {
            exibirTabuleiro(tabuleiro);
            printf("Empate! Ninguém venceu.\n");
            break;
        }

        jogador = (jogador == 'X') ? 'O' : 'X';
    }
}