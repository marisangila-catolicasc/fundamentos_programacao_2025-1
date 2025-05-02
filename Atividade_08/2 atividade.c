#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int v[n], maior, menor;
    for(i = 0; i < n; i++) scanf("%d", &v[i]);
    maior = menor = v[0];
    for(i = 1; i < n; i++) {
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }
    printf("%d %d", maior, menor);
    return 0;
}