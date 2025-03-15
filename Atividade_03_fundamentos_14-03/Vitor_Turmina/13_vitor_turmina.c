int main(void){

    float a, b, aux;

    printf("Informe o numero 'a':\n");
    scanf("%f", &a);
    printf("Informe o numero 'b':\n");
    scanf("%f", &b);

    aux = a;
    a = b;
    b = aux;

    printf("'a' agora eh: %.1f\n", a);
    printf("'b' agora eh: %.1f", b);
    
    return 0;
}
