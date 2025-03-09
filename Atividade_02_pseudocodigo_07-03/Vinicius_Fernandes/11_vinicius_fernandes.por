programa {
  funcao inicio() {
    real temperatura_fahrenheit
    real temperatura_celsius

    escreva("Qual a temperatura em Fahrenheit ?\n")
    leia(temperatura_fahrenheit)

    temperatura_celsius = 5 * (temperatura_fahrenheit -32) / 9

    escreva(temperatura_fahrenheit, "°F equivalem a ", temperatura_celsius, "°C")
  }
}
