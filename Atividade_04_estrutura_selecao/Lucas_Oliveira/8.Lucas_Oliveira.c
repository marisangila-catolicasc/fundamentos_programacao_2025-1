#include <stdio.h>
int main() {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if(ano>=0){
        if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
            printf("O ano %d eh bissexto", ano);
        }else{
            printf("O ano %d nao eh bissexto", ano);
        }}else{
        printf("O ano eh invalido");
    }
    return 0;
}