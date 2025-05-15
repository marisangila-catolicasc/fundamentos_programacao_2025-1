#include <stdio.h>
int verifica_vetores_iguais(int v1[], int v2[], int tamanho) { for (int i = 0; i < tamanho; i++) { if (v1[i] != v2[i]) return 0; } return 1; }