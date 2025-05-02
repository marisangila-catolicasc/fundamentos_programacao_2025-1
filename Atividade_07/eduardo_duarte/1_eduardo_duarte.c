#include <stdio.h>

int main()

{
    int num1, num2;

    printf("digite dois numeros: \n");
    scanf("%d %d", &num1, &num2);

    while (num1 != num2)
    {
        if (num1 > num2)
        {
            printf("%d\n", num1--);
        }
        else
        {
            printf("%d\n", num1++);
        }
    }

    return 0;
}