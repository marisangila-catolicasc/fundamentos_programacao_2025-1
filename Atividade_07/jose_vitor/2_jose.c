#include <stdio.h>
#include <stdbool.h>

int main()
{  
  
    int opcao, n1, n2;
    bool repetir = true;
    
    while (repetir == true)
    {
        printf("\n  MENU \n"
                "1 - somar \n"
                "2 - subtrair \n"
                "3 - multiplicar \n"
                "4 - dividir \n"
                "5 - sair \n");

        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Digite um numero: \n");
                scanf("%d", &n1);

                printf("Digite outro numero: \n");
                scanf("%d", &n2);

                printf("%d + %d = %d \n", n1, n2, n1 + n2);
                
                break;

            case 2:
                printf("Digite um numero: \n");
                scanf("%d", &n1);

                printf("Digite outro numero: \n");
                scanf("%d", &n2);

                printf("%d - %d = %d \n", n1, n2, n1 - n2);

                break;

            case 3:
                printf("Digite um numero: \n");
                scanf("%d", &n1);

                printf("Digite outro numero: \n");
                scanf("%d", &n2);

                printf("%d x %d = %d \n", n1, n2, n1 * n2);

                break;

            case 4:
                printf("Digite um numero: \n");
                scanf("%d", &n1);

                printf("Digite outro numero: \n");
                scanf("%d", &n2);

                printf("%d / %d = %d \n", n1, n2, n1 / n2);

                break;

            case 5:
                repetir = false;

                break;

            default:
                printf("\n Opcao invalida! \n");
                
                break;
        }
    }
    
    return 0;

}
