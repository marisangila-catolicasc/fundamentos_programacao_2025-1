#include <stdio.h>

int main() {
    int v[10] = {52, 71, 9, 1, 33, 67, 82, 20, 45, 10};
    int maior, menor;

    menor = v[0];
    maior = v[0];
    
    for (int i = 0; i < 10; i++){
        
        if (v[i] > maior){
            maior = v[i];
            
        } else if (v[i] < menor){
            menor = v[i];
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0; 
}