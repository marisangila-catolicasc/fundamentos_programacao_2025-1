#include <stdio.h>
int main(){

    int n, incremento;

    printf ("Digite um numero: ");
    scanf("%d", &n);

    printf("Digite um incremento: ");
    scanf("%d", &incremento);

    for (int i = 0; i <= n; i += incremento)
{
    printf("%d\n", i);
}

    return 0;
}
