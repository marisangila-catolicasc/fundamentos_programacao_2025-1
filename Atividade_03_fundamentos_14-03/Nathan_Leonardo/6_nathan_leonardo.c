#include <stdio.h>

int main(void){
    int n1;

    printf("Digite um numero inteiro para revelar seu antecessor e suscessor: \n");
    scanf("%d",&n1);

    printf("O antecessor de %d é %d \n", n1, n1 -1);

    printf("O sucessor de %d é %d \n", n1, n1 +1);

    return 0;
}