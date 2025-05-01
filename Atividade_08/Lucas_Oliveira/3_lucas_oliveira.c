#include <stdio.h>
int main() {
    int numeros[4];
    int i, soma = 0, media = 0, acima = 0;
    for (i = 0; i < 4; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    media = soma / i;
    printf("A media eh %d \n", media);
    for (i = 0; i < 4; i++){
        if (numeros[i] > media){
            printf("\nO numero %d eh maior que a media\n", numeros[i]);
            acima++;
        }else{
            continue;
        }
    }
    printf("A quantidade de numeros acima da media eh %d", acima);
    return 0;
}