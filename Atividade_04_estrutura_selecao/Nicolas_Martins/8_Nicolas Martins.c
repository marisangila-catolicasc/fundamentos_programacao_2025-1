#include <stdio.h>

int main() {
int ano;

printf("Digite um ano : \n");
scanf("%d", &ano);

if (ano > 0) {  
    
if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    
printf("O ano %d é bissexto.", ano);

} else {
printf("O ano %d nao é bissexto.", ano);
}

} else {
printf("Ano inválido.");
}

    
    return 0;
}
