#include <stdio.h>

int main (){
    float num;

    printf("quantas macas vc quer: ");
    scanf ("%f", &num);



    if(num <=12){
        printf("voce vai pagar: %.2f", num * 2.30,"reais");
        }
        else{
         printf("voce vai pagar: %.2f", num * 1.95,"reais");
       }
    return 0;
}
