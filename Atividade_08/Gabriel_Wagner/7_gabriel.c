#include <stdio.h>
int main() {
    int v[10], inverso[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        inverso[9 - i] = v[i];
    }
    printf("Vetor inverso: ");
    for (int i = 0; i < 10; i++) printf("%d ", inverso[i]);
    printf("\n");
    return 0;
}