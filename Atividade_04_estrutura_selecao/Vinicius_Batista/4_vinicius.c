#include <stdio.h>

int main() 
{
    int n1, n2;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite mais um numero:\n");
    scanf("%d", &n2);
    if(n1 > n2){
        printf("%d eh maior do que %d", n1, n2);
    }else if(n1 < n2){
        printf("%d eh maior do que %d", n2, n1);
    }else{
        printf("Os dois numeros sao iguais.");
    }
    return 0;
}
