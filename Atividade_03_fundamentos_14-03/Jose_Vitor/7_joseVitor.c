#include<stdio.h>

int main(){
	
	float  cambio, dol, real;
	
	printf("Cambio do dolar hoje: ");
	scanf("%f", &cambio);
	
	printf("Valor em dolar que deseja converter: ");
	scanf("%f", &dol);
	
	real = dol * cambio;
	
	printf("Sao necessario %.2f reais para comprar %.2f dolares", real, dol);
	
}
