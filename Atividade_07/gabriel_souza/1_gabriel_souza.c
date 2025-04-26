#include <stdio.h>
/*
Fa¸ca um programa em pe¸ca para o usu´ario digitar dois n´umero inteiros. Compare
o primeiro n´umero com o segundo. Se o primeiro n´umero for menor que o segundo,
incremente-o at´e os dois serem iguais. Caso o primeiro n´umero seja maior que o
segundo, decremente at´e serem iguais.

*/
int main() {
    int num1, num2;
    printf("Digite um numero inteiros: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiros: ");
    scanf("%d", &num2);
    
    if (num1 < num2) {
        while (num1 != num2) {
            num1++;
            printf("%d\n", num1);
        }
        printf("Os numeros sao iguais agora.\n");
    }
    else if (num1 > num2){
        while (num1 != num2) {
            num1--;
            printf("%d\n", num1);
        }
        printf("Os numeros sao iguais agora.\n");
    }
    return 0; 
}

