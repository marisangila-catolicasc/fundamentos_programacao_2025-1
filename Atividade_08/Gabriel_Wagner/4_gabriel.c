#include <stdio.h>
int main() {
    int v[10];
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    printf("Ordem normal: ");
    for (int i = 0; i < 10; i++) printf("%d ", v[i]);
    printf("\nOrdem inversa: ");
    for (int i = 9; i >= 0; i--) printf("%d ", v[i]);
    printf("\n");
    return 0;
}