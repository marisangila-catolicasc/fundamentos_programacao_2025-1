Conversão de Fahrenheit para Celsius
algoritmo "Temperatura"
var
    fahrenheit, celsius: real
inicio
    escreva("Digite a temperatura em Fahrenheit: ")
    leia(fahrenheit)
    celsius <- (5 * (fahrenheit - 32)) / 9
    escreva(fahrenheit, "°F equivalem a ", celsius, "°C.")
fimalgoritmo