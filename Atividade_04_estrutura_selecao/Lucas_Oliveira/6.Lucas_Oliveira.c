#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    printf("Digite um numero: ");
    scanf("%d", &num3);
    if(num1 > num2 && num1 > num3){
        printf("O %d eh o maior numero", num1);
    }else if (num2 > num1 && num2 > num3){
      printf("O %d eh o maior numero", num2);
    }else if (num3 > num1 && num3 > num2){
      printf("O %d eh o maior numero", num3);
    }else{
        printf("Os numeros sao iguais ou tem dois numeros iguais");
    }
    return 0;
}