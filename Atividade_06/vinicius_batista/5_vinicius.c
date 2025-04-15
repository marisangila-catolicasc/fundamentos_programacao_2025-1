#include <stdio.h>

int main()
{
    float soma;
    for(int i = 1; i <= 100; i++){
        soma += i;
    }
    printf("A soma dos naturais eh %.0f\n", soma);
    return 0;
}
