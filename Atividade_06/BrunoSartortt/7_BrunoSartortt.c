#include <stdio.h>

int main() {
int i;
float num, soma = 0, media;
    
    printf("Diga 8 números para calcular uma média a baixo.\n");
    
    for(i = 1; i <= 8; i++) {
    printf("Números %d:\n", i);
scanf("%f", &num);
        soma += num; 
    }
        media = soma / 8;
    printf("A média dos núermos é: %.2f\n", media);
return 0;
}