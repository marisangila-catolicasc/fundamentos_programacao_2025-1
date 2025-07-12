#include <stdio.h>
#include <stdlib.h>

char tabuleiro[3][3];

void inicializarTabuleiro();
void mostrarTabuleiro();
int verificarVencedor();
int jogadaValida(int linha, int coluna);

int main() {
    char jogadorAtual = 'X';
    int linha, coluna;
    int vencedor = 0;
    int jogadas = 0;
    char sair;

    inicializarTabuleiro();

    while (1) {
        system("clear");
        mostrarTabuleiro();

        printf("jogador %c, digite a linha e a coluna (0, 1 ou 2) separadas por espaco ou '9 9' para sair: ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);

        
        if (linha == 9 && coluna == 9) {
            printf("jogo encerrado.\n");
            break;
        }

        
        if (!jogadaValida(linha, coluna)) {
            printf("jogada inválida. tente novamente.\n");
            continue;
        }

        
        tabuleiro[linha][coluna] = jogadorAtual;
        jogadas++;

        vencedor = verificarVencedor();
        system("clear");
        if (vencedor == 1) {
            mostrarTabuleiro();
            printf("jogador %c venceu!\n", jogadorAtual);
            break;
        }

        
        if (jogadas == 9) {
            mostrarTabuleiro();
            printf("deu empate, ninguem venceu.\n");
            break;
        }

        
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }

    return 0;
}

void inicializarTabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

void mostrarTabuleiro() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int jogadaValida(int linha, int coluna) {
    if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2)
        return 0;
    if (tabuleiro[linha][coluna] != ' ')
        return 0;
    return 1;
}

int verificarVencedor() {
    
    for (int i = 0; i < 3; i++)
        if (tabuleiro[i][0] != ' ' &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2])
            return 1;

    
    for (int i = 0; i < 3; i++)
        if (tabuleiro[0][i] != ' ' &&
            tabuleiro[0][i] == tabuleiro[1][i] &&
            tabuleiro[1][i] == tabuleiro[2][i])
            return 1;

    if (tabuleiro[0][0] != ' ' &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2])
        return 1;

    if (tabuleiro[0][2] != ' ' &&
        tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0])
        return 1;

    return 0; 
}