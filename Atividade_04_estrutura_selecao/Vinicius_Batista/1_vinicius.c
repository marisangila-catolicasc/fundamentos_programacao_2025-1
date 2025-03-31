#include <stdio.h>

int main()
{
    int n1;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    if(n1 >= 0){
        printf("O numero %d eh positivo", n1);
    }else{
        printf("O numero %d eh negativo", n1);
    }
    return 0;
}
