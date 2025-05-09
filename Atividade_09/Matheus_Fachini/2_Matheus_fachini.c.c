#include <stdio.h>
int main() {
    int matriz[3][3];
    int num = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o numero da linha que deseja colocar: ");
    scanf("%d", &num);
    printf("Linha %d: ", num);
    for (int j = 0; j < 3; j++){
        printf("%d", matriz[num-1][j]);    
    }
    return 0;
}