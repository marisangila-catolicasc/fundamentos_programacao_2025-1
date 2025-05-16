#include <stdio.h>

int verifica_vetores(int vet[5], int vet2[5]){
    for(int i = 0; i < 5; i++){
        if(vet[i] == vet2[i]){
            return 1;
        }else{
            return 0;
        }
    }
}

int main(){
    
    int vet[5], vet2[5];

    for(int i = 0; i < 5; i++){
    printf("Informe o primeiro vetor. Posicao %d:\n", i+1);
    scanf("%d", &vet[i]);
    printf("Informe o segundo vetor. Posicao %d:\n", i+1);
    scanf("%d", &vet2[i]);
    }

    if(verifica_vetores(vet, vet2)){
        printf("eh igual");
    }else{
        printf("eh diferente");
    }

return 0;
}