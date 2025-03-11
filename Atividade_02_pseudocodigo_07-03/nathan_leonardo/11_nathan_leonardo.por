programa {
  funcao inicio() {
    real f, c

    escreva("Digite a temperatura em Fahrenheit: ")
    leia(f)

    c = 5 * (f - 32) / 9

    escreva(f, "ºF equivalem a ", c, "ºC.")
  }
}
