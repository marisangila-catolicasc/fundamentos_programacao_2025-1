#include <stdio.h>
int main() {
    int v[20], num, cont = 0;
    for (int i = 0; i < 20; i++) scanf("%d", &v[i]);
    printf("Número para contar: ");
    scanf("%d", &num);
    for (int i = 0; i < 20; i++) {
        if (v[i] == num) cont++;
    }
    printf("O número %d aparece %d vezes\n", num, cont);
    return 0;
}