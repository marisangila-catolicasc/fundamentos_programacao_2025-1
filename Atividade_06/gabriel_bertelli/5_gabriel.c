#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int soma = 0;
    
    for (int i = 1; i <= 100; i++)
    {
        soma =+ i;
    }
    
    printf("A soma dos primeiros números naturais é: %d", soma);
    
    return 0;
}
