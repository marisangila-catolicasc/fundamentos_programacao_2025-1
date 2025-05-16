int verifica_palindromo(const char str[]) {
int i = 0, j = 0;
    while (str[j] != '\0') j++;
    j--;
    while (i < j) {
        if (str[i] != str[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
int main() {

    char str1[10];

    printf("Escreva a palavra:\n");
    scanf("%9[^\n]", str1);

    if (verifica_palindromo(str1)) {
        printf("%s eh um palindromo.\n", str1);
    } else {
        printf("%s não eh um palindromo.\n", str1);
    }
    return 0;
}