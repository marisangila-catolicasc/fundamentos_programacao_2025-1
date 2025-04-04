#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

if (idade < 18) {
printf("Não é eleitor.");
   
} else {
if (idade <= 65) {
printf("Eleitor obrigatorio.");

    
} else {
printf("Eleitor facultativo.");
}

    
}
    return 0;
}
