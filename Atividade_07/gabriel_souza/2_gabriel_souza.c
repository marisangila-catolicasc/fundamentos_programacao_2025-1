#include <stdio.h>
/*
Crie um menu de op¸c˜oes que deve ser exibido pelo menos uma vez. O usu´ario ter´a
as seguintes op¸c˜oes:
• 1 - somar
• 2 - subtrair
• 3 - multiplicar
• 4 - dividir
• 5 - sair
• Sempre que o usu´ario escolher uma op¸c˜ao, a opera¸c˜ao deve ser realizada e o
resultado deve ser exibido na tela. O usu´ario deve voltar ao menu depois de
visualizar o resultado da opera¸c˜ao e ter a op¸c˜ao de realizar uma outra opera¸c˜ao.
• O programa deve encerrar a execu¸c˜ao somente se o usu´ario escolher a op¸c˜ao
sair.
• Caso o usu´ario informe uma op¸c˜ao inv´alida, deve voltar ao menu para digitar
a op¸c˜ao novamente.

*/
int main() {

    int opcao;
    float num1, num2, resultado;

    do{
        printf("Escolha uma opcao:\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n\n");
        scanf("%d", &opcao);
    }while(opcao < 1 || opcao > 5);

    switch(opcao){
        case 1:{
            printf("Digite dois numeros para somar: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 + num2;
            printf("O resultado da soma e: %.2f\n", resultado);
            break;
        }case 2:{
                printf("Digite dois numeros para subtrair: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("O resultado da subtracao e: %.2f\n", resultado);
                break;
        }case 3:{
                printf("Digite dois numeros para multiplicar: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 * num2;
                printf("O resultado da multiplicacao e: %.2f\n", resultado);
                break;
        }case 4:{
            printf("Digite dois numeros para dividir: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 / num2;
            printf("O resultado da divisao e: %.2f\n", resultado);
            break;
        }case 5:{
            printf("Saindo...\n");
            break;
        }default:{
            printf("Opcao invalida!\n");
            break;
        }   
    }         
    
    return 0; 
}

