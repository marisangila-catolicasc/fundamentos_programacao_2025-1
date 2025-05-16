#include <stdio.h>
#include <stdlib.h>

void meu_strcat(char *dest, const char *orig){
    int i = 0;
    while(dest[i] != '\0'){
        i++;
    }

    int j = 0;
    while(orig[j] != '\0'){
        dest[i] = orig[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main(){

    char str1[100] = "Ola ", str2[10] = "Mundo";

    meu_strcat(str1, str2);

    printf("Juntas:\n %s", str1);

}