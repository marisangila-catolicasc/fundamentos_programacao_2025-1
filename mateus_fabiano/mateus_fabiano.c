#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char tabuleiro[3][3];
char jogadorX_nome[50] = "Jogador X";
char jogadorO_nome[50] = "Jogador O";
const char JOGADOR_X = 'X';
const char JOGADOR_O = 'O';

void limparTela() {
    system("cls || clear");
}

void inicializarTabuleiro() {
    char pos = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = pos++;
        }
    }
}

void imprimirTabuleiro() {
    limparTela();
    printf("\n    === JOGO DA VELHA ===\n\n");
    printf("  Jogador X: %s\n", jogadorX_nome);
    printf("  Jogador O: %s\n\n", jogadorO_nome);

    for (int i = 0; i < 3; i++) {
        printf("        ");
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) {
            printf("        ---|---|---\n");
        }
    }
    printf("\n");
}

int verificarVitoria(char jogador) {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) return 1;
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) return 1;
    }
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1;
    }
    return 0;
}

int verificarEmpate() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (isdigit(tabuleiro[i][j])) return 0;
        }
    }
    return 1;
}

void mostrarTutorial() {
    limparTela();
    printf("    ==============================\n");
    printf("    === COMO JOGAR JOGO DA VELHA ===\n");
    printf("    ==============================\n\n");
    printf("  OBJETIVO: Ser o primeiro a alinhar 3 simbolos ('X' ou 'O').\n\n");
    printf("  REGRAS: Digite o numero da casa desejada (1-9) e pressione Enter.\n\n");
}

void iniciarJogo() {
    int jogada, linha, coluna;
    char jogador = 'X';

    inicializarTabuleiro();

    while (1) {
        imprimirTabuleiro();
        printf("Jogador %c, escolha uma posicao (1-9): ", jogador);
        scanf("%d", &jogada);

        if (jogada < 1 || jogada > 9) {
            printf("Jogada invalida. Tente novamente.\n");
            continue;
        }

        linha = (jogada - 1) / 3;
        coluna = (jogada - 1) % 3;

        if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O') {
            printf("Casa ocupada! Tente outra.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;

        if (verificarVitoria(jogador)) {
            imprimirTabuleiro();
            printf("Jogador %c venceu!\n", jogador);
            break;
        }

        if (verificarEmpate()) {
            imprimirTabuleiro();
            printf("Empate!\n");
            break;
        }

        jogador = (jogador == 'X') ? 'O' : 'X';
    }
}

int main() {
    int escolha;
    do {
        limparTela();
        printf("    ======================\n");
        printf("    ===      MENU      ===\n");
        printf("    ======================\n\n");
        printf("    [1] Iniciar Novo Jogo\n");
        printf("    [2] Como Jogar\n");
        printf("    [0] Sair do Jogo\n\n");
        printf("    Escolha uma opcao: ");

        scanf("%d", &escolha);
        while(getchar() != '\n');

        switch (escolha) {
            case 1: iniciarJogo(); break;
            case 2: mostrarTutorial(); break;
            case 0: printf("\n    Obrigado por jogar! Ate a proxima.\n"); break;
            default: printf("\n    Opcao invalida! Tente novamente.\n"); break;
        }

        if (escolha != 0) {
            printf("\n    Pressione Enter para voltar ao menu...");
            getchar();
        }
    } while (escolha != 0);
    return 0;
}
