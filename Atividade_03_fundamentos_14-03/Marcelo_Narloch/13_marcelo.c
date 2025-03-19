#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("digite um valor");
    scanf("%d",&a);
    
    printf("Digite um segundo numero");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a:%d\n" ,a);
    printf("b:%d\n",b);

}