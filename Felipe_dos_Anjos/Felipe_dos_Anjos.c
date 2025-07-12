#include <stdio.h>
#include <string.h>

#define T 3

void inicializarTabuleiro(char tabuleiro[T][T]);
void imprimirTabuleiro(char tabuleiro[T][T]);
int fazerJogada(char tabuleiro[T][T], int linha, int coluna, char jogador);
int verificarVencedor(char tabuleiro[T][T]);
int tabuleiroCheio(char tabuleiro[T][T]);

int main() {
    char tabuleiro[T][T];
    inicializarTabuleiro(tabuleiro);
    
    char jogadorAtual = 'X';
    int linha, coluna;
    char entrada[100];
    
    while (1) {
        imprimirTabuleiro(tabuleiro);
        printf("Jogador %c, digite sua jogada (linha, coluna) ou 'sair' para encerrar: ", jogadorAtual);
        
        fgets(entrada, sizeof(entrada), stdin);

        if (strcmp(entrada, "sair\n") == 0) {
            printf("Jogo encerrado!\n");
            break;
        }
        
        if (sscanf(entrada, "%d, %d", &linha, &coluna) != 2 || linha < 1 || linha > T || coluna < 1 || coluna > T) {
            printf("Entrada invalida! Use o formato 'linha, coluna' (ex.: 1, 2).\n");
            continue;
        }
        
        linha--;
        coluna--;
        
        if (fazerJogada(tabuleiro, linha, coluna, jogadorAtual)) {
            if (verificarVencedor(tabuleiro)) {
                imprimirTabuleiro(tabuleiro);
                printf("Jogador %c venceu! Parabens!\n", jogadorAtual);
                break;
            }
            if (tabuleiroCheio(tabuleiro)) {
                imprimirTabuleiro(tabuleiro);
                printf("Empate!\n");
                break;
            }
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        } else {
            printf("Posiçao ocupada ou invalida. Tente novamente.\n");
        }
    }
    return 0;
}

void inicializarTabuleiro(char tabuleiro[T][T]) {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

void imprimirTabuleiro(char tabuleiro[T][T]) {
    printf("\n");
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < T - 1) printf("|");
        }
        printf("\n");
        if (i < T - 1) printf("-----------\n");
    }
    printf("\n");
}

int fazerJogada(char tabuleiro[T][T], int linha, int coluna, char jogador) {
    if (tabuleiro[linha][coluna] == ' ') {
        tabuleiro[linha][coluna] = jogador;
        return 1;
    }
    return 0;
}

int verificarVencedor(char tabuleiro[T][T]) {
    for (int i = 0; i < T; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ') return 1;
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ') return 1;
    }
    if ((tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ') ||
        (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')) {
        return 1;
    }
    return 0;
}

int tabuleiroCheio(char tabuleiro[T][T]) {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            if (tabuleiro[i][j] == ' ') return 0;
        }
    }
    return 1;
}