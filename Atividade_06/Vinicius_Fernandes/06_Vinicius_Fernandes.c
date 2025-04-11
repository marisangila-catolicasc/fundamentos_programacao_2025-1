#include <stdio.h>

int main() {
    int num, incremento;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Digite um incremento inteiro: ");
    scanf("%d", &incremento);

    for (int i = 0; i <= num; i += incremento) {
        printf("%d ", i);
    }
    
  return 0;
}