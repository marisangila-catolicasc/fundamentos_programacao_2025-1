#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano para verificar se é bissexto ou não: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) ||(ano % 400 == 0)){
        printf("O ano %d é bissexto.", ano);
    }else{
        printf("O ano %d não é bissexto.", ano);
    }

    return 0;
}