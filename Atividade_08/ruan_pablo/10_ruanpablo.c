#include <stdio.h>

int main() {
    int v[20], x, cont = 0;
    for (int i = 0; i < 20; i++) scanf("%d", &v[i]);
    scanf("%d", &x);
    for (int i = 0; i < 20; i++) {
        if (v[i] == x) cont++;
    }
    printf("Aparece %d vezes\n", cont);
    return 0;
}