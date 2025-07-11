#include <stdio.h>

char tabuleiro[3][3]; 

// Funções
void inicializarTabuleiro();
void mostrarTabuleiro();
int verificarVencedor();
int jogadaValida(int linha, int coluna);
int tabuleiroCheio();

int main() {
    int linha, coluna;
    char jogador = 'X';
    char escolha;

    inicializarTabuleiro();

    while (1) {
        mostrarTabuleiro();

        printf("Jogador %c, digite a linha e a coluna (1-3) separadas por vírgula (ou digite 's' para sair): ", jogador);
        escolha = getchar();
        if (escolha == 's' || escolha == 'S') {
            printf("Jogo encerrado pelo jogador.\n");
            break;
        }
        ungetc(escolha, stdin); 

        scanf("%d,%d", &linha, &coluna);
        getchar();  

        
        linha--;
        coluna--;

        if (jogadaValida(linha, coluna)) {
            tabuleiro[linha][coluna] = jogador;

            if (verificarVencedor()) {
                mostrarTabuleiro();
                printf("Jogador %c venceu!\n", jogador);
                break;
            }

            if (tabuleiroCheio()) {
                mostrarTabuleiro();
                printf("Empate! O tabuleiro está cheio.\n");
                break;
            }

            
            jogador = (jogador == 'X') ? 'O' : 'X';
        } else {
            printf("Jogada inválida! Tente novamente.\n");
        }
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


int verificarVencedor() {
    for (int i = 0; i < 3; i++) {
        
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2])
            return 1;
       
        if (tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i])
            return 1;
    }
    
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2])
        return 1;
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0])
        return 1;

    return 0; 
}


int jogadaValida(int linha, int coluna) {
    return linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ';
}


int tabuleiroCheio() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tabuleiro[i][j] == ' ')
                return 0;
    return 1;
}
