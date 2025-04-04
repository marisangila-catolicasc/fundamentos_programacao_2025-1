#include <stdio.h>
/*
Fa¸ca um programa que, a partir de dois n´umeros, pergunte ao usu´ario qual a
opera¸c˜ao que ele deseja (+, -, / ou *) e mostre o resultado dessa opera¸c˜ao com
os dois n´umeros na tela. A divis˜ao poder´a ser feita somente se o 2º n´umero n˜ao for
zero (Aqui a estrutura if deve ser utilizada).
*/
int main() {
    float num1, num2, resultado;
    char operacao;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite a operacao desejada (+, -, /, *): ");
    scanf(" %c", &operacao);

    switch (operacao){
        case '+':
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0 && num2 > 0){
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f", num1, num2, resultado);
            }
            else{
                printf("Nao e possivel dividir por zero");
            }
            break;    
        default:
            printf("Operacao invalida");
            break;
    }
    return 0; 
}

