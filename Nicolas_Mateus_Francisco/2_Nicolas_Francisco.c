#include <stdio.h>

int main() {

    int choice;
    int n1;
    int n2;
    int result;
    char buffer;

    do {

        printf("1 - Soma \n");
        printf("2 - Subtracao \n");
        printf("3 - Divisao \n");
        printf("4 - Multiplicacao \n");
        printf("5 - Sair \n");
        printf("Escola uma das operacoes acima: ");

        scanf("%d", &choice);

        if (choice != 5) {
            printf("Digite dois numeros para a operacao agora: ");
            scanf("%d", &n1);
            scanf("%d", &n2);
        }

        switch (choice) {
            case 1:
                result = n1 + n2;
                break;
            case 2:
                result = n1 - n2;
                break;
            case 3:
                result = n1 / n2;
                break;
            case 4:
                result = n1 * n2;
                break;
            case 5:
                break;
            default:
                printf("Input invalido!");
        }

        printf("O resultado da operacao escolhida foi %d! \n", result);
        scanf("%c", &buffer);
        printf("\n \n");

    } while(choice != 5);

   

    return 0;
}