#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int idade;
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (idade < 18) {
        printf("Não Eleitor.\n");
    } else {
        if (idade <= 65) {
            printf("Eleitor Obrigatório.\n");
        } else {
            printf("Eleitor Facultativo.\n");
        }
    }
    
    return 0;
}
