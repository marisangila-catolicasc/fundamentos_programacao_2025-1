#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int num1, num2;
int ten = 0;

    printf("digete um numero entre 0 e 100: ");
    scanf("%d", &num1);

    srand(time(NULL));

    do {
          num2 = rand() % 101;  
        printf("%d\n", num2);
          ten++;
    } while (num2 != num1);

    printf("\nlevou: %d tentativas\n", ten);

    return 0;
}
