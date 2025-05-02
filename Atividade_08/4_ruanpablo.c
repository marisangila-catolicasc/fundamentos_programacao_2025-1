#include <stdio.h>

int main() {
    int v[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    printf("Ordem direta: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\nOrdem inversa: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}