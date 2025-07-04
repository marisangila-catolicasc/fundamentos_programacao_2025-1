#include <stdio.h>
#include <stdlib.h>

char tabuleiro[3][3];

// limpa o tabuleiro e deixa tudo vazio
void limparTabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

// mostra o tabuleiro na tela
void mostrarTabuleiro() {
    printf("\n");
    printf("  1   2   3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----------\n");
    }
    printf("\n");
}

// verifica se alguem venceu
char verificarVencedor() {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != ' ' &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2])
            return tabuleiro[i][0];
    }

    for (int i = 0; i < 3; i++) {
        if (tabuleiro[0][i] != ' ' &&
            tabuleiro[0][i] == tabuleiro[1][i] &&
            tabuleiro[1][i] == tabuleiro[2][i])
            return tabuleiro[0][i];
    }

    if (tabuleiro[0][0] != ' ' &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2])
        return tabuleiro[0][0];

    if (tabuleiro[0][2] != ' ' &&
        tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0])
        return tabuleiro[0][2];

    return ' ';
}

// verifica se deu empate
int empate() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tabuleiro[i][j] == ' ')
                return 0;
    return 1;
}

// menu com opcoes de comeco
int menuInicial() {
    int escolha;
    printf("=== JOGO DA VELHA ===\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

// pergunta se quer jogar de novo
int jogarNovamente() {
    int opcao;
    printf("\nDeseja jogar novamente? (1 - Sim / 2 - Nao): ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {
    int linha, coluna;
    char jogador;
    int menu, repetir;

    do {
        menu = menuInicial();

        if (menu == 2) {
            printf("Saindo do jogo\n");
            return 0;
        } else if (menu != 1) {
            printf("Opcao invalida fechando o jogo\n");
            return 0;
        }

        limparTabuleiro();
        jogador = 'X'; // jogador X comeca

        while (1) {
            mostrarTabuleiro();
            printf("Jogador %c escolha linha (1-3) e coluna (1-3): ", jogador);
            scanf("%d %d", &linha, &coluna);

            linha--;
            coluna--;

            // se a posicao for invalida tipo fora da matriz
            if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
                printf("Posicao fora do tabuleiro tente outra\n");
                continue;
            }

            // se ja tiver jogada naquele lugar
            if (tabuleiro[linha][coluna] != ' ') {
                printf("Essa posicao ja esta ocupada escolha outra\n");
                continue;
            }

            // jogada valida bora jogar
            tabuleiro[linha][coluna] = jogador;

            if (verificarVencedor() == jogador) {
                mostrarTabuleiro();
                printf("Parabens jogador %c venceu\n", jogador);
                break;
            }

            if (empate()) {
                mostrarTabuleiro();
                printf("Empate ninguem venceu\n");
                break;
            }

            // troca de jogador
            if (jogador == 'X') {
                jogador = 'O';
            } else {
                jogador = 'X';
            }
        }

        repetir = jogarNovamente();
    } while (repetir == 1);

    printf("Obrigado por jogar\n");
    return 0;
}





