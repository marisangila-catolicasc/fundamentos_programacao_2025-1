#include<stdio.h>

int main(){
    
    int n1, n2, operacao;
    
    printf("Informe um numero: ");
    scanf("%d", &n1);
    
    printf("Informe outro numero: ");
    scanf("%d", &n2);
    
    printf("Qual operacao voce deseja realizar: \n 1- soma\n 2- subtracao\n 3- divisao\n 4- multiplicacao\n");
    scanf("%d", &operacao);
    
    switch(operacao){
        
        case 1:
            printf("%d + %d = %d", n1, n2, n1 + n2);
            break;
        case 2:
            printf("%d - %d = %d", n1, n2, n1 - n2);
            break;
        case 3:
            if(n2 == 0){
                printf("erro! tente novamente");
                break;
            }else{
                printf("%d / %d = %d", n1, n2, n1 / n2);
                break;
            }
        case 4:
            printf("%d x %d = %d", n1, n2, n1 * n2);
            break;
        default:
            printf("erro! opcao invalida!");
            break;
    }
    return 0;
}