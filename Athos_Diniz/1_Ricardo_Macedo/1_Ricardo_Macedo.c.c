zdlib.h>
#include <string.h>

#define VAZIO      ' '
#define JOGADOR_X  'X'
#define JOGADOR_O  'O'

char tabuleiro[3][3];
int placarX = 0, placarO = 0, placarEmpate = 0;

void inicializarTabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = VAZIO;
}

void exibirTabuleiro() {
    printf("\n");
    printf("    1   2   3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d   ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("   ---+---+---\n");
    }
    printf("\n");
}

int verificarVitoria(char jogador) {
    for (int i = 0; i < 3; i++)
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador)
            return 1;

    for (int j = 0; j < 3; j++)
        if (tabuleiro[0][j] == jogador && tabuleiro[1][j] == jogador && tabuleiro[2][j] == jogador)
            return 1;

    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) return 1;
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) return 1;
    return 0;
}

int verificarEmpate() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tabuleiro[i][j] == VAZIO)
                return 0;
    return 1;
}

void exibirPlacar() {
    printf("\n=== Placar ===\n");
    printf("Jogador X: %d\n", placarX);
    printf("Jogador O: %d\n", placarO);
    printf("Empates   : %d\n\n", placarEmpate);
}

void jogarPartida() {
    inicializarTabuleiro();
    char jogadorAtual = JOGADOR_X;
    char entrada[100];
    int linha, coluna;

    while (1) {
        exibirTabuleiro();
        printf("Vez do jogador %c. Digite linha, coluna (ex: 1, 3) ou 'sair' para encerrar: ", jogadorAtual);
        if (!fgets(entrada, sizeof(entrada), stdin)) continue;
        if (strncmp(entrada, "sair", 4) == 0) {
            printf("Jogo encerrado pelo usuário.\n");
            exit(0);
        }
        if (sscanf(entrada, "%d , %d", &linha, &coluna) != 2) {
            printf("Entrada inválida. Use o formato \"linha, coluna\" (ex: 2, 3).\n");
            continue;
        }
        if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || tabuleiro[linha-1][coluna-1] != VAZIO) {
            printf("Jogada inválida. Tente novamente.\n");
            continue;
        }
        tabuleiro[linha-1][coluna-1] = jogadorAtual;
        if (verificarVitoria(jogadorAtual)) {
            exibirTabuleiro();
            printf("Jogador %c venceu!\n", jogadorAtual);
            if (jogadorAtual == JOGADOR_X) placarX++;
            else placarO++;
            break;
        } else if (verificarEmpate()) {
            exibirTabuleiro();
            printf("Empate!\n");
            placarEmpate++;
            break;
        }
        jogadorAtual = (jogadorAtual == JOGADOR_X) ? JOGADOR_O : JOGADOR_X;
    }
}

int main() {
    int opcao;
    do {
        printf("=== Jogo da Velha ===\n");
        printf("1. Novo Jogo\n");
        printf("2. Ver Placar\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        if (scanf("%d", &opcao) != 1) {
            printf("Opção inválida. Tente novamente.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                jogarPartida();
                break;
            case 2:
                exibirPlacar();
                break;
            case 3:
                printf("Saindo... Até breve!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}