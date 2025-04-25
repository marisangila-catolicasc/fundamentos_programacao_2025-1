#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    while (num1 >= num2) {
        printf("Incrementando o segundo número...\n");
        printf("O segundo número agora é %d\n", num2);
        
        num2++;
    }

    while (num1 <= num2) {
        printf("Decrementando o segundo número...\n");
        printf("O segundo número agora é %d\n", num2);
        num2--;
    }
    return 0; 
}


