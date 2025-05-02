#include <Stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int n, random;

    printf("digite um numero entre 0 e 100: \n");
    scanf("%d", &n);

    srand(time(NULL));

    do
    {
        random = rand() % 101;
        printf("numero aleatorio %d \n", random);
    } while (random != n);
        printf("numero achado !! \n");

    return 0;
}
