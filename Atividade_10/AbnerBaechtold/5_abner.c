#include <stdio.h>
int verifica_palindromo(char str[]) { int i = 0, j = meu_strlen(str) - 1; while (i < j) { if (str[i] != str[j]) return 0; i++; j--; } return 1; }