#include <stdio.h>

int main(){
    
    int operacao;
    float num1, num2;

    printf("Informe os dois numeros:\n");
    scanf("%f %f", &num1, &num2);
    printf("Informe a operacao:\n [1] adicao\n [2] subtracao\n [3] divisao\n [4] multiplicacao\n");
    scanf("%d", &operacao);

    switch(operacao){
        case 1:
            printf("O resultado eh %.1f", num1 + num2);
        break;
        case 2:
            printf("O resultado eh %.1f", num1 - num2);
        break;
        case 3:
            if(num2 == 0){
            printf("Nao eh possivel dividir por 0");
            }
            else{
            printf("O resultado eh %.1f", num1 / num2);
            }
        break;
        case 4:
            printf("O resultado eh %.1f", num1 * num2);
        break;
    default:
        printf("Operacao inexistente");
    }
return 0;
}