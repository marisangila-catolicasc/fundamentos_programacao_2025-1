#include<stdio.h>
#include<math.h>

int main(){
	
	int num1, num2;
	float restoDivisao;
	
	printf("Informe um numero: ");
	scanf("%d", &num1);
	
	printf("Informe outro numero: ");
	scanf("%d", &num2);
	
	printf("Soma dos numeros: %d \n", num1 + num2);
	printf("Subtracao dos numeros: %d \n", num1 - num2);
	printf("Multiplicacao dos numeros: %d \n", num1 * num2);
	printf("Divisao do primeiro pelo segundo: %.2f \n", (float)num1 / num2);
	printf("O primeiro numero elevado ao segundo numero: %.2f \n", pow(num1,num2));
	printf("O resto da divisao do primeiro pelo segundo: %d \n", num1 % num2);
	
}
