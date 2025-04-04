#include <stdio.h>
int main() {
    int num1,num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
  
    if(num1 > num2){
        printf("O numero %d eh maior que o numero %d", num1, num2);
    }else if (num2 > num1){
        printf("O numero %d eh maior que o numero %d", num2, num1);
    }else{
        printf("Os numeros sao iguais");
    }
    return 0;
}