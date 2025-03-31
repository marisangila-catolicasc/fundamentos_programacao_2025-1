#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Digite um numero:\n");
    scanf("%d", &num1);
    printf("Digite outro numero:\n");
    scanf("%d", &num2);
    printf("Digite mais um numero:\n");
    scanf("%d", &num3);
    if(num1 > num2 && num1 > num3){
        printf("%d eh o maior numero", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("%d eh o maior numero", num2);
    }else{
        printf("%d eh o maior numero", num3);
    }
    return 0;
}
