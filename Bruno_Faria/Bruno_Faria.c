#include <stdio.h>

char tabuleiro[3][3]; // Matriz 3x3 

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
        ungetc(escolha, stdin); // Puxa o caracter para entrada

        scanf("%d,%d", &linha, &coluna);
        getchar(); // Limpa o enter 

        // Ajuste para começar em 0
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

            // Alternar jogador
            jogador = (jogador == 'X') ? 'O' : 'X';
        } else {
            printf("Jogada inválida! Tente novamente.\n");
        }
    }

    return 0;
}

// Inicializa o tabuleiro com espaços em branco
void inicializarTabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

// Mostra o tabuleiro na tela
void mostrarTabuleiro() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Verifica vencedor
int verificarVencedor() {
    for (int i = 0; i < 3; i++) {
        // Verifica linhas
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2])
            return 1;
        // Verifica colunas
        if (tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i])
            return 1;
    }
    // Verifica diagonais
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2])
        return 1;
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0])
        return 1;

    return 0; // Ninguém venceu ainda
}

// Verifica jogada válida
int jogadaValida(int linha, int coluna) {
    return linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ';
}

// Verifica se o tabuleiro está cheio
int tabuleiroCheio() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tabuleiro[i][j] == ' ')
                return 0;
    return 1;
}
