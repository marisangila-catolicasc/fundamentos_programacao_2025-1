#include <stdio.h>
void exibir_tabuleiro(char jogo[3][3]) {
    printf("\n    0   1   2\n");
    for (int linha = 0; linha < 3; linha++) {
        printf(" %d  ", linha);
        for (int coluna = 0; coluna < 3; coluna++) {
            printf(" %c ", jogo[linha][coluna]);
            if (coluna < 2) printf("|");
        }
        if (linha < 2) printf("\n   ---+---+---\n");
    }
    printf("\n");
}

char checar_vencedor(char jogo[3][3]) {
    for (int i = 0; i < 3; i++) {
        // Linhas
        if (jogo[i][0] == jogo[i][1] && jogo[i][1] == jogo[i][2] && jogo[i][0] != ' ')
            return jogo[i][0];
        //colunas
        if (jogo[0][i] == jogo[1][i] && jogo[1][i] == jogo[2][i] && jogo[0][i] != ' ')
            return jogo[0][i];
    }

    if (jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] && jogo[0][0] != ' ')
        return jogo[0][0];
    if (jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0] && jogo[0][2] != ' ')
        return jogo[0][2];

    return ' ';
}

int executar_jogo(char jogo[3][3]) {
    int l, c;

    for (int rodada = 0; rodada < 9; rodada++) {
        char atual = (rodada % 2 == 0) ? 'X' : 'O';

        printf("\nVez do jogador %c. Informe linha e coluna (ou 9 para sair):\n", atual);
        scanf("%d %d", &l, &c);

        if (l == 9 || c == 9) {
            printf("\n*\n");
            printf("  O JOGO FOI ENCERRADO PELO USUARIO.\n");
            printf("*\n");
            return 0;
        }

        if (l < 0 || l > 2 || c < 0 || c > 2 || jogo[l][c] != ' ') {
            printf("Posicao ocupada,Escolha outra!\n");
            rodada--;
            continue;
        }

        jogo[l][c] = atual;
        exibir_tabuleiro(jogo);

        if (checar_vencedor(jogo) != ' ') {
            return 1;
        }
    }
    return 0;
}

void resultado_final(char jogo[3][3]) {
    char vencedor = checar_vencedor(jogo);
    printf("\n========================================\n");

    if (vencedor == 'X' || vencedor == 'O') {
        printf("\n PARABENS,VOCE EH O VENCEDOR!! %c!\n", vencedor);
    } else {
        printf("\n      O JOGO TERMINOU EMPATADO!\n");
    }

    printf("========================================\n");
}

int main() {
    char jogo[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char resposta;

    printf("Ola ,gostaria de jogar? (s/n): ");
    scanf(" %c", &resposta);

    if (resposta == 's' || resposta == 'S') {
        printf("=================================\n");
        printf("  BEM VINDO AO JOGO DA VELHA !\n");
        printf("=================================\n");
        exibir_tabuleiro(jogo);

        executar_jogo(jogo);
        resultado_final(jogo);
    } else if (resposta == 'n' || resposta == 'N') {
        printf("\n ate logo!\n");
    } else {
        printf("\n opcao invalida,o jogo sera encerrado.\n");
    }
    return 0;
}