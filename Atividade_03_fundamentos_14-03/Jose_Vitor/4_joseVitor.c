#include<stdio.h>

int main(){
	
	int idade;
	float peso;
	char tipo;
	
	printf("Idade do seu pet: ");
	scanf("%d", &idade);
	
	printf("Peso do seu pet: ");
	scanf("%f", &peso);
	
	printf("Qual tipo do seu pet?: \nc - cachorro \ng - gato \n");
	scanf(" %c", &tipo);
	
	printf("\nIdade: %d\n", idade);
	printf("Peso: %f\n", peso);
	printf("Tipo: %c\n", tipo);
	
}
