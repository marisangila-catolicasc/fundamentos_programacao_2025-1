programa {
  funcao inicio() {
    real fah
    real cel 

    escreva("Digite quantos Fahrenheit deseja converter para Celsius: \n")
    leia(fah)

    cel = 5 * (fah - 32) / 9

    escreva (fah,"°F", " equivalem a ", cel,"°C")

  }
}
