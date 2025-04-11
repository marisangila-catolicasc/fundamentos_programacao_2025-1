#include <stdio.h>

/*
Fa ̧ca um programa que pe ̧ca ao usu ́ario 8 n ́umeros e mostre a m ́edia dos n ́umeros
informados
*/
int main(){
    
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
