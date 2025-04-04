#include <stdio.h>

int main ()

{
    float n1, n2;
    int op;
    float resultado;

    printf("informe um numero: \n");
    scanf("%f", &n1);
    printf("informe outro numero: \n");
    scanf("%f", &n2);

    printf("informe a operacao que voce deseja realizar: \n");
    printf("[1] = soma \n");
    printf("[2] = subtracao \n");
    printf("[3] = multiplicacao \n");
    printf("[4] = divisao \n");
    scanf("%d", &op);

    switch(op)
    {
     case 1:
     printf("soma: %.1f \n", n1 + n2);
    break;
    case 2:
    printf("subtracao: %.1f \n", n1 - n2);
    break;
    case 3:
    printf("multiplicacao: %.1f \n", n1 * n2);
    break;
    

 
    case 4:
    if(n2 == 0){
        printf("nao e possivel fazer a operacao por 0 \n");
    }else{
      printf("divisao: %.1f \n", n1 / n2);
      }
    break;

    default:
    printf("operacao invalida \n");
    break;


    

    }





    return 0;
}