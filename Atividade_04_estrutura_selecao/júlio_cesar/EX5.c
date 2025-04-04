#include <stdio.h>

int main(void) {
    int idade;

    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    
if (idade < 18) {
printf("Não eleitor (abaixo de 18 anos).");
   

} else {
if (idade <= 65) {
printf("Eleitor obrigatorio (de 18 a 65 anos).");


    
} else {
printf("Eleitor facultativo (acima de 65 anos).");
}





    
}
    return 0;
}
