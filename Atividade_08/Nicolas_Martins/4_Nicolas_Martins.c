#include <stdio.h>

int main() {
    int v[10];
    int i;

    for (i = 0; i < 10; ++i) {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    printf("Os valores na ordem normal serão:\n");
    for (i = 0; i < 10; ++i) {
        printf("%d ", v[i]);
    }
    printf("\nOs valores na ordem inversa serão:\n");
    for (i = 9; i >= 0; --i) {
        printf("%d ", v[i]);
    }


    printf("\n");

    return 0;
}
