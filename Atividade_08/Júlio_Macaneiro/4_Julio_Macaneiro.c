#include <stdio.h>

int main() {
int v[10];

    
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    
    printf("Os valores na ordem normal será:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    
    printf("\nOs valores na ordem inversa será:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    return 0;
}
