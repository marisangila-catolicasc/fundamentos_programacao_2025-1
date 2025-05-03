#include <stdio.h>
int main() {
    int a, b;
    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);
    while (a != b) {
        printf("%d\n", a);
        if (a < b) a++;
        else a--;
    }
    printf("Agora os dois são iguais: %d\n", a);
    return 0;
}