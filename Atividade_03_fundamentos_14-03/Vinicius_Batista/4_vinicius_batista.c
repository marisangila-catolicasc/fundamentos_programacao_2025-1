#include <stdio.h>

int main(){
int idade;
float peso;
char tipoPet;

printf("Qual a idade do seu pet?\n");
scanf("%d", &idade);
printf("Qual o peso de seu pet?\n");
scanf(" %f", &peso);
printf("Escreva (somente a letra) se seu animal eh um:\n C : Cachorro\n G : Gato\n");
scanf(" %c", &tipoPet);

printf("\nSeu animal eh um %c de %d anos e %.2fkg!", tipoPet, idade, peso);
    return 0;
}