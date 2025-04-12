#include <stdio.h>
int main()
{

    int num, incremento;

    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Digite um número de incremento: ");
    scanf("%d", &incremento);

    for(int i = 0; i <= num; i += incremento)
    {
        printf("%d\n", i);
    }

    return 0;
}