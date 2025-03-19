#include <stdio.h>
#include <ctype.h>

int main() {

	char petType;
	float weight;
	int yearsOld;

	printf("Qual eh o tipo do seu pet? (C para cachorro e G para gato): ");
	scanf("%c", &petType);

	printf("Quantos anos de idade seu pet tem: ");
	scanf("%d", &yearsOld);

	printf("Qual eh o peso do seu pet: ");
	scanf("%f", &weight);

	petType = toupper(petType);

	if(petType == 'C') {
		printf("Seu cachorro tem %d anos de idade e pesa %.2fkg!\n", yearsOld, weight);
	} else if(petType == 'G') {
		printf("Seu gato tem %d anos de idade e pesa %.2fkg!\n", yearsOld, weight );
	} else {
		printf("Esse animal nao existe");
	}
	return 0;
}
