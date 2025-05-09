#include <stdio.h>

int main() {
    
    
    int m[4][4];
    int maior, menor;
    int i_maior, j_maior;
    int i_menor, j_menor;
    int soma_pares = 0, soma_linha2 = 0;

    
    for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        
        printf("Digite o Valor da matriz [%d][%d]: ", i, j);
        scanf("%d", &m[i][j]);

            if (i == 0 && j == 0) {
                maior = menor = m[i][j];
                i_maior = i_menor = 0;
                j_maior = j_menor = 0;
            }

            if (i % 2 == 0) 
                soma_pares += m[i][j];
            if (i == 2) 
                soma_linha2 += m[i][j];

            if (m[i][j] > maior) {
                maior = m[i][j];
                i_maior = i;
                j_maior = j;
            }
            if (m[i][j] < menor) {
                menor = m[i][j];
                i_menor = i;
                j_menor = j;
            }
        }
    }

    
    printf("\nSoma das linhas pares: %d\n", soma_pares);
    printf("Primeiro elemento: %d\n", m[0][0]);
    printf("Último elemento: %d\n", m[3][3]);
    printf("Soma da linha 2: %d\n", soma_linha2);

    printf("A Diagonal principal é : ");
    for (int i = 0; i < 4; i++)
        printf("%d ", m[i][i]);
    printf("\n");

    printf("O maior Valor: %d em [i=%d][j=%d]\n", maior, i_maior, j_maior);
    printf("O menor Valor: %d em [i=%d][j=%d]\n", menor, i_menor, j_menor);

    return 0;
}
