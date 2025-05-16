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
    int arrayA[100] = {10, 20, 30,};
    int arrayB[200] = {10, 20, 30,};

    if (verifica_vetores_iguais(arrayA, arrayB)) {
        printf("Vetores iguais!\n");
    } else {
        printf("Vetores diferentes!\n");
    }

    if (verifica_vetores_iguais(arrayA, arrayB)) {
        printf("Os Vetores são iguais!\n");
    } else {
        printf("OsVetores eh diferentes!\n");
    }

    return 0;
}
