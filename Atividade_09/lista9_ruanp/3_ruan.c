void operacoes_matriz_4x4(int matriz[4][4]) {
    int soma_pares = 0, soma_linha2 = 0;
    int maior = matriz[0][0], menor = matriz[0][0];
    int pos_maior_i = 0, pos_maior_j = 0, pos_menor_i = 0, pos_menor_j = 0;

    printf("Diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 4; j++) {
                soma_pares += matriz[i][j];
            }
        }
        if (i == 2) {
            for (int j = 0; j < 4; j++) {
                soma_linha2 += matriz[i][j];
            }
        }
        printf("%d ", matriz[i][i]);
        for (int j = 0; j < 4; j++) {
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

    printf("\nSoma das linhas pares: %d\n", soma_pares);
    printf("Primeiro elemento: %d\n", matriz[0][0]);
    printf("Último elemento: %d\n", matriz[3][3]);
    printf("Soma da linha 2: %d\n", soma_linha2);
    printf("Maior valor: %d na posição (%d,%d)\n", maior, pos_maior_i, pos_maior_j);
    printf("Menor valor: %d na posição (%d,%d)\n", menor, pos_menor_i, pos_menor_j);
}