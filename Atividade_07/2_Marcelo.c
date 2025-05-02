#include <stdio.h>

int main(){

    float num1, num2;
    int operacao = 0;

    printf("Informe dois numeros: \n");
    scanf("%f %f", &num1, &num2);

    while(operacao != 5){
        printf("Escolha a operacao:\n 1 = soma\n 2 = subtracao\n 3 multiplicacao\n 4 divisao\n 5 sair\n");
        scanf("%d", &operacao);

        switch (operacao){
            case 1:
                printf("A soma eh: %.1f\n", num1 + num2);
            break;

            case 2:
                printf("A subtracao eh: %.1f\n", num1 - num2);
            break;

            case 3:
                printf("A multiplicacao eh: %1.f\n", num1 * num2);
            break;

            case 4:
                if(num2 == 0){
                 printf("Nao eh possivel dividir por 0");
                }else{
                 printf("A divisao eh: %.1f\n", num1 / num2);
                }
            break;

            case 5:
            printf("Saindo...\n");
            break;

            default:
            printf("Opcao invalida\n");
            break;
    }
 }
return 0;
}