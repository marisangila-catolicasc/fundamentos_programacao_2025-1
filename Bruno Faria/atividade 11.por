programa {
    funcao inicio() {
        
        real fahrenheit, celsius

        escreva("Digite a temperatura em graus Fahrenheit (ºF): ")
        leia(fahrenheit)

        celsius = (5 * (fahrenheit - 32)) / 9
        escreva(fahrenheit, "ºF equivalem a ", celsius, "ºC.")
    }
}
