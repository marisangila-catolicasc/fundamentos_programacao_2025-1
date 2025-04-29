#include <stdio.h>

int main () {

    int n1;
    int n2;

    printf("Digite dois numeros inteiros:");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 > n2) {
        while(n1 > n2) {
            n1--;
        }
    } else if (n1 < n2) {
        while (n1 < n2) {
            n1++;
        }
    }

    printf("Os valores dos numeros agora sao %d e %d!", n1, n2);

    return 0;
}