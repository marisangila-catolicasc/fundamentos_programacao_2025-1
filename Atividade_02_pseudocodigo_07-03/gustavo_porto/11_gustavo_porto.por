
programa {
    funcao inicio() {
       
        real fahrenheit, celsius

        escreva("digite a temperatura em Fahrenheit (F): ")
        leia(fahrenheit)

        celsius = (5 * (fahrenheit - 32)) / 9
        escreva(fahrenheit, "F equivalem a ", celsius, "C.")
    }
}