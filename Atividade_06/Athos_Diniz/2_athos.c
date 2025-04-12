#include <stdio.h>

int main() {
    int i;
    
    for(i = 15; i <= 200; i++) {
        int quadrado = i * i;
        printf("O quadrado de %d é %d\n", i, quadrado);
    }

    return 0;
}
