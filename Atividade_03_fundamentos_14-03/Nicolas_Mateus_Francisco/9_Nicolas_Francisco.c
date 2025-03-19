#include <stdio.h>

int main() {

	float venda, compra;

	printf("Digite o valor da compra da mercadoria: ");
	scanf("%f", &compra);

	venda = compra + (compra * 0.2) + (compra * 0.3);

	printf("O valor de venda do produto sera de %.2f reais!\n", venda);

	return 0;
}
