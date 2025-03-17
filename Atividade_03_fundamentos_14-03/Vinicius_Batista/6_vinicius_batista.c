#include <stdio.h>

int main(){
int n1;
int antecessor;
int sucessor;

printf("Digite um numero inteiro:\n");
scanf("%d", &n1);

antecessor = n1 - 1;
sucessor = n1 +1;

printf("O numero informado foi %d, o antecessor eh %d e o sucessor eh %d.", n1, antecessor, sucessor);
    return 0;
}