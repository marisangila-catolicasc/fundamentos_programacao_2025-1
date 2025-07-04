#include <stdio.h>
#include <stdlib.h>

int processarJogada(char tabuleiro[3][3], int posicao, char jogador) {
    if (posicao < 1 || posicao > 9) {   
        return 0;
    }

    int linha = (posicao - 1) / 3;
    int coluna = (posicao - 1) % 3;

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
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" ");
        for (int j = 0; j < 3; j++) {
            int pos = i * 3 + j + 1;
            if (tabuleiro[i][j] == ' ')
                printf(" %d ", pos);
            else
                printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n-----------\n");
    }
    printf("\n\n");
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
    printf("            JOGO DA VELHA                \n");
    printf("                                         \n");
    printf("      Escolha uma opcao:                 \n");
    printf("                                         \n");
    printf("      1 - Jogar                          \n");
    printf("      2 - Sair                           \n");
    printf("=========================================\n");
    printf(">> Sua opcao: ");
}

int main() {
    int status = 0;

    while (status != 2) {
        Intro();
        scanf("%d", &status);

        if (status == 1) {
            char tabuleiro[3][3];
            char jogadorAtual = 'X';
            int posicao;
            int resultado = 0;

            preencher(tabuleiro);

            while (resultado != 2 && resultado != 3) {
                replay();
                printf("    JOGO DA VELHA \n");
                tabuleiro_principal(tabuleiro);
                printf("Vez do jogador %c\n", jogadorAtual);
                printf("Digite uma posicao (1 a 9) ou 0 para sair: ");
                
                int entradaValida = scanf("%d", &posicao);

                if (entradaValida != 1) {
                    printf("Entrada invalida! Use apenas numeros.\n");
                    while (getchar() != '\n');
                    printf("Pressione Enter para continuar...");
                    getchar();
                } else if (posicao == 0) {
                    printf("Saindo do jogo...\n");
                    break;
                } else {
                    resultado = processarJogada(tabuleiro, posicao, jogadorAtual);

                    if (resultado == 0) {
                        printf("Jogada invalida! Posicao ocupada ou inexistente.\n");
                        printf("Pressione Enter para continuar...");
                        getchar();
                        getchar();
                    } else {
                        if (resultado == 1) {
                            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
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
                    printf("Deu velha! Ninguem venceu.\n");
                }

                printf("Pressione Enter para voltar ao menu...");
                getchar();
                getchar();
            }
        }
        else if (status == 2) {
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