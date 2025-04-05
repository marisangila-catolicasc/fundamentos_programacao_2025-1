#include <stdio.h>
int main(){

float n1;
float n2; 
float resultado;
int operacao;
        printf("digite dois numeros: \n");
        scanf("%f %f", &n1, &n2);
    
    printf("Qual operação deseja realizar?\n");
        
        printf("1 = Soma\n");
        printf("2 = Subtração\n");    
        printf("3 = Multiplicação\n");
        printf("4 = Divisão\n");
    
    scanf("%i", &operacao);

        switch (operacao) {
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
        default:
            printf("Operação invalida\n");
break;
            
    if (n2 = 0 && operacao == '/') {
        printf("Não é possivel dividir por zero\n"); }    
}
    printf(" o resultado é: %.2f\n", resultado);
    
return 0;
}