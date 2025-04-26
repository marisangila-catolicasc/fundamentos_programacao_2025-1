#include <stdio.h>
int main(){
    /*
    1. Fa¸ca um programa em pe¸ca para o usu´ario digitar dois n´umero inteiros. Compare
    o primeiro n´umero com o segundo. Se o primeiro n´umero for menor que o segundo,
    incremente-o at´e os dois serem iguais. Caso o primeiro n´umero seja maior que o
    segundo, decremente at´e serem iguais.
    */    

    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 < num2){
        while(num1 != num2){
            printf ("%d\n", num1);
            num1++;
        }
    }else if (num1 > num2){
        while(num1 != num2){
            printf ("%d\n", num1);
            num1--;
        }
    }
    
    return 0;
}
