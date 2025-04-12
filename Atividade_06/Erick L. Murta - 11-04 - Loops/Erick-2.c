#include <stdio.h>
#include<math.h>

int main(void){
    int i = 15;
    float n = 0.0;
    for(i; i < 200; i++){
        n = sqrt(i);
        if(n == (int)n){
            printf("%d eh tem uma raiz exata de: %f\n", i, n);

        }
    }

}