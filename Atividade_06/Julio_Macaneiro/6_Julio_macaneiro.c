#include <stdio.h>

int main() {
int num, incremento;

    printf("Digite o Numero:");
    scanf("%d", &num);
    
    printf("Digite o Incremento:");
    scanf("%d", &incremento);

    for(int i = 0; i <= num; i += incremento) {
        printf("A saída do programa será: %d\n", i);
    }

    return 0;
}