#include <stdio.h>

int verifica_vetores_iguais(int vetor1[], int vetor2[]){
    for(int i = 0; i < 10; i++){
        if(vetor1[i] != vetor2[i]){
            return 0;
        }
    }
    return 1;
}

int main() {

    int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetor2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    if(verifica_vetores_iguais(vetor1, vetor2))
        printf("Os vetores sao iguais\n");
    else{
        printf("Os vetores sao diferentes\n");
    }    

    printf("mudando um elemento do vetor 2...\n");
    vetor2[5] = 100;            
    if(verifica_vetores_iguais(vetor1, vetor2))
        printf("Os vetores sao iguais\n");
    else{
        printf("Os vetores sao diferentes\n");
    }    
    
    return 0; 
}

