#include <stdio.h>

void meu_strcat(char *s1, const char *s2) {
	int i = 0;
	while (s1[i] != '\0') {
		i++;
	}

	int j = 0;
	while (s2[j] != '\0') {
		s1[i] = s2[j];
		i++;
		j++;
	}

	s1[i] = '\0';
}

int main() {
	char texto1[100] = "cala ";
	const char *texto2 = "breso!";
	
	meu_strcat(texto1, texto2);
	
	printf("resultado: %s\n", texto1);
	
	return 0;
}

