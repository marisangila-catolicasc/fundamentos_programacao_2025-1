#include <stdio.h>

int main() {
    
    int div;

    for (int i = 0; i < 101; i++) {

        div = i % 5;

        if (div == 0) {
            printf("%d \n", i);
        }
    }
        
    return 0;
}