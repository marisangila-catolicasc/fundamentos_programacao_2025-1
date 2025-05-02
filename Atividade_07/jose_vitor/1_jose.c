#include <stdio.h>

int main()
{
	int n1, n2;

	printf("Digite um numero: ");
	scanf("%d", &n1);

	printf("Digite outro numero: ");
	scanf("%d", &n2);

	while (n1 != n2)
	{
		if (n1 > n2)
		{
			n1--;
		}
		else if (n1 < n2)
		{
			n1++;
		}
	}

	printf("%d e %d, Agora os dois numeros estao iguais! :D\n", n1, n2);

	return 0;
}