// Exercício 11

programa {
  funcao inicio() {
    real fah
    real celsius

    escreva("Digite uma temperatura em fahrenheit: \n")
    leia(fah)

    celsius = (5*(fah - 32)) / 9

    escreva(fah, "ºF equivalem a ", celsius, "ºC")

  }
}
