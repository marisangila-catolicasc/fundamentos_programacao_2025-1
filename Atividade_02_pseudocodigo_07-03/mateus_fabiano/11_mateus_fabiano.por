programa {
  funcao inicio() {
    real graus_fahrenheit
    real graus_celsius
    escreva("Digite o valor de graus fahrenheit que deseja converter para celsius:\n")
    leia(graus_fahrenheit)
    graus_celsius = 5 * (graus_fahrenheit - 32) / 9
    escreva(graus_fahrenheit, "ºF equivalem a ", graus_celsius, "ºC.")
  }
}
