#include <stdio.h>
#include <stdlib.h>

int realizar_jogada(char tabuleiro[3][3], int linha, int coluna, char jogador) {
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

    int preenchido = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                preenchido = 0;
            }
        }
    }
    if (preenchido) {
        return 3;
    }

    return 1;
}

void tabuleiro_principal(char tabuleiro[3][3]) {
    printf("\n   0   1   2\n");
    printf("0  %c ┃ %c ┃ %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("  ―――――――――――\n");
    printf("1  %c ┃ %c ┃ %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("  ―――――――――――\n");
    printf("2  %c ┃ %c ┃ %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf("\n");
}

void vazio(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

void limpar() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    for (int i = 0; i < 0; i++) {
        printf("\n");
    }
}

void comeco() {
    limpar();
    
    printf("║                                       ║\n");
    printf("║           JOGO DA VELHA               ║\n");
    printf("║                                       ║\n");
    printf("║     Escolha uma opção:                ║\n");
    printf("║                                       ║\n");
    printf("║     1 - Jogar                         ║\n");
    printf("║     2 - Sair                          ║\n");
    printf("║                                       ║\n");
    printf("\n>> Digite sua escolha: ");
}

int main() {
    int inicio = 0;

    while (inicio != 2) {
        comeco();
        scanf("%d", &inicio);

        if (inicio == 1) {
            char tabuleiro[3][3];
            char jogadorAtual = 'X';
            int linha, coluna;
            int resultado = 0;

            vazio(tabuleiro);

            while (resultado != 2 && resultado != 3) {
                limpar();
                printf("JOGO DA VELHA!\n");
                tabuleiro_principal(tabuleiro);
                printf("Vez do jogador %c!\n", jogadorAtual);
                printf("\nDigite a linha e a coluna separadas por espaço (ex: 0 0)\n");
                printf("Ou digite -1 -1 para sair do jogo.\n");
                printf("Escolha sua jogada: ");

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
                    resultado = realizar_jogada(tabuleiro, linha, coluna, jogadorAtual);
                    
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
                limpar();
                printf("RESULTADO FINAL:\n");
                tabuleiro_principal(tabuleiro);

                if (resultado == 2) {
                    printf("MUITO BOM! O jogador %c venceu!\n", jogadorAtual);
                } else {
                    printf("VELHA! Ninguem venceu.\n");
                }
                
                printf("\nPressione Enter para voltar ao painel principal!");
                getchar();
                getchar();
            }
        }
        else if (inicio == 2) {
            printf("\nObrigado por participar! Até a próxima rodada!");
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
