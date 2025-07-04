#include <stdio.h>
#include <string.h>

#define JOGADOR_X 'X'
#define JOGADOR_O 'O'
#define EMPATE 'E'
#define NEUTRO '_'

#define QTD_LINHAS 3
#define QTD_COLUNAS 3

void inicializar_tabuleiro(char tabuleiro[QTD_LINHAS][QTD_COLUNAS]) {
    for (int linha = 0; linha < QTD_LINHAS; linha++)
        for (int coluna = 0; coluna < QTD_COLUNAS; coluna++)
            tabuleiro[linha][coluna] = NEUTRO;
}

void exibir_tabuleiro(char tabuleiro[QTD_LINHAS][QTD_COLUNAS]) {
    for (int linha = 0; linha < QTD_LINHAS; linha++) {
        for (int coluna = 0; coluna < QTD_COLUNAS; coluna++)
            printf("%c ", tabuleiro[linha][coluna]);
        printf("\n");
    }
}

void exibir_mapa_posicoes() {
    printf("Mapa de posicoes do tabuleiro:\n");
    int posicao = 1;
    for (int linha = 0; linha < QTD_LINHAS; linha++) {
        for (int coluna = 0; coluna < QTD_COLUNAS; coluna++) {
            printf("%d ", posicao++);
        }
        printf("\n");
    }
    printf("\n");
}

int realizar_jogada(char tabuleiro[QTD_LINHAS][QTD_COLUNAS], int posicao, char jogador) {
    if (posicao < 1 || posicao > 9) {
        printf("\n Posicao invalida, digite novamente.\n");
        return 0;
    }

    int aux_posicao = 1;

    for (int linha = 0; linha < QTD_LINHAS; linha++) {
        if (posicao >= aux_posicao && posicao <= aux_posicao + QTD_COLUNAS - 1) {
            if (tabuleiro[linha][posicao - aux_posicao] == NEUTRO) {
                tabuleiro[linha][posicao - aux_posicao] = jogador;
                return 1;
            } else {
                printf("\n Essa posicao ja foi preenchida, digite novamente.\n");
                return 0;
            }
        }
        aux_posicao += QTD_COLUNAS;
    }

    return 0;
}

int venceu_linha(char tabuleiro[QTD_LINHAS][QTD_COLUNAS], char jogador) {
    for (int linha = 0; linha < QTD_LINHAS; linha++) {
        int venceu = 1;
        for (int coluna = 0; coluna < QTD_COLUNAS; coluna++) {
            if (tabuleiro[linha][coluna] != jogador)
                venceu = 0;
        }
        if (venceu) return 1;
    }
    return 0;
}

int venceu_coluna(char tabuleiro[QTD_LINHAS][QTD_COLUNAS], char jogador) {
    for (int coluna = 0; coluna < QTD_COLUNAS; coluna++) {
        int venceu = 1;
        for (int linha = 0; linha < QTD_LINHAS; linha++) {
            if (tabuleiro[linha][coluna] != jogador)
                venceu = 0;
        }
        if (venceu) return 1;
    }
    return 0;
}

int venceu_diagonal(char tabuleiro[QTD_LINHAS][QTD_COLUNAS], char jogador) {
    int venceu = 1;
    for (int i = 0; i < QTD_LINHAS; i++) {
        if (tabuleiro[i][i] != jogador)
            venceu = 0;
    }
    if (venceu) return 1;

    venceu = 1;
    for (int i = 0; i < QTD_LINHAS; i++) {
        if (tabuleiro[i][QTD_COLUNAS - 1 - i] != jogador)
            venceu = 0;
    }
    return venceu;
}

char verificar_vitoria(char tabuleiro[QTD_LINHAS][QTD_COLUNAS], char jogador) {
    if (
        venceu_linha(tabuleiro, jogador) ||
        venceu_coluna(tabuleiro, jogador) ||
        venceu_diagonal(tabuleiro, jogador)
    ) {
        return jogador;
    }

    return EMPATE;
}

char escolher_jogador_inicial() {
    char jogador;
    while (1) {
        printf("Quem comeca? Digite X ou O: ");
        scanf(" %c", &jogador);
        jogador = (jogador >= 'a' && jogador <= 'z') ? jogador - 32 : jogador;
        if (jogador == JOGADOR_X || jogador == JOGADOR_O)
            return jogador;
        printf("Entrada invalida. Tente novamente.\n");
    }
}

int main() {
    char tabuleiro[QTD_LINHAS][QTD_COLUNAS];
    char jogador_atual;
    char ganhador = EMPATE;
    int cont_jogadas = 0;
    int tam_tabuleiro = QTD_LINHAS * QTD_COLUNAS;

    inicializar_tabuleiro(tabuleiro);
    exibir_mapa_posicoes();

    jogador_atual = escolher_jogador_inicial();

    while (1) {
        printf("\n");
        exibir_tabuleiro(tabuleiro);

        printf("\n Vez do Jogador %c! Digite uma posicao: ", jogador_atual);

        char entrada[10];
        int posicao;

        fgets(entrada, sizeof(entrada), stdin);

        if (sscanf(entrada, "%d", &posicao) != 1) {
            printf("Entrada invalida. Digite um numero de 1 a 9.\n");
            continue;
        }

        if (!realizar_jogada(tabuleiro, posicao, jogador_atual))
            continue;

        ganhador = verificar_vitoria(tabuleiro, jogador_atual);
        cont_jogadas++;

        if (ganhador != EMPATE || cont_jogadas == tam_tabuleiro)
            break;

        jogador_atual = (cont_jogadas % 2 == 0) ? JOGADOR_X : JOGADOR_O;
    }

    printf("\n");

    if (ganhador != EMPATE)
        printf("O jogador %c ganhou! Parabéns! \n", ganhador);
    else
        printf("Que pena, deu velha!\n");

    printf("\nTabuleiro final:\n");
    exibir_tabuleiro(tabuleiro);

    return 0;
}
