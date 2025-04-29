#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n1;
    int aleatorio;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    srand(time(NULL));
    if (n1 == 0 || n1 > 100)
    {
        printf("Numero invalido, digite outro entre 0 e 100:\n");
        scanf("%d", &n1);
    }
    
    do
    {
    aleatorio = (rand() % 101);
    printf("Tentativa da maquina: %d\n", aleatorio);
    } while (aleatorio != n1);

    return 0;
}
