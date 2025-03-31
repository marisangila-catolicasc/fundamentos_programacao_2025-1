#include <stdio.h>

int main()
{
    int n1;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    if(n1 % 2 == 0){
        printf("O numero %d eh par.", n1);
    }else{
        printf("O numero %d eh impar.", n1);
    }
    
    return 0;
}
