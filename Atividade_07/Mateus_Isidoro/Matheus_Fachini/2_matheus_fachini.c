#include <stdio.h>
int main(void)
{
    float n1 , n2;
    float resultado;
    int operacao;
    int escolha = 0;

    while (escolha != 5){
    printf ("coloque os numeros desejados para operaçao\n");
    scanf (" %f  %f", &n1, &n2);

    
        
    printf ("coloque a operaçao desejada\n");
    scanf ("%c", &operacao);

    printf ("[1] - soma\n");
    printf ("[2] - subtraçao\n");
    printf ("[3] - multiplicaçao\n");
    printf ("[4] - divisao\n");
    printf ("[5] - sair\n");
printf ("escolha uma operaçao\n");
    scanf ("%d", &operacao);

    switch (operacao){
        case 1:
         resultado = n1 + n2;
        break;
        case 2:
        resultado = n1 - n2;
        break;
        case 3:
        resultado = n1 * n2;
        break;
        case 4:
        resultado = n1 / n2;
        break;
        case 5:
        printf ("saindo...\n");
        break;
    default:
        printf ("operaçao invalida\n");
        break;
    
    }
    printf ("o resultado da operaçao é: %.2f\n", resultado);
}
    return 0;
}