programa {
  funcao inicio() {
    real valor_fahrenheit, valor_celcius
    escreva("Insira uma temperatura em fahrenheit\n")
    leia(valor_fahrenheit)

    valor_celcius = (5 * (valor_fahrenheit - 32)) / 9

    escreva(valor_fahrenheit ,"°F equivalem a ", valor_celcius) escreva("°C")
  }
}
