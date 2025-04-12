#include <stdio.h>

int notas, media;

int main() {
    for(int i = 1; i <= 8; i++){
    printf("Digite a %dª nota: ", i);
    scanf("%d", &notas);
    media = notas + media;
    }

    media = media / 8;

    printf("A media das notas eh %d", media);

    return 0;
}