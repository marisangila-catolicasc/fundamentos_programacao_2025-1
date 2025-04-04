#include <stdio.h>

int main(void){

    printf("[1] - Adicao (+)\n");
    printf("[2] - Subtracao (-)\n");
    printf("[3] - Multiplicacao (*)\n");
    printf("[4] - Divisao (/)\n");
    printf("Qual das operacoes deseja realizar?\n");
    int resposta;
    scanf("%d", &resposta);
    int a;
    int b; 
    int c;
    printf("Digite um numero: \n");
    scanf("%d", &a);
    printf("Digite mais um numero: \n");
    scanf("%d", &b);

    switch (resposta)
    {
    case 1:
        c = a + b;
        printf("O resultado eh : %d", c);
        break;
    case 2:
        c = a - b;
        printf("O resultado eh : %d", c);
        break;
    case 3:
        c = a * b;
        printf("O resultado eh : %d", c);
        break;
    case 4:
    if (b != 0){
        c = a / b;
        
        if (c < 1)
        {
            printf("O resultado eh menor que zero e nao pode ser impresso");
            break;
        }
        printf("O resultado eh : %d", c);
    }else{
        printf("O segundo numero nao pode ser 0");
    }
    
        break;
    default:
        printf("Opção invalida");
        break;
    }

}