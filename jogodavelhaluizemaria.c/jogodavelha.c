#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimeTabuleiro(char matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("\n");
        for (int j = 0; j < 3; j++) {
            printf("\t%c", matriz[i][j]);
        }
        printf("\n\n");
    }
}

int verificarVencedor(char m[3][3]) {
    // Todas as combinações possíveis de vitória
    if ((m[0][0] == m[0][1] && m[0][0] == m[0][2] && m[0][0] != '_') ||
        (m[1][0] == m[1][1] && m[1][0] == m[1][2] && m[1][0] != '_') ||
        (m[2][0] == m[2][1] && m[2][0] == m[2][2] && m[2][0] != '_') ||

        (m[0][0] == m[1][0] && m[0][0] == m[2][0] && m[0][0] != '_') ||
        (m[0][1] == m[1][1] && m[0][1] == m[2][1] && m[0][1] != '_') ||
        (m[0][2] == m[1][2] && m[0][2] == m[2][2] && m[0][2] != '_') ||

        (m[0][0] == m[1][1] && m[0][0] == m[2][2] && m[0][0] != '_') ||
        (m[0][2] == m[1][1] && m[0][2] == m[2][0] && m[0][2] != '_')) {
        return 1; // houve vencedor
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "");

    char jogarNovamente;

    do {
        char matriz[3][3];
        int i, j, linha, coluna, contador = 0;

        // Inicializa a matriz
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                matriz[i][j] = '_';

        imprimeTabuleiro(matriz);

        while (contador < 9) {
            printf("\nJogador %d, digite linha e coluna (1-3):\n", (contador % 2) + 1);

            if (scanf("%d %d", &linha, &coluna) != 2) {
                printf("Jogada inválida. Tente novamente.\n");
                while (getchar() != '\n'); // limpa buffer da entrada errada
                continue;
            }

            linha--; coluna--;

            // Verificação de entrada válida
            if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
                printf("Posição inválida. Tente novamente.\n");
                continue;
            }

            // Verificação se o espaço está vazio
            if (matriz[linha][coluna] == '_') {
                matriz[linha][coluna] = (contador % 2 == 0) ? 'X' : 'O';
                contador++;
                imprimeTabuleiro(matriz);

                if (verificarVencedor(matriz)) {
                    printf("\nJogador %d venceu!\n", (contador % 2 == 0) ? 2 : 1);
                    break;
                }
            } else {
                printf("Esse espaço já está ocupado.\n");
            }
        }

        if (contador == 9 && !verificarVencedor(matriz)) {
            printf("\nEmpate! Ninguém venceu.\n");
        }

        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente); // espaço antes de %c para ignorar o '\n'

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    printf("Obrigado por jogar!\n");
    return 0;
}
