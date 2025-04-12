#include <stdio.h>
#include<math.h>

int main(void){
    int i = 0;
    int  multiplicador = 5;
    for(i; i*multiplicador < 105; i++){
        int result = 0;
        result = i*multiplicador;
        printf("%d\n",result);
    }

}