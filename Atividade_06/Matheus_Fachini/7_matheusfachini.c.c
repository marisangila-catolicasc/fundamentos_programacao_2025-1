#include <stdio.h>

int main(int argc, char const * argv[]) {
    float media = 0, nota;
    int quantidadeNotas = 8;

    for(int i = 0; i < quantidadeNotas; i++){
        printf("digite uma nota: ");
        scanf("%f", &nota);
        media += nota;
    }
    printf("Media: %.2f\n", media / quantidadeNotas);
    
  return 0;
}