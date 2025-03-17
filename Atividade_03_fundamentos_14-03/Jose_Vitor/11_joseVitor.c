#include<stdio.h>

int main(){
	
	float f, c;
	
	printf("Informe a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	
	c =  (5 * (f - 32)) / 9;
	
	printf("%.2fF equivalem a %.2fC.", f, c);
	
}
