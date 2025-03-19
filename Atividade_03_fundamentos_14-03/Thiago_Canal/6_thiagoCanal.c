#include <stdio.h>

void familia(int n);

int main(void){
    int n1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    familia(n1);
}

void familia(int n){
    int sucessor = n + 1;
    int antecessor = n -1;

    printf("O sucessor de %d e %d e o antecessor e %d", n, sucessor, antecessor);
}