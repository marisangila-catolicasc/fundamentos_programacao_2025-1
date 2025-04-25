#include <stdio.h>

int main() {
    int numero, incremento;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("Digite o incremento: ");
    scanf("%d", &incremento);
    
    printf("Saida do programa = ");
    
    for(int i = 0; i <= numero; i += incremento) {
        printf("%d", i);
        
        if(i + incremento <= numero) {
            printf(", ");
        }
    }
    
    printf("\n");
    
    return 0;
}
