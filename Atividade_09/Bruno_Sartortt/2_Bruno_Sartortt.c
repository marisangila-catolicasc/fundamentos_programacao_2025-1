#include <stdio.h>

int main() {
int m[3][3];
int l;

    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
     printf("Digite o valor da posição [%d][%d]:\n", i, j);
    scanf("%d", &m[i][j]);
        }
    }

     printf("Você deseja ver a linha um, dois ou três?\n");
    scanf("%d", &l);

    if (l >= 0 && l < 3) {
     printf("Valores da linha %d:\n", l);
    for (int j = 0; j < 3; j++) {
     printf("%d ", m[l][j]);
        }
    } else {
     printf("Linha inválida.");
    }

    return 0;
}