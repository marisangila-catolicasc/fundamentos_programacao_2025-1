#include <stdio.h>

int main() {
    int s, n = 0;
    float m;

    for (int i = 1; i <= 8; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &s);
        n += s;  
    }

    m = n / 8.0;  

    printf("A média dos números informados é: %.2f\n", m);

    return 0;
}
