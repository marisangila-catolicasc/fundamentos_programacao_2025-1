#include <stdio.h>

int main() {

    int soma = 0;
    int numeros;
    int totalnum;
    int media;

    for(int i = 0; i < 8; i++) {

        printf("Digite Um numero: ");
        scanf("%d", &numeros);
        soma += numeros;
        
            
        totalnum = i + 1;
    }

    media = soma / totalnum;
    printf("A media e %d", media);

    return 0;   
}