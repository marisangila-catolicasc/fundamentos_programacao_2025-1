#include<stdio.h>

int main(){
	
	float valorCompra, valorVenda, representante, imposto;
	
	printf("Informe seu valor valor de compra: ");
	scanf("%f", &valorCompra);
	
	representante = (valorCompra * 20) / 100;
	imposto = (valorCompra * 30) / 100;
	
	valorVenda = valorCompra + representante + imposto;
	
	printf("O valor total de venda dessa mercadoria e de %.2f", valorVenda);
	
}
