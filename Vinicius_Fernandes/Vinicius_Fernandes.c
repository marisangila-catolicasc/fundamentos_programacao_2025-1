#include <stdio.h>
#include <stdlib.h>

char tabuleiro[3][3];
void inicializarTabuleiro();
void exibirTabuleiro();
int verificarVencedor();
void fazerJogada(int jogador);

int main() {
    int jogador_atual = 1;
    int jogadas = 0;
    int vencedor = 0;

    inicializarTabuleiro();

    while (jogadas < 9 && vencedor == 0) {
        system("clear || cls");
        printf("--- JOGO DA VELHA ---\n");
        exibirTabuleiro();
        fazerJogada(jogador_atual);
        jogadas++;
        vencedor = verificarVencedor();
        
        if (jogador_atual == 1) {
            jogador_atual = 2;
        } else {
            jogador_atual = 1;
        }
    }
    system("clear || cls");
    printf("--- FIM DE JOGO ---\n");
    exibirTabuleiro();

    if (vencedor == 1) {
        printf("\nParabens! O Jogador 1 (X) venceu!\n");
    } else if (vencedor == 2) {
        printf("\nParabens! O Jogador 2 (O) venceu!\n");
    } else {
        printf("\nDeu velha! O jogo empatou.\n");
    }
    return 0;
}

void inicializarTabuleiro() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}
void exibirTabuleiro() {
    printf("\n");
    printf(" %c | %c | %c \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf("\n");
}
void fazerJogada(int jogador) {
    int linha, coluna;
    char simbolo = (jogador == 1) ? 'X' : 'O';
    printf("Vez do Jogador %d (%c)\n", jogador, simbolo);

    do {
        printf("Digite a linha (1-3): ");
        scanf("%d", &linha);
        printf("Digite a coluna (1-3): ");
        scanf("%d", &coluna);
        linha--; 
        coluna--;

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada invalida! Tente novamente.\n");
        }
    } while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ');
    
    tabuleiro[linha][coluna] = simbolo;
}

int verificarVencedor() {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
            if (tabuleiro[i][0] == 'X') return 1;
            if (tabuleiro[i][0] == 'O') return 2;
        }
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {
            if (tabuleiro[0][i] == 'X') return 1;
            if (tabuleiro[0][i] == 'O') return 2;
        }
    }
    
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
        if (tabuleiro[0][0] == 'X') return 1;
        if (tabuleiro[0][0] == 'O') return 2;
    }
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
        if (tabuleiro[0][2] == 'X') return 1;
        if (tabuleiro[0][2] == 'O') return 2;
    }
    return 0;
}