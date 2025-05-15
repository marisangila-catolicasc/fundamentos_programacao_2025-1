#include <stdio.h>
void meu_strcpy(char destino[], char origem[]) { int i = 0; while (origem[i] != '\0') { destino[i] = origem[i]; i++; } destino[i] = '\0'; }