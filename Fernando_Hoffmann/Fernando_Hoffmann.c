#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 3

void mostrarInstrucoes();
void inicializarTabuleiro(char tabuleiro[TAM][TAM]);
void mostrarTabuleiro(char tabuleiro[TAM][TAM]);
int verificarVitoria(char tabuleiro[TAM][TAM], char simbolo);
int verificarEmpate(char tabuleiro[TAM][TAM]);
int jogadaValida(char tabuleiro[TAM][TAM], int linha, int coluna);

int main() {
    char tabuleiro[TAM][TAM];
    char jogador1[50], jogador2[50];
    char simbolo1, simbolo2;
    int linha, coluna, vez = 1, venceu = 0, empate = 0;
    int placar1 = 0, placar2 = 0;
    char opcao;

    mostrarInstrucoes();

    int comeco = 0;
    printf("\nDigite 1 para começar: ");
    while (scanf("%d", &comeco) != 1 || comeco != 1) {
        printf("Número inválido. Digite 1 para começar: ");
    
    }

    printf("\nDigite o nome do Jogador 1: ");
    scanf(" %s", jogador1);
    printf("Digite o nome do Jogador 2: ");
    scanf(" %s", jogador2);

    do {
        do {
            printf("\n%s, deseja ser X ou O? ", jogador1);
            scanf(" %c", &simbolo1);
            simbolo1 = toupper(simbolo1);
        } while (simbolo1 != 'X' && simbolo1 != 'O');

        if (simbolo1 == 'X') {
             simbolo2 = 'O';
            } else {
                simbolo2 = 'X';
        }

        printf("%s será %c\n", jogador1, simbolo1);
        printf("%s será %c\n", jogador2, simbolo2);

        inicializarTabuleiro(tabuleiro);
        venceu = 0;
        empate = 0;
        vez = 1;

        while (!venceu && !empate) {
            mostrarTabuleiro(tabuleiro);

            printf("\nDigite a jogada (ex: 1 2 ou 12). Digite -1 para sair.\n");

            if (vez == 1)
                printf("%s (%c): ", jogador1, simbolo1);
            else
                printf("%s (%c): ", jogador2, simbolo2);

            char entrada[10];
            scanf(" %s", entrada);

            if (strcmp(entrada, "-1") == 0) {
                printf("\nJogo encerrado pelo jogador.\n");
                return 0;
            }

            if (strlen(entrada) == 2 && isdigit(entrada[0]) && isdigit(entrada[1])) {
                linha = entrada[0] - '0';
                coluna = entrada[1] - '0';
            } 
            else if (sscanf(entrada, "%d", &linha) == 1) {
                scanf("%d", &coluna);
            } else {
                printf("Entrada inválida. Tente novamente.\n");
                while (getchar() != '\n');
                continue;
            }

            if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 ||
                !jogadaValida(tabuleiro, linha - 1, coluna - 1)) {
                printf("Jogada inválida. Tente novamente.\n");
                continue;
            }

            char simbolo = (vez == 1) ? simbolo1 : simbolo2;
            tabuleiro[linha - 1][coluna - 1] = simbolo;

            if (verificarVitoria(tabuleiro, simbolo)) {
                mostrarTabuleiro(tabuleiro);
                if (vez == 1) {
                    printf("\n%s venceu!\n", jogador1);
                    placar1++;
                } else {
                    printf("\n%s venceu!\n", jogador2);
                    placar2++;
                }
                venceu = 1;
            } else if (verificarEmpate(tabuleiro)) {
                mostrarTabuleiro(tabuleiro);
                printf("\nEmpate!\n");
                empate = 1;
            } else {
                vez = (vez == 1) ? 2 : 1;
            }
        }

        printf("\nPlacar:\n%s: %d vitória(s)\n%s: %d vitória(s)\n", jogador1, placar1, jogador2, placar2);

        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &opcao);
    } while (opcao == 's' || opcao == 'S');

    printf("\nObrigado por jogar!\n");
    return 0;
}

void mostrarInstrucoes() {
    printf("====== JOGO DA VELHA ======\n");
    printf("Instruções:\n");
    printf("- O tabuleiro é uma matriz 3x3.\n");
    printf("- Para jogar, digite linha e coluna (ex: 1 2 ou 12)\n");
    printf("- Digite -1 para sair a qualquer instante\n");
    printf("- Vence quem fizer três simbolos ('X' ou 'O') consecutivos\n");
    printf("- Linha, coluna ou diagonal\n");
    printf("===========================\n");
}

void inicializarTabuleiro(char tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = ' ';
}

void mostrarTabuleiro(char tabuleiro[TAM][TAM]) {
    printf("\n  1   2   3\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < TAM; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAM - 1) printf("|");
        }
        printf("\n");
        if (i < TAM - 1) printf("  -----------\n");
    }
}

int jogadaValida(char tabuleiro[TAM][TAM], int linha, int coluna) {
    return tabuleiro[linha][coluna] == ' ';
}

int verificarVitoria(char tabuleiro[TAM][TAM], char simbolo) {
    for (int i = 0; i < TAM; i++) {
        if (tabuleiro[i][0] == simbolo && tabuleiro[i][1] == simbolo && tabuleiro[i][2] == simbolo)
            return 1;
        if (tabuleiro[0][i] == simbolo && tabuleiro[1][i] == simbolo && tabuleiro[2][i] == simbolo)
            return 1;
    }
    if (tabuleiro[0][0] == simbolo && tabuleiro[1][1] == simbolo && tabuleiro[2][2] == simbolo)
        return 1;
    if (tabuleiro[0][2] == simbolo && tabuleiro[1][1] == simbolo && tabuleiro[2][0] == simbolo)
        return 1;
    return 0;
}

int verificarEmpate(char tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            if (tabuleiro[i][j] == ' ')
                return 0;
    return 1;
}
    