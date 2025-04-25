#include <stdio.h>

int main()
{
    int i, quadrado;
    
    for (i = 15; i <= 200; i++){
        quadrado = i * i; 

        printf("o quadrado de %d e: %d \n", i, quadrado);
    }
    return 0;
}
