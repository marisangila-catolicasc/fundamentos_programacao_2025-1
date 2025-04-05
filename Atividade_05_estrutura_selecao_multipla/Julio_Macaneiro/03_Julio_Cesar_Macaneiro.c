#include <stdio.h>

int main() {
   int num1, num2, esc;

    printf("digite um numero:  ");
    scanf("%d", &num1);
    printf("digite outro numero:  ");
    scanf("%d", &num2);

    printf("[1] soma\n");
    printf("[2] subtração\n");
    printf("[3] multiplicação\n");
    printf("[4] divisão\n");
    printf("escolha uma operação:  ");
    scanf("%d", &esc);
    switch (esc){

        case 1:
         printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%d x %d = %d", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 == 0){
                printf("Indivisivel por 0");
            }else{
                printf("%d / %d = %d", num1, num2, num1 / num2);
            }
    
        
        break;
        
        
    }
        
        
        




    
    return 0;
}
