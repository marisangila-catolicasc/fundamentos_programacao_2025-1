#include <stdlib.h>
#include <stdio.h>
int main() {
    int num1,num2;
    printf("Digite 1 numero\n");
    scanf("%d",&num1);
    printf("Digite 1 numero\n");
    scanf("%d",&num2);
    if(num1>num2){
        printf("O numero é %d maior que o numero %d",num1, num2);
    }else if (num2>num1){
        printf("O numero é %d maior que o numero %d",num2, num1);
    }else{
        printf("Os numeros são iguais");
    }
    return 0;
}
