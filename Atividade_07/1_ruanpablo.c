#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a < b) {
            a++;
        } else {
            a--;
        }
        printf("%d\n", a);
    }

    return 0;
}