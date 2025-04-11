#include <stdio.h>

/*
Fa ̧ca um programa que solicite ao usu ́ario 10 n ́umeros inteiros e ao final, mostre o
maior n ́umero informado. Considere que o usu ́ario n ̃ao ir ́a informar n ́umeros iguais.
*/
int main(){
    
    int maior = 0, num;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }
    printf("Maior numero: %d\n", maior);

    return 0;
}
