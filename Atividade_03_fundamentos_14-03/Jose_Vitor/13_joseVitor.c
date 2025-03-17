#include<stdio.h>

int main(){
	
	int a, b, troca;
	
	printf("De um valor para A: ");
	scanf("%d", &a);
	
	printf("De um valor para B: ");
	scanf("%d", &b);
	
	troca = a;
	a = b;
	b = troca;
	
	printf("A: %d\n", a);
	printf("B: %d\n", b);
	
}
