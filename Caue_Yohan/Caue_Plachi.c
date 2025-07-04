#include <stdio.h>

int coluna, linha;
char jogo_da_velha[3][3];
int contador = 0;

inicializar_grade() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            jogo_da_velha[i][j] = '.';
        }
    }
}

imprimir_grade() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("  ");
        for (int j = 0; j < 3; j++) {
            printf("%c ", jogo_da_velha[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int vencedor() {
   
    for (int i = 0; i < 3; i++) {
        if ((jogo_da_velha[i][0] == jogo_da_velha[i][1] && jogo_da_velha[i][1] == jogo_da_velha[i][2] && jogo_da_velha[i][0] != '.')
         || (jogo_da_velha[0][i] == jogo_da_velha[1][i] && jogo_da_velha[1][i] == jogo_da_velha[2][i] && jogo_da_velha[0][i] != '.')) {
            return 1;
        }
    }

    if ((jogo_da_velha[0][0] == jogo_da_velha[1][1] && jogo_da_velha[1][1] == jogo_da_velha[2][2] && jogo_da_velha[0][0] != '.')
     || (jogo_da_velha[0][2] == jogo_da_velha[1][1] && jogo_da_velha[1][1] == jogo_da_velha[2][0] && jogo_da_velha[0][2] != '.')) {
        return 1;
    }

    return 0;
}

int main(void) {
    char jogador = 'X';

    printf("\n               JOGO DA VELHA\n");
    printf("=================================================\n");

    inicializar_grade();
    imprimir_grade();

    while (contador < 9) {
        printf("Jogador %c, digite a linha (0 a 2): ", jogador);
        scanf("%d", &linha);
        printf("Jogador %c, digite a coluna (0 a 2): ", jogador);
        scanf("%d", &coluna);

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo_da_velha[linha][coluna] != '.') {
            printf("Jogada inválida, tente novamente.\n");
            continue;
        }

        jogo_da_velha[linha][coluna] = jogador;
        contador++;

        imprimir_grade();

        if (vencedor()) {
            printf("Jogador %c venceu!\n", jogador);
            return 0;
        }

        jogador = (jogador == 'X') ? 'O' : 'X';
    }

    printf("Empate!\n");
    return 0;
}
