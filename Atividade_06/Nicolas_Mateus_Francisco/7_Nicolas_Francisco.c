#include <stdio.h>

int main() {

	int arr[8];
	
	printf("Digite 8 numeros: \n");
	for(int i=0; i< 8; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Os numeros informados sao: \n");
	for(int i=0; i<8; i++) {
		printf("%d \n", arr[i]);
	}
	return 0;

}
