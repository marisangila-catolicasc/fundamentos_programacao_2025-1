#include <stdio.h>

int main()
{

    int num, incremento;

    printf("de um numero alvo: ");
    scanf("%d", &num);
    printf("de um de incremento: ");
    scanf("%d", &incremento);

    for(int i = 0; i <= num; i += incremento)
    {
        printf("%d\n", i);
    }

    return 0;
}