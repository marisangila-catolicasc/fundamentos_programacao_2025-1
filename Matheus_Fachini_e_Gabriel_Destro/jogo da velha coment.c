#include <stdio.h>
#include <string.h>

char tabuleiro[3][3];


void inicia_tabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}


void mostra_tabuleiro() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}


char verifica_vencedor() {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
            return tabuleiro[i][0];
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
            return tabuleiro[0][i];
    }
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
        return tabuleiro[0][0];
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
        return tabuleiro[0][2];
    return ' ';
}


int empate() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tabuleiro[i][j] == ' ')
                return 0;
    return 1;
}

void jogar() {
    int linha, coluna;
    char jogador_atual = 'X';
    char entrada[100];

    while (1) {
        mostra_tabuleiro();

       
        printf("Jogador %c, escolha linha e coluna (1-3 1-3): ", jogador_atual);

     
        if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
            printf("Erro! Tente novamente.\n");
            continue;
        }

      
        entrada[strcspn(entrada, "\n")] = 0;

      
        if (sscanf(entrada, "%d %d", &linha, &coluna) != 2) {
            printf("Inválido! Digite dois números separados por espaço.\n");
            continue;
        }

        
        linha--;
        coluna--;

       
        if (linha < 0 || linha >= 3 || coluna < 0 || coluna >= 3 || tabuleiro[linha][coluna] != ' ') {
            printf("Jogada inválida! Tente novamente.\n");
            continue;
        }

       
        char vencedor = verifica_vencedor();
        if (vencedor == jogador_atual) {
            mostra_tabuleiro();
            printf("Parabéns! Jogador %c venceu!\n", jogador_atual);
            break;
        } 
      
        else if (empate()) {
            mostra_tabuleiro();
            printf("Velha!\n");
            break;
        }

      

if (jogador_atual == 'X') {
    jogador_atual = 'O';
} else {
    jogador_atual = 'X';
}

    }
}


int main() {
    printf("=== JOGO DA VELHA ===\n");
    inicia_tabuleiro();
    jogar();


return 0;
}
