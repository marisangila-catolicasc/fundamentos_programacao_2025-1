#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    
    /*
   2. Crie um menu de opcoes que deve ser exibido pelo menos uma vez. O usuario tera
as seguintes opcoes:
• 1 - somar
• 2 - subtrair
• 3 - multiplicar
• 4 - dividir
• 5 - sair
   • Sempre que o usuario escolher uma opcao, a operacao deve ser realizada e o
resultado deve ser exibido na tela. O usuario deve voltar ao menu depois de
visualizar o resultado da operacao e ter a opcao de realizar uma outra operacao.
   • O programa deve encerrar a execucao somente se o usuario escolher a opcao
sair.
   • Caso o usuario informe uma opcao invalida, deve voltar ao menu para digitar
a opcao novamente.
    */    
    int opcao;
    float num1, num2, resultado;

    do{
        printf("Menu de opcoes:\n\n");
        printf("1 - somar\n");
        printf("2 - subtrair\n");
        printf("3 - multiplicar\n");
        printf("4 - dividir\n");
        printf("5 - sair\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
            printf("Soma\n\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("O resultado da soma e: %.2f\n\n", resultado);
            break;
            
            case 2:
            printf("Subtracao\n\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("O resultado da subtracao e: %.2f\n\n", resultado);
            break;

            case 3:
            printf("Multiplicacao\n\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("O resultado da multiplicacao e: %.2f\n\n", resultado);
            break;

            case 4:
            printf("Divisao\n\n");
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 / num2;
            printf("O resultado da divisao e: %.2f\n\n", resultado);
            break;

           case 5:
            printf("Saindo...\n\n");
            break;}

            
    } while(opcao != 5);

   
    return 0;
}
