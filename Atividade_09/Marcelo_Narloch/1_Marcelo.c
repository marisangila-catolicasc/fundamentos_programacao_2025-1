#include <stdio.h>
int main() {
    int matriz[2][3], soma = 0;

    for(int i = 0; i < 2; i++){
        
    for(int j = 0; j < 3; j++){

   printf("Digite um numero para a posicao [%d][%d]:\n", i, j);
    scanf("%d", &matriz[i][j]);
    soma += matriz[i][j];
     }
    }
printf("a soma total eh: %d\n",soma);


    return 0;
}