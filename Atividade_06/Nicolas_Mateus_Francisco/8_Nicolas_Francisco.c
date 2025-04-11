#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {

	int *valA = a;
	int *valB = b;
	return *valA - *valB;
}

int main() {

	int arr[10];

	printf("Digite 10 numeros, nao pode repetir: \n");
	for(int i=0; i<10; i++) {
		scanf("%d", &arr[i]);
	}

	int size = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, size, sizeof(arr[0]), compare);

	printf("O maior numero informado eh %d! \n", arr[10]);

	return 0;
}
