#include <stdio.h>

int verifica_vetores_iguais(int *array, int *array2) {
    
    for (int i=1; i<= sizeof(array) / sizeof(array[0]); i++) {
        if (array[i] != array2[i]) {
            return 0;
        }
    }
    
    
    return 1;
}

int main() {
    int array[4];
    int array2[4];
    
    printf("Digite um vetor de inteiros: ");
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Digite um segundo vetor de inteiros: ");
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        scanf("%d", &array2[i]);
    }
    
    if (verifica_vetores_iguais(array, array2)) {
        printf("Os vetores sao iguais!");
    } else {
        printf("Os vetores nao sao iguais!");
    }
    
    return 0;
}