#include <stdio.h>

int numa, numb;

int main() {

    printf("Digite o 1º numero: ");
    scanf("%d", &numb);
    for(int i = 2; i <= 10; i++){
    printf("Digite o %dº numero: ", i);
    scanf("%d", &numa);
    if(numa > numb){
        numb = numa;
    }
    else{
        numa = numa;
    }
    }

    printf("o numero maior eh: %d", numb);

    return 0;
}