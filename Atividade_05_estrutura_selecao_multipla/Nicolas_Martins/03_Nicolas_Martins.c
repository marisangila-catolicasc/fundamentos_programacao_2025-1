#include <stdio.h>

int main() {
   int num1, num2;
    int escolha;
    printf("escolha um numero:  ");
    scanf("%d", &num1);
    printf("escolha outro numero:  ");
    scanf("%d", &num2);

    printf("1 soma\n");
    printf("2 subtração\n");
    printf("3 multiplicação\n");
    printf("4 divisão\n");
    printf("escolha uma operação:  ");
    scanf("%d", &escolha);
    switch (escolha){

        case 1:
         printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 == 0){
                printf("erro");
            }else{
                printf("%d / %d = %d", num1, num2, num1 / num2);
            }
    
        
        break;
        
        
    }
        
        
        




    
    return 0;
}
