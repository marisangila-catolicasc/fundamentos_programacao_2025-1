#include<stdio.h>

int main(){
	
	float valorInicial, taxaJuros, valorFinal;
	int anos = 3;
	
	printf("Valor investido: ");
	scanf("%f", &valorInicial);
	
	taxaJuros = (valorInicial * 5) / 100;
	valorFinal = valorInicial + (taxaJuros * anos);
	
	printf("O valor final de seu investimento daqui a 3 anos sera de %.2f", valorFinal);
	
}
