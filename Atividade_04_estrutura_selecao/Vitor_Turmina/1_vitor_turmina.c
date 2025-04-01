#include <stdio.h>

int main(){
     
    float num;

    printf("Informe um numero\n");
    scanf("%f", &num);

    if(num < 0){
        printf("Esse numero eh negativo!\n");
    }
    else{
        printf("Esse numero eh positivo!\n");
    }
return 0;
}
