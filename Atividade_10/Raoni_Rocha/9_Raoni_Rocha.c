#include <stdio.h>

int soma_matriz(int matriz[3][3]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {

    int matriz[3][3] = {
        {63,  23, 93},
        {433, 54, 68},
        {27, 148, 89}
    };

    printf("a soma dos elementos da matriz é: %d\n", soma_matriz(matriz));
    
    return 0; 
}

