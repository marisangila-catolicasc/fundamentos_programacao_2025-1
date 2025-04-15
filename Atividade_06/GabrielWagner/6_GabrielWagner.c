#include <stdio.h>

int main() {
    int numero, incremento;

    printf("Numero?\n");
    scanf("%d", &numero);
    printf("Incremento?\n");
    scanf("%d", &incremento);

    for(int i = 0; i <= numero; i += incremento) {
        printf("%d\n", i);
    }

    return 0;
}
