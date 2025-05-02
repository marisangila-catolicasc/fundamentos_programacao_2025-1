#include <stdio.h>

int main() {
int v[5], soma = 0, i, acima = 0;
float media;

    for (i = 0; i < 5; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &v[i]);
    soma += v[i];
    }

    media = soma / 5.0;
    
    printf("A média será de : %.2f\n", media);
    printf("Os Valores acima da média são: ");
    
    for (i = 0; i < 5; i++) {
        if (v[i] > media) {
            printf("%d ", v[i]);
            acima++;
        }
    }

    printf("\nTotal de números acima da média: %d\n", acima);

    
    return 0;
}
