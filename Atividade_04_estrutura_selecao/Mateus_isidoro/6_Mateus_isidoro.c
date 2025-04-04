#include <stdlib.h>
#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("Digite 1 numero\n");
    scanf("%d",&num1);
    printf("Digite 1 numero\n");
    scanf("%d",&num2);
    printf("Digite 1 numero\n");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3){
        printf("O %d e o maior numero",num1);
    }else if (num2>num1&&num2>num3){
      printf("O %d e o maior numero",num2);
    }else if (num3>num1&&num3>num2){
      printf("O %d e o maior numero",num3);
    }else{
        printf("Os numeros sao iguais ou tem dois numeros iguais");
    }
    return 0;
}
