#include <stdio.h>

int num = 0, inc = 0, i;

int main() {
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Digite outro numero: ");
    scanf("%d", &inc);

    for (int i = 0; i <= num / inc; i++){
        printf("%d\n", inc * i);
    }

    return 0;
}