#include <stdio.h>

int main() { 

    int quadrado;

    for (int i = 0; i < 15; i++) {
        quadrado = i * i;
        
        if (quadrado > 15 && quadrado < 200) {
            printf("%d = %d * %d \n", quadrado, i, i);
        }
        
    }

    return 0;
}