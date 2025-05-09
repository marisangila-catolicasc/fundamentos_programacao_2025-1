void mostrar_linha_matriz(int matriz[3][3], int linha) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", matriz[linha][j]);
    }
    printf("\n");
}