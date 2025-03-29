#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    printf("Digite o terceiro numero:\n");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("%d e o maior entre os tres", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("%d e o maior entre os tres", n2);
    } else {
        printf("%d e o maior entre os tres", n3);
    }

    return 0;
}
