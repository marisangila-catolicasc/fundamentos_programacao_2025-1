#include <stdio.h>

int main() {
    int numero_1, numero_2, temp;
    
    printf("Numero numero_1?\n");
    scanf("%d", &numero_1);
    
    printf("Numero numero_2?\n");
    scanf("%d", &numero_2);

    temp = numero_1;
    numero_1 = numero_2;
    numero_2 = temp;

    printf("Agora numero_1 é ");
    printf("%d", numero_1);
    printf("\n");

    printf("E numero_2 é ");
    printf("%d", numero_2);
    printf("\n");

    return 0;
}
