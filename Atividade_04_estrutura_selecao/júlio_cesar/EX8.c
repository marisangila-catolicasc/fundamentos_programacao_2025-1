#include <stdio.h>

int main() {
int ano;

printf("Digite um ano : ");
scanf("%d", &ano);

if (ano > 0) {  
    
if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    
printf("O ano %d é ano bissexto.", ano);



    
} else {
printf("O ano %d nao é ano bissexto.", ano);
}


    
} else {
printf("O ano deve ser maior que 0.");
}


    
    return 0;
}
