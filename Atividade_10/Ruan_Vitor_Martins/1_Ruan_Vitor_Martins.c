#include <stdio.h>


	int meu_strlen(const char *str){
	int tam = 0;
	while (str[tam] != '\0'){
		tam++;
	}
	return tam;	
}
	int main(){
		const char *texto = "111";
		printf ("tamanho do string: %d \n", meu_strlen(texto));
		return 0 ;
	}




