#include <stdio.h>
#include <math.h>

int main(void){
    int n1, n2;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    printf("Soma = %d \n", n1 + n2);
    printf("Subtração = %d \n", n1 - n2);
    printf("Multiplicação = %d \n", n1 * n2);
    
    if (n2 != 0){
        printf("Divisão = %d \n", n1 / n2);
    }
    else {
        printf("Não é possivel dividir por 0");
    }
    printf("Exponenciação = %.0lf \n", pow(n1, n2));
    
    if(n2 != 0){
        printf("Resto da divisão = %d \n", n1 % n2);
    }
    else{
        printf("Não é possivel calcular com divisor 0");
    }
   
    return 0;
}