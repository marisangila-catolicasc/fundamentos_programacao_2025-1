#include <stdio.h>
#include <stdlib.h>

//     Quero agradecer ao Gabriel Vinicios, estudei a logica do cod dele e tbm usei esse video "https://youtu.be/mhlar-crjUE" para fazer o jogo

int processarJogada(char tabuleiro[3][3], int linha, int coluna, char jogador) {
    if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
        return 0;
    }

    if (tabuleiro[linha][coluna] != ' ') {
        return 0;
    }

    tabuleiro[linha][coluna] = jogador;

    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador &&
            tabuleiro[i][1] == jogador &&
            tabuleiro[i][2] == jogador) {
            return 2;
        }
    }

    for (int j = 0; j < 3; j++) {
        if (tabuleiro[0][j] == jogador &&
            tabuleiro[1][j] == jogador &&
            tabuleiro[2][j] == jogador) {
            return 2;
        }
    }

    if (tabuleiro[0][0] == jogador &&
        tabuleiro[1][1] == jogador &&
        tabuleiro[2][2] == jogador) {
        return 2;
    }

    if (tabuleiro[0][2] == jogador &&
        tabuleiro[1][1] == jogador &&
        tabuleiro[2][0] == jogador) {
        return 2;
    }

    int cheio = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                cheio = 0;
            }
        }
    }

    if (cheio) {
        return 3;
    }

    return 1;
}

void tabuleiro_principal(char tabuleiro[3][3]) {
    printf("\n   0   1   2\n");
    printf("0  %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("  -----------\n");
    printf("1  %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("  -----------\n");
    printf("2  %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf("\n");
}

void preencher(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

void replay() {
    for (int i = 0; i < 50; i++) {
        printf("\n");
    }
}

void Intro() {
    replay();
    printf("=========================================\n");
    printf("|                                       |\n");
    printf("|           JOGO DA VELHA               |\n");
    printf("|                                       |\n");
    printf("=========================================\n");
    printf("|                                       |\n");
    printf("|     Escolha uma opcao:                |\n");
    printf("|                                       |\n");
    printf("|     1 - Jogar                         |\n");
    printf("|     2 - Sair                          |\n");
    printf("|                                       |\n");
    printf("=========================================\n");
    printf(">> Sua opcao: ");
}

int main() {
    int opcaoComeco = 0;

    while (opcaoComeco != 2) {
        Intro();
        scanf("%d", &opcaoComeco);

        if (opcaoComeco == 1) {
            char tabuleiro[3][3];
            char jogadorAtual = 'X';
            int linha, coluna;
            int resultado = 0;

            preencher(tabuleiro);

            while (resultado != 2 && resultado != 3) {
                replay();
                printf("=== JOGO DA VELHA ===\n");
                tabuleiro_principal(tabuleiro);
                printf("Vez do jogador %c\n", jogadorAtual);
                printf("Digite a linha e a coluna separadas por ESPACO (ex: 0 0)\n");
                printf("Ou digite -1 -1 para sair do jogo.\n");
                printf("Entrada: ");

                int entradaValida = scanf("%d %d", &linha, &coluna);

                if (entradaValida != 2) {
                    printf("Entrada invalida! Use dois numeros separados por espaco.\n");
                    while (getchar() != '\n');
                    printf("Pressione Enter para continuar...");
                    getchar();
                } else if (linha == -1 && coluna == -1) {
                    printf("Saindo do jogo...\n");
                    break;
                } else {
                    resultado = processarJogada(tabuleiro, linha, coluna, jogadorAtual);

                    if (resultado == 0) {
                        printf("Jogada invalida! Posicao ocupada ou fora do tabuleiro.\n");
                        printf("Pressione Enter para continuar...");
                        getchar();
                        getchar();
                    } else {
                        if (resultado == 1) {
                            if (jogadorAtual == 'X') {
                                jogadorAtual = 'O';
                            } else {
                                jogadorAtual = 'X';
                            }
                        }
                    }
                }
            }

            if (resultado == 2 || resultado == 3) {
                replay();
                printf("=== RESULTADO FINAL ===\n");
                tabuleiro_principal(tabuleiro);

                if (resultado == 2) {
                    printf("PARABENS! O jogador %c venceu!\n", jogadorAtual);
                } else {
                    printf("Empate! Ninguem venceu.\n");
                }

                printf("Pressione Enter para voltar ao menu...");
                getchar();
                getchar();
            }
        }
        else if (opcaoComeco == 2) {
            printf("Obrigado por jogar! Ate a proxima!\n");
        }
        else {
            printf("Opcao invalida. Digite 1 ou 2.\n");
            printf("Pressione Enter para continuar...");
            getchar();
            getchar();
        }
    }

    return 0;
}