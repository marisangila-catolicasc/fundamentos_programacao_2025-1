int soma_matriz_2x3(int matriz[2][3]) {
    int soma = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            soma += matriz[i][j];
    return soma;
}