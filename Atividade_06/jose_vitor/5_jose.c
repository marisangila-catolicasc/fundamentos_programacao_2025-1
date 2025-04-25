#include <stdio.h>

int main() {
    
    int n = 0;

    for (int i = 0; i <= 100; i++)
    {
        n = n + i;
    }
    
    printf("A soma dos 100 numeros naturais e: %d", n);
    
    return 0;
}