#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    while (n1 >= n2) {
        printf("O segundo número agora é %d\n\n", n2);

        n2++;
    }

    while (n1 <= n2) {
        printf("O segundo número agora é %d\n\n", n2);
        n2--;
    }
    return 0; 
}