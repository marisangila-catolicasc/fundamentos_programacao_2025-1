#include <stdio.h>

int main(){
    int n1, n2;
    n1 = 10;
    n2 = 2;
    int operador;
    float resultado;
    printf("Os numeros serao %d e %d, agora escolha um operador:\n", n1, n2);
    printf("Digite apenas o numero do operador: \n [1]+ adicao\n [2]- subtracao\n [3]* multiplicacao\n [4]/ divisao\n");
    scanf("%d", &operador);
    switch(operador){
        case 1:
        resultado = n1+n2;
        break;
        case 2:
        resultado = n1-n2;
        break;
        case 3:
        resultado = n1*n2;
        break;
        case 4:
        if(n2==0){
            printf("Nao eh possivel dividir um numero por zero");
        }
        resultado = n1/n2;
        break;
        default:
        printf("Operador nao reconhecido");
        break;
        
    }
    printf("O resultado da operacao eh %.2f.", resultado);
    return 0;
}