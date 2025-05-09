#include <stdio.h>

int main() {

int matriz [4][4];
int i, j, soma_linha_par = 0, soma_linha2 = 0, maior, menor, pos_maior_i, pos_maior_j, pos_menor_i, pos_menor_j;

printf("digite os numeros da matriz: \n");
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
        printf("numero: [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}

maior = menor = matriz[0][0];
pos_maior_i = pos_maior_j = 0;
pos_menor_i = pos_menor_j = 0;

for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
       
        if (i % 2 == 0) {
            soma_linha_par += matriz[i][j];
        }

        if (i == 1) {
            soma_linha2 += matriz[i][j];
        }

        if (matriz[i][j] > maior) {
            maior = matriz[i][j];
            pos_maior_i = i;
            pos_maior_j = j;
        }
        if (matriz[i][j] < menor) {
            menor = matriz[i][j];
            pos_menor_i = i;
            pos_menor_j = j;
        }
    }
}

printf("\nsoma das linhas pares: %d\n", soma_linha_par);
    
printf("primeiro numero: %d\n", matriz[0][0]);
    
printf("ultimo numero: %d\n", matriz[3][3]);
    
printf("soma dos numeros da linha 2: %d\n", soma_linha2);

printf("diagonal principal:\n");
for (i = 0; i < 4; i++) {
    printf("%d ", matriz[i][i]);
}
printf("\n");

printf("maior numero: %d (posição [%d][%d])\n", maior, pos_maior_i, pos_maior_j);
    
printf("menor valor: %d (posição [%d][%d])\n", menor, pos_menor_i, pos_menor_j);

  return 0;
}
