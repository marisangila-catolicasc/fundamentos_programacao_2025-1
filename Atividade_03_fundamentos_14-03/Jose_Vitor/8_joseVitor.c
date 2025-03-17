#include<stdio.h>
#include<math.h>

int main(){
	
	float raio, altura, volume;
	
	printf("Raio: ");
	scanf("%f", &raio);
	
	printf("Altura: ");
	scanf("%f", &altura);
	
	volume = M_PI * pow(raio, 2) * altura;
	
	printf("O volume da lata e: %.2f", volume); 
	
}
